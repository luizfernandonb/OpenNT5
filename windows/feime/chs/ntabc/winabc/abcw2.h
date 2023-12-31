
/*************************************************
 *  abcw2.h                                      *
 *                                               *
 *  Copyright (C) 1995-1999 Microsoft Inc.       *
 *                                               *
 *************************************************/

extern CHAR SKLayoutS[NumsSK];
extern CHAR SKLayout[NumsSK][48*2]; 
extern CHAR PcKb[48*2],SdaKb[48*2];
extern CHAR SPcKb[48*2],SSdaKb[48*2];

extern LPIMEL lpImeL;
extern IMEG sImeG ;


#define WM_NEW_DEF_CODE         1993+0x400      //1993.4.19
#define WM_NEW_DEF_RESTORE      1993+0x401      //1993.4.19


HIMC ghIMC = 0;
LPINPUTCONTEXT glpIMC;
LPPRIVCONTEXT  glpIMCP; 
int wait_flag , waitzl_flag;                   //waitzl    6
int TypeOfOutMsg;
int biaodian_len;

BYTE I_U_Flag=0;        //produce the "i, u" input

            


struct INPUT_TISHI prompt[1];

struct INPT_BF in={40,0,{0}};
struct W_SLBL wp;
struct ATTR msx_area[120];
struct INDEX ndx;
struct INDEX kzk_ndx;
struct TBF FAR *cisu;
struct PD_TAB pindu;
struct FMT now={10,53,27};
struct T_REM tmmr;

int form[]  ={10,/*9*/8,5,/*4*/4,3,2,2,1,1,1};        //form[0] not used

BYTE spbx_tab[((87-15)*94+15)/16*16+16]={0};

BYTE logging_stack[0x400]={0};
WORD logging_stack_size=sizeof logging_stack;
                        

/*******************************************
 display result area DATA
**********************************************/
unsigned char space_char[]={0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20};
BYTE out_svw[400];
unsigned char group_counter[]="0.";
    
/*********************************************
 input area DATA
**********************************************/
int input_cur;
int new_no;
int jlxw_mode;
int jiyi_mode;

/******************************************************
 result area DATA
*******************************************************/
int result_area_pointer;
BYTE result_area[40];
BYTE out_result_area[40];
WORD out_bfb[40];
int out_pointer;
int now_cs;
int now_cs_dot;


/********************************************
 biaodian table
*********************************************/
//unsigned char biaodian_table[]="~`!@?():<>,.;_\x22\x27";                 //Note \0x22 will be 0 x 2 2
//unsigned char cc_biaodian[]="…、！·？（）：《》，。；—“‘”’〈〉";

unsigned char biaodian_table[]="@&$^\\!@?():<>,.;_\x22\x27";                 //Note \0x22 will be 0 x 2 2
unsigned char cc_biaodian[]="·—￥…、！·？（）：《》，。；—“‘”’〈〉";


int biaodian_pos;
WORD biaodian_value;
BYTE yinhao_flag=0;

/*******************************************
 control variabe
********************************************/
//BYTE int_asc_mode=0;    // int or half character switch
extern BYTE step_mode;
//BYTE cp_ajust_flag;
BYTE bdd_flag;          // the function of punctuation switch
//BYTE cbx_flag =0;       // for written-stroke input flag
            // =0 NO writen-stroke input module
            // =1 the method with STD_MODE
            // =2 ............... SDA_MODE
BOOL IfTopMost;        // top window flag

BYTE word_back_flag;
BYTE msg_type;

/*****************************************
temp memory area
******************************************/
BYTE temp_rem_area[512];
BYTE rem_area[512];

/**************************************
display buffer parameter
***************************************/
BYTE out_length;
BYTE last_out_length;
BYTE cap_mode;


/******************************************
user_definition parameter
*******************************************/
WORD mulu_record_length=10;
WORD data_record_length=32;
WORD mulu_true_length=56;
WORD data_start=0x1000;
WORD mulu_max_length=0x1000;
BYTE user_word_max_length=32;


OFSTRUCT reopen;
HWND active_win_keep;
BYTE d_yinhao_flag=0,book_name=0,book_name_sub=0;  


/*******************************************************************
This part of defination is cut from the beginning of ABCW.c
********************************************************************/



BYTE SdaPromptOpen=0,DefNewNow=0;             //cock

FARPROC _hh1,_hh2;
HANDLE hInst;
HANDLE  cisu_hd;
HCURSOR hCursor;        //1993.2

FARPROC FAR *hh1,*hh2;

FARPROC lpFunc,lpFunc2;
HANDLE mdl;
BYTE opt_flag;

