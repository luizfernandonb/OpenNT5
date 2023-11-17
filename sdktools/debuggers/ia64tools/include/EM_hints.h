#ifndef EM_HINTS_H
#define EM_HINTS_H

typedef enum EM_branch_hint_e
{
    EM_branch_hint_none,
    EM_branch_hint_sptk,
    EM_branch_hint_sptk_imp,
    EM_branch_hint_mov,
    EM_branch_hint_imp,
    EM_branch_hint_dptk,
    EM_branch_hint_dptk_imp,
    EM_branch_hint_ret_sptk,
    EM_branch_hint_ret_sptk_imp,
    EM_branch_hint_ret,
    EM_branch_hint_ret_imp,
    EM_branch_hint_ret_dptk,
    EM_branch_hint_ret_dptk_imp,
    EM_branch_hint_sptk_few,
    EM_branch_hint_sptk_many,
    EM_branch_hint_spnt_few,
    EM_branch_hint_spnt_many,
    EM_branch_hint_dptk_few,
    EM_branch_hint_dptk_many,
    EM_branch_hint_dpnt_few,
    EM_branch_hint_dpnt_many,
    EM_branch_hint_sptk_few_clr,
    EM_branch_hint_sptk_many_clr,
    EM_branch_hint_spnt_few_clr,
    EM_branch_hint_spnt_many_clr,
    EM_branch_hint_dptk_few_clr,
    EM_branch_hint_dptk_many_clr,
    EM_branch_hint_dpnt_few_clr,
    EM_branch_hint_dpnt_many_clr,
    EM_branch_hint_loop,
    EM_branch_hint_loop_imp,
    EM_branch_hint_exit,
    EM_branch_hint_exit_imp,
    EM_branch_hint_last
} EM_branch_hint_t;

typedef enum EM_memory_access_hint_e
{
    EM_memory_access_hint_none,
    EM_memory_access_hint_nt1,
    EM_memory_access_hint_nta,
    EM_memory_access_hint_nt2,
    EM_memory_access_hint_last
} EM_memory_access_hint_t;


#endif  /* EM_HINTS_H */
