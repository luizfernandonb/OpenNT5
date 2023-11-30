include "variables.lua"
include "functions.lua"

-- FREE_BUILD = false
-- if (PANORAMA_DEBUG_FLAG == "" or PANORAMA_DEBUG_FLAG == "ntsdnodbg") then
--     FREE_BUILD = true
-- end

set_default_workspace()

set_lib_project(PANORAMA_NAME .. "/published/uuidwin")
set_pre_build_commands
({
    "hsplit -e -o " .. BINARIES_DIRECTORY .. "\\ddeml.x " .. BINARIES_DIRECTORY .. "\\ddemlp.h ddeml.w",
    "wcshdr < " .. BINARIES_DIRECTORY .. "\\ddeml.x > " .. BINARIES_DIRECTORY .. "\\ddeml.h",
    "hsplit -e -o " .. BINARIES_DIRECTORY .. "\\ddeml.x " .. BINARIES_DIRECTORY .. "\\ddemlp.h ddeml.w",
    "hsplit -o " .. BINARIES_DIRECTORY .. "\\ime.x " .. BINARIES_DIRECTORY .. "\\imep.x ime.w",
    "wcshdr < " .. BINARIES_DIRECTORY.. "\\ime.x > " .. BINARIES_DIRECTORY .. "\\ime.h",
    "hsplit -o " .. BINARIES_DIRECTORY.. "\\ime.x " .. BINARIES_DIRECTORY .. "\\imep.x ime.w",
    "wcshdr < " .. BINARIES_DIRECTORY.. "\\imep.x > " .. BINARIES_DIRECTORY .. "\\imep.h",
    
    "cd " .. BINARIES_DIRECTORY,
    "{COPYFILE} ..\\..\\imm.w .",
    "hdivide imm.w",
    "cd ..\\..\\",
    "wcshdr < " .. BINARIES_DIRECTORY .. "\\imm.x > " .. BINARIES_DIRECTORY .. "\\imm.h",
    
    "cd " .. BINARIES_DIRECTORY,
    "{COPYFILE} ..\\..\\imm.w .",
    "hdivide imm.w",
    "cd ..\\..\\",
    "wcshdr < " .. BINARIES_DIRECTORY .. "\\immdev.x > " .. BINARIES_DIRECTORY .. "\\immdev.h",
    
    "cd " .. BINARIES_DIRECTORY,
    "{COPYFILE} ..\\..\\imm.w .",
    "hdivide imm.w",
    "cd ..\\..\\",
    "wcshdr < " .. BINARIES_DIRECTORY .. "\\immp.x > " .. BINARIES_DIRECTORY .. "\\immp.h",
    
    get_midl_command(BINARIES_DIRECTORY .. "\\oleacc_p.c", BINARIES_DIRECTORY .. "\\dlldata.c", BINARIES_DIRECTORY .. "\\oleacc_i.c", BINARIES_DIRECTORY .. "\\oleacc.tlb", BINARIES_DIRECTORY .. "\\oleacc.h", "oleacc.idl"),
    
    "hsplit -e -x " .. BINARIES_DIRECTORY .. "\\winuser.rh rwinuser -x " .. BINARIES_DIRECTORY .. "\\pbt.h pbt -o " .. BINARIES_DIRECTORY .. "\\winuser.x " .. BINARIES_DIRECTORY .. "\\winuserp.x -i winuser.w",
    "hsplit -e -o " .. BINARIES_DIRECTORY .. "\\wincon.x " .. BINARIES_DIRECTORY .. "\\winconp.x wincon.w",
    "wcshdr < " .. BINARIES_DIRECTORY .. "\\wincon.x > " .. BINARIES_DIRECTORY .. "\\wincon.h",
    "hsplit -e -o " .. BINARIES_DIRECTORY .. "\\wincon.x " .. BINARIES_DIRECTORY .. "\\winconp.x wincon.w",
    "wcshdr < " .. BINARIES_DIRECTORY .. "\\winconp.x > " .. BINARIES_DIRECTORY .. "\\winconp.h",
    "hsplit -e -o " .. BINARIES_DIRECTORY .. "\\windef.h nul windef.w",
    "hsplit -e -o " .. BINARIES_DIRECTORY .. "\\windows.x " .. BINARIES_DIRECTORY .. "\\windowsp.x windows.w",
    "wcshdr < " .. BINARIES_DIRECTORY .. "\\windows.x > " .. BINARIES_DIRECTORY .. "\\windows.h",
    "hsplit -e -o " .. BINARIES_DIRECTORY .. "\\windows.x " .. BINARIES_DIRECTORY .. "\\windowsp.x windows.w",
    "wcshdr < " .. BINARIES_DIRECTORY .. "\\windowsp.x > " .. BINARIES_DIRECTORY .. "\\windowsp.h",
    "hsplit -e -o " .. BINARIES_DIRECTORY .. "\\wingdi.x " .. BINARIES_DIRECTORY .. "\\wingdip.x wingdi.w",
    "wcshdr < " .. BINARIES_DIRECTORY .. "\\wingdi.x > " .. BINARIES_DIRECTORY .. "\\wingdi.h",
    "hsplit -e -o " .. BINARIES_DIRECTORY .. "\\wingdi.x " .. BINARIES_DIRECTORY .. "\\wingdip.x wingdi.w",
    "wcshdr < " .. BINARIES_DIRECTORY .. "\\wingdip.x > " .. BINARIES_DIRECTORY .. "\\wingdip.h",
    "hsplit -e -x " .. BINARIES_DIRECTORY .. "\\winuser.rh rwinuser -x " .. BINARIES_DIRECTORY .. "\\pbt.h pbt -o " .. BINARIES_DIRECTORY .. "\\winuser.x " .. BINARIES_DIRECTORY .. "\\winuserp.x -i winuser.w",
    "wcshdr < " .. BINARIES_DIRECTORY .. "\\winuser.x > " .. BINARIES_DIRECTORY .. "\\winuser.y",
    "call shfusion2 " .. BINARIES_DIRECTORY .. "\\winuser.y > " .. BINARIES_DIRECTORY .. "\\winuser.h SetStubsFile('" .. BINARIES_DIRECTORY .. "\\winuser.inl')",
    "hsplit -e -x " .. BINARIES_DIRECTORY .. "\\winuser.rh rwinuser -x " .. BINARIES_DIRECTORY .. "\\pbt.h pbt -o " .. BINARIES_DIRECTORY .. "\\winuser.x " .. BINARIES_DIRECTORY .. "\\winuserp.x -i winuser.w",
    "hsplit -e -x " .. BINARIES_DIRECTORY .. "\\winuser.rh rwinuser -x " .. BINARIES_DIRECTORY .. "\\pbt.h pbt -o " .. BINARIES_DIRECTORY .. "\\winuser.x " .. BINARIES_DIRECTORY .. "\\winuserp.x -i winuser.w",
    "wcshdr < " .. BINARIES_DIRECTORY .. "\\winuserp.x > " .. BINARIES_DIRECTORY .. "\\winuserp.h",
    "wcshdr < conapi.w > " .. BINARIES_DIRECTORY .. "\\conapi.h",
    
    get_midl_command(BINARIES_DIRECTORY .. "\\msaatext_p.c", BINARIES_DIRECTORY .. "\\dlldata.c", BINARIES_DIRECTORY .. "\\msaatext_i.c", BINARIES_DIRECTORY .. "\\msaatext.tlb", BINARIES_DIRECTORY .. "\\msaatext.h", "msaatext.idl"),
    
    "{COPYFILE} appcompatapi.w " .. SDK_INCLUDE_DIRECTORY .. "\\appcompatapi.h",
    "{COPYFILE} avrfutil.w " .. PANORAMA_INCLUDE_DIRECTORY .. "\\avrfutil.h",
    "{COPYFILE} ddrawgdi.w " .. SDK_INCLUDE_DIRECTORY .. "\\ddrawgdi.h",
    "{COPYFILE} icm.w " .. SDK_INCLUDE_DIRECTORY .. "\\icm.h",
    "{COPYFILE} icmui.dlg " .. SDK_INCLUDE_DIRECTORY .. "\\icmui.dlg",
    "{COPYFILE} icmpriv.w ".. PANORAMA_INCLUDE_DIRECTORY .. "\\icmpriv.h",
    "{COPYFILE} intlshar.w " .. PANORAMA_INCLUDE_DIRECTORY .. "\\intlshar.h",
    "{COPYFILE} kbd.w " .. OAK_INCLUDE_DIRECTORY .. "\\kbd.h",
    "{COPYFILE} mcdesc.w " .. PANORAMA_INCLUDE_DIRECTORY .. "\\mcdesc.h",
    "{COPYFILE} nddeagnt.w " .. PANORAMA_INCLUDE_DIRECTORY .. "\\nddeagnt.h",
    "{COPYFILE} ntgdispl.w " .. PANORAMA_INCLUDE_DIRECTORY .. "\\ntgdispl.h",
    "{COPYFILE} ntgdistr.w " .. PANORAMA_INCLUDE_DIRECTORY .. "\\ntgdistr.h",
    "{COPYFILE} oleacc.idl " .. SDK_INCLUDE_DIRECTORY .. "\\oleacc.idl",
    "{COPYFILE} reason.w " .. SDK_INCLUDE_DIRECTORY .. "\\reason.h",
    "{COPYFILE} richedit.w " .. SDK_INCLUDE_DIRECTORY .. "\\richedit.h",
    "{COPYFILE} shimdb.w " .. PANORAMA_INCLUDE_DIRECTORY .. "\\shimdb.h",
    "{COPYFILE} shimcstring.w " .. PANORAMA_INCLUDE_DIRECTORY .. "\\shimcstring.h",
    "{COPYFILE} shimhook.w " .. PANORAMA_INCLUDE_DIRECTORY .. "\\shimhook.h",
    "{COPYFILE} shimhookmacro.w " .. PANORAMA_INCLUDE_DIRECTORY .. "\\shimhookmacro.h",
    "{COPYFILE} shimlib.w " .. PANORAMA_INCLUDE_DIRECTORY .. "\\shimlib.h",
    "{COPYFILE} shimproto.w " .. PANORAMA_INCLUDE_DIRECTORY .. "\\shimproto.h",
    "{COPYFILE} stdexts.cw " .. PANORAMA_INCLUDE_DIRECTORY .. "\\stdexts.c",
    "{COPYFILE} stdexts.w " .. PANORAMA_INCLUDE_DIRECTORY .. "\\stdexts.h",
    "{COPYFILE} textserv.w " .. SDK_INCLUDE_DIRECTORY .. "\\textserv.h",
    "{COPYFILE} tom.w " .. SDK_INCLUDE_DIRECTORY .. "\\tom.h",
    "{COPYFILE} usp10.h " .. SDK_INCLUDE_DIRECTORY .. "\\usp10.h",
    "{COPYFILE} usp10p.h " .. PANORAMA_INCLUDE_DIRECTORY .. "\\usp10p.h",
    "{COPYFILE} veriflog.w " .. PANORAMA_INCLUDE_DIRECTORY .. "\\veriflog.h",
    "{COPYFILE} winddi.w " .. OAK_INCLUDE_DIRECTORY .. "\\winddi.H",
    "{COPYFILE} windowsx.w " .. SDK_INCLUDE_DIRECTORY .. "\\windowsx.h",
    "{COPYFILE} winfont.w " .. PUBLIC_INTERNAL_DIRECTORY .. "\\winfont.h",
    "{COPYFILE} wowuserp.w " .. PUBLIC_INTERNAL_DIRECTORY .. "\\wowuserp.h",
    "{COPYFILE} wowgdip.w " .. PUBLIC_INTERNAL_DIRECTORY .. "\\wowgdip.h",
    "{COPYFILE} w32w64.w " .. PUBLIC_INTERNAL_DIRECTORY .. "\\w32w64.h",
    "{COPYFILE} reason.w " .. SDK_INCLUDE_DIRECTORY .. "\\reason.h",
    "{COPYFILE} ddetrack.w " .. PUBLIC_INTERNAL_DIRECTORY .. "\\ddetrack.h",
    "{COPYFILE} msaatext.idl " .. SDK_INCLUDE_DIRECTORY .. "\\msaatext.idl",
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\ddeml.h " .. SDK_INCLUDE_DIRECTORY .. "\\ddeml.h",
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\ddemlp.h " .. PANORAMA_INCLUDE_DIRECTORY .. "\\ddemlp.h",
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\ime.h " .. SDK_INCLUDE_DIRECTORY .. "\\ime.h",
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\imep.h " .. PANORAMA_INCLUDE_DIRECTORY .. "\\imep.h",
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\imm.h " .. SDK_INCLUDE_DIRECTORY .. "\\imm.h",
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\immdev.h " .. OAK_INCLUDE_DIRECTORY .. "\\immdev.h",
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\immp.h " .. PANORAMA_INCLUDE_DIRECTORY .. "\\immp.h",
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\oleacc.h " .. SDK_INCLUDE_DIRECTORY .. "\\oleacc.h",
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\pbt.h " .. PANORAMA_INCLUDE_DIRECTORY .. "\\pbt.h",
    "{COPYFILE} conroute.w " .. PANORAMA_INCLUDE_DIRECTORY .. "\\conroute.h",
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\wincon.h " .. SDK_INCLUDE_DIRECTORY .. "\\wincon.h",
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\winconp.h " .. PANORAMA_INCLUDE_DIRECTORY .. "\\winconp.h",
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\windef.h " .. SDK_INCLUDE_DIRECTORY .. "\\windef.h",
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\windows.h " .. SDK_INCLUDE_DIRECTORY .. "\\windows.h",
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\windowsp.h " .. PANORAMA_INCLUDE_DIRECTORY .. "\\windowsp.h",
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\wingdi.h " .. SDK_INCLUDE_DIRECTORY .. "\\wingdi.h",
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\wingdip.h " .. PANORAMA_INCLUDE_DIRECTORY .. "\\wingdip.h",
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\winuser.h " .. SDK_INCLUDE_DIRECTORY .. "\\winuser.h",
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\winuser.inl " .. SDK_INCLUDE_DIRECTORY .. "\\winuser.inl",
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\winuser.rh " .. SDK_INCLUDE_DIRECTORY .. "\\winuser.rh",
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\winuserp.h " .. PANORAMA_INCLUDE_DIRECTORY .. "\\winuserp.h",
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\msaatext.h " .. SDK_INCLUDE_DIRECTORY .. "\\msaatext.h",
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\conapi.h " .. PANORAMA_INCLUDE_DIRECTORY .. "\\conapi.h",
})
set_files
({
    "oleacc_i.c"
})
set_defines
({
    "_MIDL_USE_GUIDDEF_",
    "__RPCNDR_H__",
    "__RPC_H__",
    "RPC_NO_WINDOWS_H",
    "COM_NO_WINDOWS_H",
    "GUID_DEFS_ONLY"
})
set_post_build_commands
({
    "{COPYFILE} " .. BINARIES_DIRECTORY .. "\\uuidwin.lib " .. PANORAMA_LIBRARY_DIRECTORY_CFG_PLATFORM,
})

