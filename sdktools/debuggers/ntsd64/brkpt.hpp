//----------------------------------------------------------------------------
//
// Breakpoint support.
//
// Copyright (C) Microsoft Corporation, 1997-2002.
//
//----------------------------------------------------------------------------

#ifndef _BRKPT_HPP_
#define _BRKPT_HPP_

// Ways in which a breakpoint can be hit.  There's full
// match, hit but ignored and not hit.
#define BREAKPOINT_HIT         0
#define BREAKPOINT_HIT_IGNORED 1
#define BREAKPOINT_NOT_HIT     2

//----------------------------------------------------------------------------
//
// Breakpoint.
//
//----------------------------------------------------------------------------

#define BREAKPOINT_EXTERNAL_MODIFY_FLAGS \
    (DEBUG_BREAKPOINT_GO_ONLY | DEBUG_BREAKPOINT_ENABLED | \
     DEBUG_BREAKPOINT_ADDER_ONLY | DEBUG_BREAKPOINT_ONE_SHOT)
#define BREAKPOINT_EXTERNAL_FLAGS \
    (BREAKPOINT_EXTERNAL_MODIFY_FLAGS | DEBUG_BREAKPOINT_DEFERRED)

// Internal flags.
#define BREAKPOINT_KD_INTERNAL          0x80000000
#define BREAKPOINT_KD_COUNT_ONLY        0x40000000
#define BREAKPOINT_VIRT_ADDR            0x20000000
#define BREAKPOINT_INSERTED             0x10000000
#define BREAKPOINT_IN_LIST              0x08000000
#define BREAKPOINT_HIDDEN               0x04000000
#define BREAKPOINT_NOTIFY               0x02000000

// Internal types.
#define EXBS_NONE              0x00000000
#define EXBS_BREAKPOINT_DATA   0x00000001
#define EXBS_BREAKPOINT_CODE   0x00000002
#define EXBS_BREAKPOINT_ANY    0x00000003
#define EXBS_STEP_INSTRUCTION  0x00000004
#define EXBS_STEP_BRANCH       0x00000008
#define EXBS_STEP_ANY          0x0000000c
#define EXBS_ANY               0xffffffff

enum BreakpointMatchAction
{
    BREAKPOINT_ALLOW_MATCH,
    BREAKPOINT_WARN_MATCH,
    BREAKPOINT_REMOVE_MATCH
};
    
enum BreakpointEvalResult
{
    BPEVAL_RESOLVED,
    BPEVAL_RESOLVED_NO_MODULE,
    BPEVAL_UNRESOLVED,
    BPEVAL_ERROR,
    BPEVAL_UNKNOWN,
};

