function set_default_workspace()
    workspace(PANORAMA_NAME)
        defaultplatform("i386")
        cdialect("C17")
        cppdialect("C++20")
        warnings("Extra")
        externalwarnings("Extra")
        sanitize("Address")
        
        configurations
        {
            "Release"
        }
        platforms
        {
            "i386"
        }
        flags
        {
            "MultiProcessorCompile"
        }
        buildoptions
        {
            "-I" .. CFG_PLATFORM .. SLASH_DIRECTORY,
            "-I.",
            "-I" .. OBJ_DIRECTORY .. SLASH_DIRECTORY .. CFG_PLATFORM,
            "-I" .. PANORAMA_INCLUDE_DIRECTORY,
            "-I" .. OAK_INCLUDE_DIRECTORY,
            "-I" .. SDK_INCLUDE_DIRECTORY,
            "-I" .. CRT_INCLUDE_DIRECTORY,
        }
        defines
        {
            "CONDITION_HANDLING=1",
            "NT_UP=1",
            "NT_INST=0",
            "WIN32=100",
            "_NT1X_=100",
            "WINNT=1",
            "_WIN32_WINNT=0x502",
            "WINVER=0x502",
            "_WIN32_IE=0x600",
            "WIN32_LEAN_AND_MEAN=1",
            "DEVL=1",
            --iif(PANORAMA_DEBUG_FLAG == "ntsd" or PANORAMA_DEBUG_FLAG == "cvp" or PANORAMA_DEBUG_FLAG == "sym", { "DEVL=1", "DBG=1" }, {  }),
            --"__BUILDDATE__=" .. os.date('%d%m%y-%H%M'),
            "__BUILDMACHINE__=" .. os.getenv("USERNAME"),
            "FPO=1",
        }
    
        filter("toolset:msc")
            buildoptions
            {
                "-cgthreads8",
                "-X",
                "-diagnostics:caret"
            }
            linkoptions
            {
                "-NODEFAULTLIB"
            }
        
        filter("toolset:gcc or toolset:clang")
            buildoptions
            {
                "-nostdinc",
                "-nostdinc++"
            }
            linkoptions
            {
                "-nostdinc",
                "-nostdinc++"
            }
    
        filter("platforms:i386")
            defines
            {
                "_X86_=1",
                "i386=1"
            }
    
        filter("configurations:Release")
            symbols("Off")
            optimize("Full")
            omitframepointer("On")
            stringpooling("On")
            rtti("Off")
    
            defines
            {
                "_NDEBUG",
                "NDEBUG",
                "RELEASE"
            }
            flags
            {
                "FatalWarnings",
                "LinkTimeOptimization"
            }
            buildoptions
            {
                "-Ot",
                "-Ob3",
                "-GT",
                "-Zp8",
                "-GS"
            }
    
        if (os.host() == "windows") then
            set_pre_build_commands
            ({
                "set PATH=%PATH%" .. TOOLS_DIRECTORY .. ";" .. BASE_DIRECTORY .. "\\tools;" .. BASE_DIRECTORY .. "\\tools\\perl\\bin"
            })
        else
            -- prebuildcommands
            -- {
            -- }
        end
end

function set_project(project_path, project_kind)
    project_slash = "/"
    project_split = string.explode(project_path, project_slash)
    project_name = ""
    project_group = ""

    for _, v in next, project_split do
        project_name = v
    end

    for i, v in next, project_split do
        if (v == project_name) then
            break
        end

        if (i == 1) then
            project_group = project_group .. v
        else
            project_group = project_group .. project_slash .. v
        end
    end

    group(project_group)
        project(project_name)
        kind(project_kind)
        location(project_group)
        targetdir(project_group .. SLASH_DIRECTORY .. OBJ_DIRECTORY .. SLASH_DIRECTORY .. CFG_PLATFORM)
        objdir(project_group .. SLASH_DIRECTORY .. OBJ_DIRECTORY .. SLASH_DIRECTORY .. CFG_PLATFORM)
end

function set_lib_project(project_path)
    set_project(project_path, "StaticLib")
end

function set_pre_build_commands(_pre_build_commands)
    prebuildcommands(_pre_build_commands)
end

function set_files(project_files_names)
    for _,v in pairs(project_files_names) do
        files(PRJ_GROUP .. SLASH_DIRECTORY .. OBJ_DIRECTORY .. SLASH_DIRECTORY .. CFG_PLATFORM .. SLASH_DIRECTORY .. v)
    end 
end

function set_defines(_defines)
    defines(_defines)
end

function set_post_build_commands(_post_build_commands)
    postbuildcommands(_post_build_commands)
end

function get_midl_command(proxy_file, dlldata_file, idd_file, tlb_file, header_file, idl_file)
    command = "midl" ..
             " /I " .. BINARIES_DIRECTORY ..
             " /I " .. PANORAMA_INCLUDE_DIRECTORY ..
             " /I " .. OAK_INCLUDE_DIRECTORY ..
             " /I " .. SDK_INCLUDE_DIRECTORY ..
             " /I " .. CRT_INCLUDE_DIRECTORY ..
             " /char unsigned" ..
             " /proxy " .. proxy_file ..
             " /dlldata " .. dlldata_file ..
             " /iid " .. idd_file ..
             " /tlb " .. tlb_file ..
             " /header " .. header_file ..
             " /D _MIDL_USE_GUIDDEF_" ..
             " /D __RPCNDR_H__" ..
             " /D __RPC_H__" ..
             " /D RPC_NO_WINDOWS_H" ..
             " /D COM_NO_WINDOWS_H" ..
             " /D GUID_DEFS_ONLY" ..
             " /D _WCHAR_T_DEFINED" ..
             " /no_stamp" ..
             " /nologo" ..
             " /WX" ..
             " /Zp8" ..
             " /error all" ..
             " " .. idl_file

    filter("platforms:i386")
        command = command ..
                 " /D i386" ..
                 " /D _X86_"

    return command
end