BYTE kb_buffer[35];
int OldCaps;

BYTE in_buffer[1];              /* buffer for input */

int n,end_flg,CharHi,CharWi;
HFONT hFont;
HFONT hOldFont;
HFONT hSFont=0;
HPEN hPen;

BYTE V_Flag=0;                  // V input flag

OFSTRUCT ofstruct;

HDC hDC;
HDC hMemoryDC;
HBITMAP cur_h;
int count2;

int pass_word=0;
HWND NowFocus,OptFocus;                    //keep the user's focus

BOOL cur_flag=0,op_flag;
WORD old_curx=CUR_START_X,cur_hibit=1,cur_start_ps=0,cur_start_count=0;

HWND hWnd,act_focus;

int input_count=0;
int kb_mode=CIN_STD,kb_flag = 0xffff;
int local_focus=0;
int timer_counter=0;
int msg_count=0;
BYTE msg_bf[50];
TimerCounter=2;

KeyBoardState=0;
SdaInst = 0;
HWND Return;
HWND act_win;

HANDLE Hdopt;                   //for dynamic call .dll proc
unsigned char jiyi[]="{记忆}";
WORD sda_trans[5]={9,9,9,9,0};

HWND hInputWnd;
HWND hABCWnd;

char ExeCmdLine[]="abcwin 0";
BYTE UpdateFlag=0;              //1993.3 increase the user.rem
char jiyi_wenjian_cuo[]="的：用户记忆文件操作错!";

BYTE InputBuffer[43];
WORD SoftKeyNum=0;

TCHAR    tmmr_rem[MAX_PATH];
TCHAR    user_lib[MAX_PATH];

HANDLE hAccTable;

HANDLE hImeL;
LPIMEL lpImeL;

int MoveFlag = 0;
POINT pot;
HWND hSetOp =0,NewWordWin=0;

char  *szMsgStr[] = { "0","0"};          // messages shown on diff sections

BYTE Sd_Open_flag=0;            //flag for display the keyboard
BYTE kb_mode_save=0;            //1993.4.19

/******************************************************************
This part of defination is cut from ABCWM.c
*******************************************************************/
char TMMR_OPEN_WRONG[]= "记忆文件打开错";

/******************************************************************
This part of defination is cut before DIAMAN.c
*******************************************************************/
BYTE cpjy,bxsr,qj,bdzh;

/******************************************************************
This part of defination is cut before OKRETURN.c
*******************************************************************/
OFSTRUCT ofs;

struct SLBL sb;
struct N_SLBL neg;

BYTE slbl_tab[]="ZH00\1"
             "SH00\2"
             "CH00\3"
             "ING0\4"
             "AI00\5"
             "AN00\6"
             "ANG0\7"
     "AO00\x8"
     "EI00\x9"
     "EN00\xa"
     "ENG0\xb"
     "IA00\xc"
     "IAN0\xd"
     "IANG\xe"
     "IAO0\xf"
     "IE00\x10"
     "IN00\x11"
     "IU00\x12"
     "ONG0\x13"
     "OU00\x14"
     "UA00\x15"
     "UAI0\x16"
     "UAN0\x17"
     "UE00\x18"
     "UN00\x19"
     "UENG\x1a"                     //SC4K6c?*DBASE={<I5D1AH
     "UI00\x1b"
     "UO00\x1c"
     "UANG\x1d"
     "ER00\x1e"
     "IONG\x1f"
     "VE00\x18"
     "UEN0\x19"
     "VEN0\x19"
     "UEI0\x1b"
     "IOU0\x12";

OFSTRUCT openbuf;
OFSTRUCT openbuf_kzk,open_user,open_tmmr;


BYTE buffer[30];

BYTE cmp_head,cmp_state,cmp_bx,by_cchar_flag;
WORD cmp_yj,cmp_cisu;

// about search lib
LONG r_addr;
WORD out_svw_cnt,msx_area_cnt;
WORD search_start,search_end,kzk_search_start,kzk_search_end;
WORD item_length,kzk_item_length,last_item_name,item_addr,slib_addr;
BYTE word_lib_state;
WORD lib_w[0xa00];
WORD kzk_lib_w[0x400];
BYTE auto_mode,word_source,xs_flag,sfx_attr,jiyi_pindu,system_info;
BYTE stack1_move_counter;
WORD extb_ps;

/******************************************************************
This part of defination is cut before READ_A_PAGE.c
*******************************************************************/
char *std_dct="winabc.cwd";
char *user_dct="user.rem";
BYTE last_flag;
LONG last_start_ps;
WORD last_size;