class Breakpoint
    : public IDebugBreakpoint
{
public:
    Breakpoint* m_Next;
    Breakpoint* m_Prev;
    ULONG m_Refs;
    ULONG m_Id;
    ULONG m_BreakType;
    ULONG m_Flags;
    ULONG m_CodeFlags;
    ULONG m_DataSize;
    ULONG m_DataAccessType;
    ULONG m_PassCount;
    ULONG m_CurPassCount;
    PCSTR m_Command;
    ThreadInfo* m_MatchThread;
    ProcessInfo* m_Process;
    PCSTR m_OffsetExpr;
    DebugClient* m_Adder;
    ULONG64 m_MatchThreadData;
    ULONG64 m_MatchProcessData;

    Breakpoint(DebugClient* Adder, ULONG Id, ULONG Type, ULONG ProcType);
    ~Breakpoint(void);

    //
    // IUnknown.
    //
    
    STDMETHOD(QueryInterface)(
        THIS_
        IN REFIID InterfaceId,
        OUT PVOID* Interface
        );
    STDMETHOD_(ULONG, AddRef)(
        THIS
        );
    STDMETHOD_(ULONG, Release)(
        THIS
        );

    //
    // IDebugBreakpoint.
    //
    
    STDMETHOD(GetId)(
        THIS_
        OUT PULONG Id
        );
    STDMETHOD(GetType)(
        THIS_
        OUT PULONG BreakType,
        OUT PULONG ProcType
        );
    STDMETHOD(GetAdder)(
        THIS_
        OUT PDEBUG_CLIENT* Adder
        );
    STDMETHOD(GetFlags)(
        THIS_
        OUT PULONG Flags
        );
    STDMETHOD(AddFlags)(
        THIS_
        IN ULONG Flags
        );
    STDMETHOD(RemoveFlags)(
        THIS_
        IN ULONG Flags
        );
    STDMETHOD(SetFlags)(
        THIS_
        IN ULONG Flags
        );
    STDMETHOD(GetOffset)(
        THIS_
        OUT PULONG64 Offset
        );
    STDMETHOD(SetOffset)(
        THIS_
        IN ULONG64 Offset
        );
    STDMETHOD(GetDataParameters)(
        THIS_
        OUT PULONG Size,
        OUT PULONG AccessType
        );
    STDMETHOD(SetDataParameters)(
        THIS_
        IN ULONG Size,
        IN ULONG AccessType
        );
    STDMETHOD(GetPassCount)(
        THIS_
        OUT PULONG Count
        );
    STDMETHOD(SetPassCount)(
        THIS_
        IN ULONG Count
        );
    STDMETHOD(GetCurrentPassCount)(
        THIS_
        OUT PULONG Count
        );
    STDMETHOD(GetMatchThreadId)(
        THIS_
        OUT PULONG Id
        );
    STDMETHOD(SetMatchThreadId)(
        THIS_
        IN ULONG Id
        );
    STDMETHOD(GetCommand)(
        THIS_
        OUT OPTIONAL PSTR Buffer,
        IN ULONG BufferSize,
        OUT OPTIONAL PULONG CommandSize
        );
    STDMETHOD(SetCommand)(
        THIS_
        IN PCSTR Command
        );
    STDMETHOD(GetOffsetExpression)(
        THIS_
        OUT OPTIONAL PSTR Buffer,
        IN ULONG BufferSize,
        OUT OPTIONAL PULONG ExpressionSize
        );
    STDMETHOD(SetOffsetExpression)(
        THIS_
        IN PCSTR Expression
        );
    STDMETHOD(GetParameters)(
        THIS_
        OUT PDEBUG_BREAKPOINT_PARAMETERS Params
        );

    //
    // Breakpoint.
    //
    
    virtual HRESULT Validate(void) = 0;
    virtual HRESULT Insert(void) = 0;
    virtual HRESULT Remove(void) = 0;
    virtual ULONG IsHit(PADDR Addr) = 0;

    // Must resturn true if in case of THIS breakpoint hit
    // Pc points to the instruction caused the hit
    virtual BOOL PcAtHit() = 0;

    // Internal refcounting which does true counting,
    // as opposed to the disabled public AddRef/Release.
    void Preserve(void)
    {
        m_Refs++;
    }
    void Relinquish(void)
    {
        if (--m_Refs == 0)
        {
            delete this;
        }
    }
    
    PADDR GetAddr(void)
    {
        return &m_Addr;
    }
    
    BOOL PassHit(void)
    {
        if (--m_CurPassCount == 0)
        {
            m_CurPassCount = 1;
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
    ULONG GetProcType(void)
    {
        return m_ProcType;
    }
    void SetProcType(ULONG ProcType)
    {
        m_ProcType = ProcType;
        m_ProcIndex = MachineTypeIndex(ProcType);
    }
    ULONG GetProcIndex(void)
    {
        return m_ProcIndex;
    }
    
    void ForceFlatAddr(void)
    {
        NotFlat(m_Addr);
        ComputeFlatAddress(&m_Addr, NULL);
    }

    // Breakpoint is enabled, not deferred, not internal.
    BOOL IsNormalEnabled(void)
    {
        return (m_Flags & (DEBUG_BREAKPOINT_ENABLED |
                           BREAKPOINT_KD_INTERNAL |
                           DEBUG_BREAKPOINT_DEFERRED)) ==
            DEBUG_BREAKPOINT_ENABLED;
    }

    void NotifyChanged(void)
    {
        if (!(m_Flags & BREAKPOINT_HIDDEN))
        {
            NotifyChangeEngineState(DEBUG_CES_BREAKPOINTS, m_Id, TRUE);
        }
    }
    
    HRESULT SetEvaluatedOffsetExpression(PCSTR Expr,
                                         BreakpointEvalResult Valid,
                                         PADDR Addr);

    void LinkIntoList(void);
    void UnlinkFromList(void);
    void UpdateInternal(void);
    BOOL EvalOffsetExpr(BreakpointEvalResult Valid, PADDR Addr);
    HRESULT CheckAddr(PADDR Addr);
    HRESULT SetAddr(PADDR Addr, BreakpointMatchAction MatchAction);
    // Matches breakpoints if they have the same insertion effect.
    // Used when determining whether a breakpoint needs to be
    // inserted or if another breakpoint is already covering the break.
    BOOL IsInsertionMatch(Breakpoint* Match);
    // Matches breakpoints if they have an insertion match and
    // if they match publicly, such as between flags, hiddenness
    // and so on.  Used when determining whether a user breakpoint
    // redefines an existing breakpoint.
    BOOL IsPublicMatch(Breakpoint* Match);
    // Check m_Match* fields against current state.
    BOOL MatchesCurrentState(void);

protected:
    // ProcType is private so that ProcType and ProcIndex can
    // be kept in sync.
    ULONG m_ProcType;
    MachineIndex m_ProcIndex;
    // Address is private to force users to go through SetAddr.
    ADDR m_Addr;
    ULONG m_CommandLen;
    ULONG m_OffsetExprLen;
    UCHAR m_InsertStorage[MAX_BREAKPOINT_LENGTH];
};

//----------------------------------------------------------------------------
//
// CodeBreakpoint.
//
//----------------------------------------------------------------------------

class CodeBreakpoint :
    public Breakpoint
{
public:
    CodeBreakpoint(DebugClient* Adder, ULONG Id, ULONG ProcType)
        : Breakpoint(Adder, Id, DEBUG_BREAKPOINT_CODE, ProcType)
    {
        m_Flags |= BREAKPOINT_VIRT_ADDR;
    }

    // Breakpoint.
    virtual HRESULT Validate(void);
    virtual HRESULT Insert(void);
    virtual HRESULT Remove(void);
    virtual ULONG IsHit(PADDR Addr);
    virtual BOOL PcAtHit()
    {
        return TRUE;
    }
};

//----------------------------------------------------------------------------
//
// DataBreakpoint.
//
//----------------------------------------------------------------------------

class DataBreakpoint :
    public Breakpoint
{
public:
    DataBreakpoint(DebugClient* Adder, ULONG Id, ULONG ProcType)
        : Breakpoint(Adder, Id, DEBUG_BREAKPOINT_DATA, ProcType) {}

    // Breakpoint.
    virtual HRESULT Insert(void);
    virtual HRESULT Remove(void);

    // DataBreakpoint.
    static void ClearThreadDataBreaks(ThreadInfo* Thread);
    void AddToThread(ThreadInfo* Thread);
};

//----------------------------------------------------------------------------
//
// X86DataBreakpoint.
//
//----------------------------------------------------------------------------

class X86DataBreakpoint :
    public DataBreakpoint
{
public:
    X86DataBreakpoint(DebugClient* Adder, ULONG Id,
                      ULONG Cr4Reg, ULONG Dr6Reg, ULONG ProcType)
        : DataBreakpoint(Adder, Id, ProcType)
    {
        m_Dr7Bits = 0;
        m_Cr4Reg = Cr4Reg;
        m_Dr6Reg = Dr6Reg;
    }

    // Breakpoint.
    virtual HRESULT Validate(void);
    virtual ULONG IsHit(PADDR Addr);

    virtual BOOL PcAtHit()
    {
        return FALSE;
    }

private:
    // Precomputed enable bits.
    ULONG m_Dr7Bits;
    
    // Register indices for getting breakpoint-related information.
    ULONG m_Cr4Reg;
    ULONG m_Dr6Reg;

    friend class X86MachineInfo;
    friend class Amd64MachineInfo;
};

extern BOOL g_BreakpointListChanged;
extern BOOL g_UpdateDataBreakpoints;
extern BOOL g_DataBreakpointsChanged;
extern BOOL g_BreakpointsSuspended;
extern BOOL g_DeferDefined;
extern Breakpoint* g_DeferBp;
extern Breakpoint* g_StepTraceBp;
extern CHAR g_StepTraceCmdState;

HRESULT BreakpointInit(void);

HRESULT InsertBreakpoints(void);
HRESULT RemoveBreakpoints(void);

HRESULT AddBreakpoint(DebugClient* Client,
                      MachineInfo* Machine,
                      ULONG Type,
                      ULONG DesiredId,
                      Breakpoint** Bp);
void RemoveBreakpoint(Breakpoint* Bp);
void RemoveProcessBreakpoints(ProcessInfo* Process);
void RemoveThreadBreakpoints(ThreadInfo* Thread);
void RemoveAllBreakpoints(ULONG Reason);

Breakpoint* GetBreakpointByIndex(DebugClient* Client, ULONG Index);
Breakpoint* GetBreakpointById(DebugClient* Client, ULONG Id);
Breakpoint* CheckMatchingBreakpoints(Breakpoint* Match, BOOL PUBLIC,
                                     ULONG IncFlags);
Breakpoint* CheckBreakpointHit(ProcessInfo* Process,
                               Breakpoint* Start, PADDR Addr,
                               ULONG ExbsType, ULONG IncFlags, ULONG ExcFlags,
                               PULONG HitType,
                               BOOL SetLastBreakpointHit);
ULONG NotifyHitBreakpoints(ULONG EventStatus);

void EvaluateOffsetExpressions(ProcessInfo* Process, ULONG Flags);

#define BPCMDS_FORCE_DISABLE 0x00000001
#define BPCMDS_ONE_LINE      0x00000002
#define BPCMDS_EXPR_ONLY     0x00000004
#define BPCMDS_MODULE_HINT   0x00000008

void ChangeBreakpointState(DebugClient* Client, ProcessInfo* ForProcess,
                           ULONG Id, UCHAR StateChange);
void ListBreakpoints(DebugClient* Client, ProcessInfo* ForProcess,
                     ULONG Id);
void ListBreakpointsAsCommands(DebugClient* Client, ProcessInfo* Process,
                               ULONG Flags);
PDEBUG_BREAKPOINT ParseBpCmd(DebugClient* Client, UCHAR Type,
                             ThreadInfo* Thread);
BOOL CheckBreakpointInsertedInRange(ProcessInfo* Process,
                                    ULONG64 Start, ULONG64 End);

#endif // #ifndef _BRKPT_HPP_