/******************************************************************
This part of defination is cut before REM_PD1.c
*******************************************************************/
BYTE stack1_move_counter;



//................................................................
//               function tables definition
//
char fk_tab[]="0○1一2二3三4四5五6六7七8八9九S十B百Q千"
           "\0零\1壹\2贰\3叁\4肆\5伍\6陆\7柒\x8捌\x9玖s拾b佰q仟"
           "G个" 
           "W万" 
           "Z兆" 
           "N年" 
           "Y月" 
           "R日" 
           "J斤" 
           "D第" 
           "$元" 
           "K克" 
           "M米" 
           "F分" 
           "L里" 
           "T吨" 
           "E亿" 
           "O度" 
           "H时" 
           "P磅" 
           "C厘" 
           "U微" 
           "A秒" 
           "I毫" 
           "X升" 
           "+加"                  
           "-减" 
           "*乘" 
           "/除";    
          
          

WORD sfx_table[]={
                //大    DA-                 1 
    0x102, 0x80CC,              //0x80C4,
                // 的    DE-                  1
    0x202, 0x80E6,              //0x80DE,
                // 吧    BA-                  1
    0x202, 0x2048,
                // 白    BAI-                1 
    0x102, 0x2056,
                // 班    BAN-                 1
    0x202, 0x205F,
                // 半    BAN-                1 
    0x102, 0x206A,
                // 报    BAO-                 1
    0x202, 0x2085,
                // 本    BEN-                1 
    0x102, 0x209B,
                // 边    BIAN-                1
    0x202, 0x20BC,
                // 表    BIAO-                1
    0x202, 0x20CA,
                // 不    BU-                 1 
    0x102, 0x8058,               //0x8054,
                // 部    BU-                  1
    0x202, 0x20FA,
                // 长    C,ANG-              1 
    0x102, 0x8088,               //0x8080,
                // 厂    C,ANG-               1
    0x202, 0x808E,              //0x8086,
                // 超    C,AO-               1 
    0x102, 0x2145,
                // 车    C,E-                 1
    0x202, 0x8098,               //0x8090,
                // 3�    C,U-                 1
    0x202, 0x218F,
                // 处    C,U-                 1
    0x202, 0x219D,
                // 纯    C,UN-               1 
    0x102, 0x21B6,
                // 丛    CONG-                1
    0x202, 0x21CB,
                // 村    CUN-                 1
    0x202, 0x21DC,
                // 带    DAI-                 1
    0x202, 0x21EF,
                // 单    DAN-                1 
    0x102, 0x80D6,              //0x80CE,
                // 党    DANG-                1
    0x202, 0x2208,
                // 到    DAO-                 1
    0x202, 0x2212,
                // 低    DI-                 1 
    0x102, 0x2222,
                // 底    DI-                 1 
    0x102, 0x80F4,              //0x80EC,
                // 地    DI-                  1
    0x202, 0x80F8,              //0x80F0,
                // 点    DIAN-                1
    0x202, 0x2238,
                // 电    DIAN-               1 
    0x102, 0x223C,
                // 电子  DIAN-ZI-            1 
    0x104, 0x223C, 0x2EA4,
                // 掉    DIAO-                1
    0x202, 0x2249,
                // �,    DU-                  1
    0x202, 0x8116,               //0x810E,
                // 短    DUAN-               1 
    0x102, 0x227F,
                // 队    DUI-                 1
    0x202, 0x2286,
                // 多    DUO-                11
    0x302, 0x2293,
                // 额    E-                   1
    0x202, 0x22A1,
                // 法    FA-                  1
    0x202, 0x22B9,
                // 防    FANG-               1 
    0x102, 0x22D1,
                // 非    FEI-                1 
    0x102, 0x22D8,
                // 费    FEI-                 1
    0x202, 0x22E2,
                // 粉    FEN-                 1
    0x202, 0x22EC,
                // 风    FENG-                1
    0x202, 0x22F8,
                // 副    FU-                 1 
    0x102, 0x2320,
                // 该    GAI-                1 
    0x102, 0x2332,
                // 感    GAN-                 1
    0x202, 0x233F,
                // 高    GAO-                1 
    0x102, 0x234E,
                // 各    GE-                 1 
    0x102, 0x2366,
                // 更    GENG-               1 
    0x102, 0x236B,
                // 工    GONG-                1
    0x202, 0x2371,
                // 共    GONG-               1 
    0x102, 0x237F,
                // 古    GU-                 1 
    0x102, 0x2392,
                // 观    GUAN-                1
    0x202, 0x23A8,
                // 国    GUO-                 1
    0x202, 0x23C7,
                // 好    ,AO-                1 
    0x102, 0x23EE,
                // 黑    ,EI-                1 
    0x102, 0x2405,
                // 很    ,EN-                1 
    0x102, 0x2407,
                // 红    ,ONG-               1 
    0x102, 0x819E,              //0x8194,
                // 后    ,OU-                 1
    0x202, 0x241E,
                // ;�    ,U-                  1
    0x202, 0x2430,
                // 化    ,UA-                 1
    0x202, 0x2438,
                // 坏    ,UAI-               1 
    0x102, 0x243E,
                // 会    ,UI-                 1
    0x202, 0x81B0,              //0x81A6,
                // 货    ,UO-                 1
    0x202, 0x247E,
                // 机    JI-                  1
    0x202, 0x2483,
                // 家    JIA-                 1
    0x202, 0x81CC,              //0x81C2,
                // 件    JIAN-                1
    0x202, 0x24E5,
                // 奖    JIANG-               1
    0x202, 0x24F6,
                // 界    JIE-                 1
    0x202, 0x252C,
                // 金    JIN-                 1
    0x202, 0x2535,
                // 旧    JIU-                1 
    0x102, 0x256C,
                // 局    JU-                  1
    0x202, 0x2579,
                // 军    JUN-                 1
    0x202, 0x259F,
                // 棵    KE-                  1
    0x202, 0x25C4,
                // 颗    KE-                  1
    0x202, 0x25C6,
                // 科    KE-                  1
    0x202, 0x25C7,
                // 可    KE-                 1 
    0x102, 0x25CA,
                // 课    KE-                  1
    0x202, 0x25CF,
                // 口    KOU-                 1
    0x202, 0x25DB,
                // 老    LAO-                1 
    0x102, 0x262E,
                // 了    LE-                  1
    0x202, 0x827A,              //0x826C,
                // 类    LEI-                 1
    0x202, 0x263F,
                // 里    LI-                  1
    0x202, 0x264E,
                // 力    LI-                  1
    0x202, 0x2663,
                // 理论  LI-LUN-              1
    0x204, 0x264C, 0x26F6,
                // 量    LIANG-               1
    0x202, 0x267C,
                // 林    LIN-                 1
    0x202, 0x2693,
                // 论    LUN-                 1
    0x202, 0x26F6,
                // 率    LV-                  1
    0x202, 0x828E,              //0x8280,
                // 每    MEI-                1 
    0x102, 0x2738,
                // 们    MEN-                 1
    0x202, 0x2740,
                // 迷    MI-                  1
    0x202, 0x274D,
                // 棉    MIAN-               1 
    0x102, 0x2757,
                // 面    MIAN-                1
    0x202, 0x275F,
                // 某    MOU-                1 
    0x102, 0x278A,
                // 男    NAN-                1 
    0x102, 0x27A7,
                // 闹    NAO-                1 
    0x102, 0x27AD,
                // 内    NEI-                11
    0x302, 0x27B1,
                // 年    NIAN-                1
    0x202, 0x27C1,
                // 女    NV-                 1 
    0x102, 0x27E3,
                // 派    PAI-                 1
    0x202, 0x8320,               //0x8312,
                // 旁    PANG-                1
    0x202, 0x2809,
                // 皮    PI-                  1
    0x202, 0x2837,
                // 片    PIAN-                1
    0x202, 0x283F,
                // 品    PIN-                 1
    0x202, 0x284A,
                // ,�    QAUN-               1 
    0x102, 0x28FA,
                // 其    QI-                 1 
    0x102, 0x8354,               //0x8346,
                // 器    QI-                  1
    0x202, 0x288A,
                // 前    QIAN-                1
    0x202, 0x28A1,
                // 区    QU-                  1
    0x202, 0x8388,               //0x837A,
                // ,�    QUAN-                1
    0x202, 0x28F7,
                // ,�    QUN-                 1
    0x202, 0x2909,
                // ,�    REN-                 1
    0x202, 0x291A,
                // ,�    RI-                  1
    0x202, 0x2924,
                // 上    S,ANG-              11
    0x302, 0x297C,
                // 社    S,E-                 1
    0x202, 0x2994,
                // 声    S,ENG-               1
    0x202, 0x29A6,
                // 省    S,ENG-               1
    0x202, 0x83BE,              //0x83B0,
                // 市    S,I-                 1
    0x202, 0x83E2,              //0x83D4,
                // 室    S,I-                 1
    0x202, 0x29DD,
                // 手    S,OU-                1
    0x202, 0x29E1,
                // 受    S,OU-               1 
    0x102, 0x29E7,
                // 书    S,U-                 1
    0x202, 0x29F4,
                // 双    S,UANG-             1 
    0x102, 0x2A14,
                // 水    S,UI-                1
    0x202, 0x2A17,
                // 司    SI-                  1
    0x202, 0x2A27,
                // 思想  SI-XIANG-            1
    0x204, 0x8404, 0x2BCC,  //0x83F8, 0x2BCC,
                // 所    SUO-                 1
    0x202, 0x2A62,
                // 台    TAI-                 1
    0x202, 0x2A6F,
                // 体    TI-                  1
    0x202, 0x2AAC,
                // 条    TIAO-                1
    0x202, 0x2ABC,
                // 铁    TIE-                1 
    0x102, 0x2AC1,
                // 头    TOU-                 1
    0x202, 0x2ADC,
                // 外    WAI-                11
    0x302, 0x2B07,
                // 为    WEI-                 1
    0x202, 0x2B2D,
                // 无    WU-                 1 
    0x102, 0x8450,               //0x8444,
                // 物    WU-                  1
    0x202, 0x2B72,
                // 系    XI-                  1
    0x202, 0x8458,               //0x844C,
                // 下    XIA-                11
    0x302, 0x2BA3,
                // 县    XIAN-                1
    0x202, 0x2BB9,
                // 乡    XIANG-               1
    0x202, 0x2BC8,
                // 项目  XIANG-MU-            1
    0x204, 0x2BCF, 0x2796,
                // 小    XIAO-               1 
    0x102, 0x2BE0,
                // 新    XIN-                1 
    0x102, 0x2C01,
                // 心    XIN-                 1
    0x202, 0x2C03,
                // 性    XING-                1
    0x202, 0x2C13,

                // 型    XING-                1
    0x202, 0x2C0C,
                // 性质  XING-Z,I-            1
    0x204, 0x2C13, 0x2E3D,
                // 学    XUE-                 1
    0x202, 0x2C44,
                // 学说  XUE-S,UO-            1
    0x204, 0x2C44, 0x83FE,   //0x83F2,
                // 眼    YAN-                 1
    0x202, 0x2C78,
                // 洋    YANG-               1 
    0x102, 0x2C90,
                // 业    YE-                  1
    0x202, 0x2CB0,
                // 仪    YI-                  1
    0x202, 0x2CC2,
                // 有    YOU-                1 
    0x102, 0x2D29,
                // 于    YU-                  1
    0x202, 0x2D33,
                // 原    YUAN-               1 
    0x102, 0x2D64,
                // 员    YUAN-                1
    0x202, 0x84C0,              //0x84B4,
                // 院    YUAN-                1
    0x202, 0x2D71,
                // 运动  YUN-DONG-            1
    0x204, 0x2D82, 0x2262,
                // 子    ZI-                  1
    0x202, 0x2EA4,

                // 再    ZAI-                1 
    0x102, 0x2D90,
                // 在    ZAI-                1 
    0x102, 0x2D91,
                // 站    Z,AN-                1
    0x202, 0x2DD3,
                // 长    Z,ANG-               1
    0x202, 0x808A,              //0x8082,
                // 者    Z,E-                 1
    0x202, 0x2DF4,
                // 着    Z,E-                 1
    0x202, 0x8532,               //0x8526,
                // 真    Z,EN-               1 
    0x102, 0x2DFB,
                // 镇    Z,EN-                1
    0x202, 0x2E07,
                // 正    Z,ENG-              1 
    0x102, 0x2E12,
                // 制    Z,I-                 1
    0x202, 0x2E39,
                // 中    Z,ONG-              11
    0x302, 0x2E43,
                // 主    Z,U-                1 
    0x102, 0x2E6A,
                // 住    Z,U-                 1
    0x202, 0x2E72,
                // 主义  Z,U-YI-              1
    0x204, 0x2E6A, 0x2CE0,
                // 专业  Z,UAN-YE-            1
    0x204, 0x2E79, 0x2CB0,
                // 状    Z,UANG-              1
    0x202, 0x2E85,
                // 准    Z,UN-               1 
    0x102, 0x2E8D,
                // 总    ZONG-               1 
    0x102, 0x2EAD,
                // 组    ZU-                  1
    0x202, 0x2EBA,
                // 最    ZUI-                1 
    0x102, 0x2EBF,
                // 作    ZUO-                1 
    0x102, 0x2EC8};

WORD sfx_table_size=sizeof sfx_table;

int FAR PASCAL sda_proc(WORD, LPWORD, BYTE, HIMC);
int FAR PASCAL tran_data(int, HIMC, BYTE);

