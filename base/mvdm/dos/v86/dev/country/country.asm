;
;       create country.sys file
;
;
        include mkcntry.inc
;
; -----------------------------------------------------------
;
;       Data for COUNTRY.SYS file
;
; -----------------------------------------------------------
dseg    segment para
cdinfo  label   word
        db      0ffh,'COUNTRY'          ; signature
        db      8 dup (0)               ; reserved
        dw      PTRCNT                  ; number of pointers in header
        db      CIPTYPE                 ; type = country info pointer
        dd      offset cntryinfo        ; pointer to country information
;
cntryinfo label word
cntrycnt=0
        dw      finalCNT                ; number of countries

 ctryent <CENTRYSIZE,CID_AL,852,,,al852_data>   ; Albania
 ctryent <CENTRYSIZE,CID_AL,850,,,al850_data>   ;

 ctryent <CENTRYSIZE,CID_AR,850,,,ar850_data>   ; Argentina
 ctryent <CENTRYSIZE,CID_AR,437,,,ar437_data>   ;

 ctryent <CENTRYSIZE,CID_AU,437,,,au437_data>   ; Australia
 ctryent <CENTRYSIZE,CID_AU,850,,,au850_data>   ;

 ctryent <CENTRYSIZE,CID_AT,850,,,at850_data>   ; Austria
 ctryent <CENTRYSIZE,CID_AT,437,,,at437_data>   ;

 ctryent <CENTRYSIZE,CID_BE,850,,,be850_data>   ; Belgium
 ctryent <CENTRYSIZE,CID_BE,437,,,be437_data>   ;

 ctryent <CENTRYSIZE,CID_BH,852,,,bh852_data>   ; Bosnia/Herzegovina
 ctryent <CENTRYSIZE,CID_BH,850,,,bh850_data>   ;

 ctryent <CENTRYSIZE,CID_BR,850,,,br850_data>   ; Brazil
 ctryent <CENTRYSIZE,CID_BR,437,,,br437_data>   ;

 ctryent <CENTRYSIZE,CID_BG,855,,,bg855_data>   ; Bulgaria IBM Country Code
 ctryent <CENTRYSIZE,CID_BG,850,,,bg850_data>   ;

 ctryent <CENTRYSIZE,CID_BGI,855,,,bgi855_data> ; Bulgaria Real Country Code
 ctryent <CENTRYSIZE,CID_BGI,850,,,bgi850_data> ;

 ctryent <CENTRYSIZE,CID_CA,850,,,ca850_data>   ; Canada French
 ctryent <CENTRYSIZE,CID_CA,863,,,ca863_data>   ; 

 ctryent <CENTRYSIZE,CID_CAE,850,,,cae850_data> ; Canada English
 ctryent <CENTRYSIZE,CID_CAE,863,,,cae863_data> ; 

 ctryent <CENTRYSIZE,CID_CL,850,,,cl850_data>   ; Chile
 ctryent <CENTRYSIZE,CID_CL,437,,,cl437_data>   ;

 ctryent <CENTRYSIZE,CID_CO,850,,,co850_data>   ; Colombia
 ctryent <CENTRYSIZE,CID_CO,437,,,co437_data>   ;

 ctryent <CENTRYSIZE,CID_CRO,852,,,cro852_data> ; Croatia
 ctryent <CENTRYSIZE,CID_CRO,850,,,cro850_data> ;

 ctryent <CENTRYSIZE,CID_CS,852,,,cs852_data>   ; Czech Republic
 ctryent <CENTRYSIZE,CID_CS,850,,,cs850_data>   ;

 ctryent <CENTRYSIZE,CID_EC,850,,,ec850_data>   ; Ecuador
 ctryent <CENTRYSIZE,CID_EC,437,,,ec437_data>   ;

 ctryent <CENTRYSIZE,CID_DK,850,,,dk850_data>   ; Denmark
 ctryent <CENTRYSIZE,CID_DK,865,,,dk865_data>   ;

 ctryent <CENTRYSIZE,CID_FI,850,,,fi850_data>   ; Finland 
 ctryent <CENTRYSIZE,CID_FI,437,,,fi437_data>   ;

 ctryent <CENTRYSIZE,CID_FR,850,,,fr850_data>   ; France
 ctryent <CENTRYSIZE,CID_FR,437,,,fr437_data>   ; 

 ctryent <CENTRYSIZE,CID_GR,850,,,gr850_data>   ; Germany
 ctryent <CENTRYSIZE,CID_GR,437,,,gr437_data>   ; 

 ctryent <CENTRYSIZE,CID_GK,869,,,gk869_data>   ; Greece
 ctryent <CENTRYSIZE,CID_GK,737,,,gk737_data>   ; 
 ctryent <CENTRYSIZE,CID_GK,850,,,gk850_data>   ;

 ctryent <CENTRYSIZE,CID_HK,437,,,hk437_data>   ; Hong Kong SAR

 ctryent <CENTRYSIZE,CID_HU,852,,,hu852_data>   ; Hungary
 ctryent <CENTRYSIZE,CID_HU,850,,,hu850_data>   ;

 ctryent <CENTRYSIZE,CID_IC,850,,,ic850_data>   ; Iceland
 ctryent <CENTRYSIZE,CID_IC,861,,,ic861_data>   ; 

 ctryent <CENTRYSIZE,CID_IN,437,,,in437_data>   ; Indea

 ctryent <CENTRYSIZE,CID_AFE,437,,,afe437_data> ; International English
 ctryent <CENTRYSIZE,CID_AFE,850,,,afe850_data> ;

 ctryent <CENTRYSIZE,CID_IT,850,,,it850_data>   ; Italy
 ctryent <CENTRYSIZE,CID_IT,437,,,it437_data>   ; 

 ctryent <CENTRYSIZE,CID_IE,850,,,ie850_data>   ; Ireland
 ctryent <CENTRYSIZE,CID_IE,437,,,ie437_data>   ;

 ctryent <CENTRYSIZE,CID_LA,850,,,la850_data>   ; Latin America
 ctryent <CENTRYSIZE,CID_LA,437,,,la437_data>   ;

 ctryent <CENTRYSIZE,CID_MAC,855,,,mac855_data> ; FYRO former yugoslav republic of Macedonio
 ctryent <CENTRYSIZE,CID_MAC,850,,,mac850_data> ;

 ctryent <CENTRYSIZE,CID_MY,437,,,my437_data>   ; Malaysia

 ctryent <CENTRYSIZE,CID_MX,850,,,mx850_data>   ; Mexico
 ctryent <CENTRYSIZE,CID_MX,437,,,mx437_data>   ;

 ctryent <CENTRYSIZE,CID_NL,850,,,nl850_data>   ; Netherlands
 ctryent <CENTRYSIZE,CID_NL,437,,,nl437_data>   ; 

 ctryent <CENTRYSIZE,CID_NZ,437,,,nz437_data>   ; New Zealand
 ctryent <CENTRYSIZE,CID_NZ,850,,,nz850_data>   ;

 ctryent <CENTRYSIZE,CID_NO,850,,,no850_data>   ; Norway
 ctryent <CENTRYSIZE,CID_NO,865,,,no865_data>   ;

 ctryent <CENTRYSIZE,CID_PL,852,,,pl852_data>   ; Poland
 ctryent <CENTRYSIZE,CID_PL,850,,,pl850_data>   ;

 ctryent <CENTRYSIZE,CID_PO,850,,,po850_data>   ; Portugal
 ctryent <CENTRYSIZE,CID_PO,860,,,po860_data>   ;

 ctryent <CENTRYSIZE,CID_RO,852,,,ro852_data>   ; Romania
 ctryent <CENTRYSIZE,CID_RO,850,,,ro850_data>   ;

 ctryent <CENTRYSIZE,CID_RU,866,,,ru866_data>   ; Russia
 ctryent <CENTRYSIZE,CID_RU,437,,,ru437_data>   ; 
 ctryent <CENTRYSIZE,CID_RU,850,,,ru850_data>   ; 
 ctryent <CENTRYSIZE,CID_RU,855,,,ru855_data>   ; 
 ctryent <CENTRYSIZE,CID_RU,852,,,ru852_data>   ;

 ctryent <CENTRYSIZE,CID_SM,855,,,sm855_data>   ; Serbia/Montenegro
 ctryent <CENTRYSIZE,CID_SM,850,,,sm850_data>   ;

 ctryent <CENTRYSIZE,CID_SG,437,,,sg437_data>   ; Singapore

 ctryent <CENTRYSIZE,CID_SL,852,,,sl852_data>   ; Slovakia
 ctryent <CENTRYSIZE,CID_SL,850,,,sl850_data>   ;

 ctryent <CENTRYSIZE,CID_SLN,852,,,sln852_data> ; Slovenia
 ctryent <CENTRYSIZE,CID_SLN,850,,,sln850_data> ;

 ctryent <CENTRYSIZE,CID_ZA,437,,,za437_data>   ; South Africa
 ctryent <CENTRYSIZE,CID_ZA,850,,,za850_data>   ;

 ctryent <CENTRYSIZE,CID_SP,850,,,sp850_data>   ; Spain
 ctryent <CENTRYSIZE,CID_SP,437,,,sp437_data>   ;

 ctryent <CENTRYSIZE,CID_SV,850,,,sv850_data>   ; Sweden
 ctryent <CENTRYSIZE,CID_SV,437,,,sv437_data>   ; 

 ctryent <CENTRYSIZE,CID_SW,850,,,sw850_data>   ; Switzerland
 ctryent <CENTRYSIZE,CID_SW,437,,,sw437_data>   ;

 ctryent <CENTRYSIZE,CID_TR,857,,,tr857_data>   ; Turkey
 ctryent <CENTRYSIZE,CID_TR,850,,,tr850_data>   ; 

 ctryent <CENTRYSIZE,CID_UK,850,,,uk850_data>   ; United Kingdom
 ctryent <CENTRYSIZE,CID_UK,437,,,uk437_data>   ; 

 ctryent <CENTRYSIZE,CID_US,437,,,us437_data>   ; United States
 ctryent <CENTRYSIZE,CID_US,850,,,us850_data>   ;

 ctryent <CENTRYSIZE,CID_VE,850,,,ve850_data>   ; Venezuela
 ctryent <CENTRYSIZE,CID_VE,437,,,ve437_data>   ;

 ctryent <CENTRYSIZE,CID_YU,852,,,yu852_data>   ; Yugoslavia
 ctryent <CENTRYSIZE,CID_YU,850,,,yu850_data>   ;
 ctryent <CENTRYSIZE,CID_YC,855,,,yc855_data>   ; Yugoslavia Cyrillic

 ctryent <CENTRYSIZE,CID_IS,850,,,is850_data>   ; Israel
 ctryent <CENTRYSIZE,CID_IS,862,,,is862_data>   ; 

 ctryent <CENTRYSIZE,CID_AS,850,,,as850_data>   ; Area South (Arab States)
 ctryent <CENTRYSIZE,CID_AS,864,,,as864_data>   ; 

 ctryent <CENTRYSIZE,CID_JP,437,,,jp437_data>   ; Japan
 ctryent <CENTRYSIZE,CID_JP,932,,,jp932_data>   ; 

 ctryent <CENTRYSIZE,CID_KO,949,,,ko949_data>   ; Korea Windows
 ctryent <CENTRYSIZE,CID_KO,437,,,ko437_data>   ; Korea
 ctryent <CENTRYSIZE,CID_KO,1361,,,ko1361_data>   ; 

 ctryent <CENTRYSIZE,CID_PR,936,,,pr936_data>   ; PRC
 ctryent <CENTRYSIZE,CID_PR,437,,,pr437_data>   ; 

 ctryent <CENTRYSIZE,CID_TA,950,,,ta938_data>   ; Taiwan Windows
 ctryent <CENTRYSIZE,CID_TA,437,,,ta437_data>   ; Taiwan Old MS-DOS Code
 ctryent <CENTRYSIZE,CID_TA,938,,,ta938_data>   ; 
 ctryent <CENTRYSIZE,CID_TAI,950,,,tai938_data> ; Taiwan Real Country Code
 ctryent <CENTRYSIZE,CID_TAI,437,,,tai437_data> ; 
 ctryent <CENTRYSIZE,CID_TAI,938,,,tai938_data> ; 

 ctryent <CENTRYSIZE,CID_ISO,437,,,iso437_data> ; Work around an NLSFUNC.EXE
 ctryent <CENTRYSIZE,CID_ISO,737,,,iso437_data> ;  bug entry.  USA with
 ctryent <CENTRYSIZE,CID_ISO,850,,,iso850_data> ;  ISO 8601 Date format.
 ctryent <CENTRYSIZE,CID_ISO,852,,,iso850_data> ; 
 ctryent <CENTRYSIZE,CID_ISO,855,,,iso850_data> ;
 ctryent <CENTRYSIZE,CID_ISO,857,,,iso850_data> ;


dummy   macro   p
finalCNT        equ     p
        endm
        dummy   %cntrycnt


al852_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,al852_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_852_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_852_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP852_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

al850_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,al850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP850_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


as864_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,as864_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Arabic_864_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

as850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,as850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


ar850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ar850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Spanish_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Spanish_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Spanish_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

ar437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ar437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Spanish_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


au437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,au437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

au850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,au850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


at850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,at850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,German_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,German_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

at437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,at437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


be850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,be850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Belgian_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Swed_Fin_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Swed_Fin_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

be437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,be437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Belgian_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Swed_Fin_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Swed_Fin_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


bh852_data label   word
  dw     CDATAITEMS                      ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,bh852_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_852_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_852_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP852_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

bh850_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,bh850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP850_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


br850_data label   word
  dw    CDATAITEMS                    ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,br850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Brazilian_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP850_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

br437_data label   word
  dw    CDATAITEMS                    ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,br437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


bg855_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,bg855_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Cyrillic_855_collate>
  ctrydat <CDATASIZE,SETUCASE,,Cyrillic_855_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Cyrillic_855_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

bg850_data label   word
  dw     CDATAITEMS                      ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,bg850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP850_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

bgi855_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,bgi855_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Cyrillic_855_collate>
  ctrydat <CDATASIZE,SETUCASE,,Cyrillic_855_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Cyrillic_855_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

bgi850_data label   word
  dw     CDATAITEMS                      ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,bgi850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP850_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


ca850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ca850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

ca863_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ca863_info>
  ctrydat <CDATASIZE,SETCOLLATE,,FrnCdn_863_collate>
  ctrydat <CDATASIZE,SETUCASE,,FrnCdn_863_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,FrnCdn_863_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


cae850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,cae850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

cae863_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,cae863_info>
  ctrydat <CDATASIZE,SETCOLLATE,,FrnCdn_863_collate>
  ctrydat <CDATASIZE,SETUCASE,,FrnCdn_863_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,FrnCdn_863_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


cl850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,cl850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Spanish_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Spanish_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Spanish_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

cl437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,cl437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Spanish_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


co850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,co850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Spanish_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Spanish_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Spanish_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

co437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,co437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Spanish_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


cro852_data label   word
  dw     CDATAITEMS                      ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,cro852_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_852_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_852_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP852_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

cro850_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,cro850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP850_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


cs852_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,cs852_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_852_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_852_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP852_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

cs850_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,cs850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP850_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


dk850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,dk850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Danish_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Nordic_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Nordic_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

dk865_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,dk865_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Danish_865_collate>
  ctrydat <CDATASIZE,SETUCASE,,Nordic_865_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Nordic_865_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


ec850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ec850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Spanish_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Spanish_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Spanish_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

ec437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ec437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Spanish_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


fi850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,fi850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Finnish_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Swed_Fin_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Swed_Fin_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

fi437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,fi437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Swed_Fin_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Swed_Fin_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Swed_Fin_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


fr850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,fr850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

fr437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,fr437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


gr850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,gr850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,German_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,German_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

gr437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,gr437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


gk869_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,gk869_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Greek_869_collate>
  ctrydat <CDATASIZE,SETUCASE,,Greek_869_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Greek_869_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

gk737_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,gk737_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Greek_737_collate>  
  ctrydat <CDATASIZE,SETUCASE,,Greek_737_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Greek_737_ucase>   
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

gk850_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,gk850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP850_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


hk437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,hk437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


hu852_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,hu852_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_852_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_852_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP852_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

hu850_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,hu850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP850_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


ic850_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ic850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP850_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

ic861_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ic861_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Icelandic_861_collate>
  ctrydat <CDATASIZE,SETUCASE,,Icelandic_861_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Icelandic_861_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


afe437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,afe437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

afe850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,afe850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


ie850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ie850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

ie437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ie437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


in437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,in437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


is862_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,is862_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Hebrew_862_collate>
  ctrydat <CDATASIZE,SETUCASE,,Hebrew_862_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Hebrew_862_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

is850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,is850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


it850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,it850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

it437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,it437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


jp932_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,jp932_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Japan_932_collate>
  ctrydat <CDATASIZE,SETUCASE,,DBCS_93x_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,DBCS_93x_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,jp932_dbcs>

jp437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,jp437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


ko949_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ko949_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Korea_949_collate>
  ctrydat <CDATASIZE,SETUCASE,,DBCS_93x_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,DBCS_93x_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,ko949_dbcs>


ko1361_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ko1361_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Korea_949_collate>
  ctrydat <CDATASIZE,SETUCASE,,DBCS_93x_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,DBCS_93x_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,ko1361_dbcs>


ko437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ko437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


la850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,la850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Spanish_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Spanish_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Spanish_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

la437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,la437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Spanish_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


mac855_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,mac855_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Cyrillic_855_collate>
  ctrydat <CDATASIZE,SETUCASE,,Cyrillic_855_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Cyrillic_855_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

mac850_data label   word
  dw     CDATAITEMS                               ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,mac850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP850_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


my437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,my437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


mx850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,mx850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Spanish_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Spanish_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Spanish_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

mx437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,mx437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Spanish_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


nl850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,nl850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Dutch_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Dutch_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Dutch_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

nl437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,nl437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Dutch_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Dutch_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Dutch_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


nz437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,nz437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

nz850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,nz850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


no850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,no850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Norwegian_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Nordic_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Nordic_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

no865_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,no865_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Norwegian_865_collate>
  ctrydat <CDATASIZE,SETUCASE,,Nordic_865_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Nordic_865_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


pr936_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,pr936_info>
  ctrydat <CDATASIZE,SETCOLLATE,,PRC_936_collate>
  ctrydat <CDATASIZE,SETUCASE,,DBCS_93x_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,DBCS_93x_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,pr936_dbcs>


pr437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,pr437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


pl852_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,pl852_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_852_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_852_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP852_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

pl850_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,pl850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP850_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


po850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,po850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

po860_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,po860_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Portuguese_860_collate>
  ctrydat <CDATASIZE,SETUCASE,,Portuguese_860_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Portuguese_860_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


ro852_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ro852_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_852_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_852_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP852_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

ro850_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ro850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP850_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


ru866_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ru866_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Russian_866_collate>
  ctrydat <CDATASIZE,SETUCASE,,Russian_866_ucase>
  ctrydat <CDATASIZE,SETLCASE,,ru866_lcase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Russian_866_ucase>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

ru437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ru437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

ru850_data label   word
  dw      CDATAITEMS                             ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ru850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

ru855_data label   word
  dw      CDATAITEMS                             ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ru855_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Cyrillic_855_collate>
  ctrydat <CDATASIZE,SETUCASE,,Cyrillic_855_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Cyrillic_855_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

ru852_data label   word
  dw      CDATAITEMS                             ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ru852_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_852_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_852_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin2_852_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


sm855_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,sm855_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Cyrillic_855_collate>
  ctrydat <CDATASIZE,SETUCASE,,Cyrillic_855_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Cyrillic_855_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

sm850_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,sm850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP850_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


sg437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,sg437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


sl852_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,sl852_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_852_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_852_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP852_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

sl850_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,sl850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP850_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


sln852_data label   word
  dw     CDATAITEMS                      ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,sln852_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_852_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_852_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP852_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

sln850_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,sln850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP850_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


za437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,za437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

za850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,za850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


sp850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,sp850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Spanish_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Spanish_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Spanish_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

sp437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,sp437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Spanish_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


sv850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,sv850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Swedish_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Swed_Fin_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Swed_Fin_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

sv437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,sv437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Swed_Fin_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Swed_Fin_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Swed_Fin_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


sw850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,sw850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Swiss_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Swiss_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Swiss_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

sw437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,sw437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Swiss_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Swiss_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Swiss_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


ta938_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ta938_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Taiwan_938_collate>
  ctrydat <CDATASIZE,SETUCASE,,DBCS_93x_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,DBCS_93x_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,ta938_dbcs>

ta437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ta437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


tai938_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,tai938_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Taiwan_938_collate>
  ctrydat <CDATASIZE,SETUCASE,,DBCS_93x_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,DBCS_93x_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,ta938_dbcs>

tai437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,tai437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


tr857_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,tr857_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Turkish_857_collate>
  ctrydat <CDATASIZE,SETUCASE,,Turkish_857_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Turkish_857_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

tr850_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,tr850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Turkish_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Turkish_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Turkish_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


uk850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,uk850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

uk437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,uk437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


us437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,us437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

us850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,us850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


ve850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ve850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Spanish_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Spanish_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Spanish_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

ve437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,ve437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Spanish_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


yu852_data label   word
  dw     CDATAITEMS                      ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,yu852_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_852_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_852_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP852_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

yu850_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,yu850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin2_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin2_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,CP850_ucfile>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

yc855_data label   word
  dw     CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,yc855_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Cyrillic_855_collate>
  ctrydat <CDATASIZE,SETUCASE,,Cyrillic_855_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Cyrillic_855_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>


iso437_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,iso437_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_437_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_437_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>

iso850_data label   word
  dw      CDATAITEMS                              ; number of entries
  ctrydat <CDATASIZE,SETCOUNTRYINFO,,iso850_info>
  ctrydat <CDATASIZE,SETCOLLATE,,Latin1_850_collate>
  ctrydat <CDATASIZE,SETUCASE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETUCASEFILE,,Latin1_850_ucase>
  ctrydat <CDATASIZE,SETFILELIST,,Valid_flist>
  ctrydat <CDATASIZE,SETDBCS,,Not_dbcs>



; ----------------------------------------
;                                                       
;       World Trade Country Info Tables
;
; ----------------------------------------

;================================================

al852_info   label   word   ;CP852 Albania
   ctable  <>
   cinfo   <CID_AL,852,YMD,'L','e','k',000,0,'.',0,',',0,'-',0,':',0,CurrAmount,2,HR24,0,','>

al850_info   label   word   ;CP850 Albania
   ctable  <>
   cinfo   <CID_AL,850,YMD,'L','e','k',000,0,'.',0,',',0,'-',0,':',0,CurrAmount,2,HR24,0,','>

;================================================

as864_info   label   word   ;CP864 Area South (Arabic)
   ctable  <>
   cinfo   <CID_AS,864,DMY,164,000,000,000,0,'.',0,',',0,'/',0,':',0,Amount_Cur,3,HR12,0,';'>

as850_info   label   word   ;CP850 Area South (Arabic)
   ctable  <>
   cinfo   <CID_AS,864,DMY,'�',000,000,000,0,'.',0,',',0,'/',0,':',0,Amount_Cur,3,HR12,0,';'>

;================================================

ar850_info   label   word   ;CP850 Argentina
   ctable  <>
   cinfo   <CID_AR,850,DMY,'$',000,000,000,0,'.',0,',',0,'/',0,'.',0,CurrAmount,2,HR24,0,','> 

ar437_info   label   word   ;CP437 Argentina
   ctable  <>
   cinfo   <CID_AR,437,DMY,'$',000,000,000,0,'.',0,',',0,'/',0,'.',0,CurrAmount,2,HR24,0,','> 

;================================================

au437_info   label   word   ;CP437 Australia
   ctable  <>
   cinfo   <CID_AU,437,DMY,'$',000,000,000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR24,0,','>

au850_info   label   word   ;CP850 Australia
   ctable  <>
   cinfo   <CID_AU,850,DMY,'$',000,000,000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR24,0,','>

;================================================

at850_info   label   word   ;CP850 Austria
   ctable  <>
   cinfo   <CID_AT,850,DMY,'S',000,000,000,0,'.',0,',',0,'.',0,':',0,Cur_Amount,2,HR24,0,';'> 

at437_info   label   word   ;CP437 Austria
   ctable  <>
   cinfo   <CID_AT,437,DMY,'S',000,000,000,0,'.',0,',',0,'.',0,':',0,Cur_Amount,2,HR24,0,';'> 

;================================================

be850_info   label   word   ;CP850 Belgium
   ctable  <>
   cinfo   <CID_BE,850,DMY,'B','F',000,000,0,'.',0,',',0,'/',0,':',0,Amount_Cur,2,HR24,0,';'>      

be437_info   label   word   ;CP437 Belgium
   ctable  <>
   cinfo   <CID_BE,437,DMY,'B','F',000,000,0,'.',0,',',0,'/',0,':',0,Amount_Cur,2,HR24,0,';'>      

;================================================

bh852_info   label   word   ;CP852 Bosnia/Herzegovina
   ctable  <>
   cinfo   <CID_BH,852,YMD,'D','i','n',000,0,'.',0,',',0,'-',0,':',0,Cur_Amount,2,HR24,0,','>

bh850_info   label   word   ;CP850 Bosnia/Herzegovina
   ctable  <>
   cinfo   <CID_BH,850,YMD,'D','i','n',000,0,'.',0,',',0,'-',0,':',0,Cur_Amount,2,HR24,0,','>

;================================================

br850_info   label   word   ;CP850 Brazil
   ctable  <>
   cinfo   <CID_BR,850,DMY,'C','r','$',000,0,'.',0,',',0,'/',0,':',0,Cur_Amount,2,HR24,0,';'>

br437_info   label   word   ;CP437 Brazil
   ctable  <>
   cinfo   <CID_BR,437,DMY,'C','r','$',000,0,'.',0,',',0,'/',0,':',0,Cur_Amount,2,HR24,0,';'>

;================================================

bg855_info   label   word   ;CP855 Bulgaria  IBM Country Code
   ctable  <>
   cinfo   <CID_BG,855,DMY,'�','�','.',000,0,' ',0,',',0,'.',0,'.',0,Amount_Cur,2,HR24,0,';'>

bg850_info   label   word   ;CP850 Bulgaria  IBM Country Code
   ctable  <>
   cinfo   <CID_BG,850,DMY,'L','v',000,000,0,' ',0,',',0,'.',0,'.',0,CurrAmount,2,HR24,0,';'>

bgi855_info  label   word   ;CP855 Bulgaria  Real Country Code
   ctable  <>
   cinfo  <CID_BGI,855,DMY,'�','�','.',000,0,' ',0,',',0,'.',0,'.',0,Amount_Cur,2,HR24,0,';'>

bgi850_info  label   word   ;CP850 Bulgaria  Real Country Code
   ctable  <>
   cinfo  <CID_BGI,850,DMY,'L','v',000,000,0,' ',0,',',0,'.',0,'.',0,CurrAmount,2,HR24,0,';'>

;================================================

ca850_info   label   word   ;CP850 French Canadian
   ctable  <>
   cinfo   <CID_CA,850,YMD,'$',000,000,000,0,' ',0,',',0,'-',0,':',0,Amount_Cur,2,HR24,0,';'>

ca863_info   label   word   ;CP863 French Canadian
   ctable  <>
   cinfo   <CID_CA,863,YMD,'$',000,000,000,0,' ',0,',',0,'-',0,':',0,Amount_Cur,2,HR24,0,';'>

;================================================

cae850_info  label   word   ;CP850 English Canadian
   ctable  <>
   cinfo  <CID_CAE,850,DMY,'$',000,000,000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR24,0,','>

cae863_info  label   word   ;CP863 English Canadian
   ctable  <>
   cinfo  <CID_CAE,863,DMY,'$',000,000,000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR24,0,','>

;================================================

cl850_info   label   word   ;CP850 Chile
   ctable  <>
   cinfo   <CID_CL,850,DMY,'$',000,000,000,0,'.',0,',',0,'/',0,':',0,CurrAmount,2,HR24,0,','> 

cl437_info   label   word   ;CP437 Chile
   ctable  <>
   cinfo   <CID_CL,437,DMY,'$',000,000,000,0,'.',0,',',0,'/',0,':',0,CurrAmount,2,HR24,0,','> 

;================================================

; Columbia
co850_info   label   word   ;CP850 Columbia
   ctable  <>
   cinfo   <CID_CO,850,DMY,'$',000,000,000,0,'.',0,',',0,'/',0,':',0,CurrAmount,2,HR12,0,','> 

co437_info   label   word   ;CP437 Columbia
   ctable  <>
   cinfo   <CID_CO,437,DMY,'$',000,000,000,0,'.',0,',',0,'/',0,':',0,CurrAmount,2,HR12,0,','> 

;================================================

cro852_info  label   word   ;CP852 Croatia
   ctable  <>
   cinfo  <CID_CRO,852,YMD,'D','i','n',000,0,'.',0,',',0,'-',0,':',0,Cur_Amount,2,HR24,0,','>

cro850_info  label   word   ;CP850 Croatia
   ctable  <>
   cinfo  <CID_CRO,850,YMD,'D','i','n',000,0,'.',0,',',0,'-',0,':',0,Cur_Amount,2,HR24,0,','>

;================================================

cs852_info   label   word   ;CP852 Czech Republic
   ctable  <>
   cinfo   <CID_CS,852,DMY,'K','�',000,000,0,' ',0,',',0,'.',0,'.',0,Amount_Cur,2,HR24,0,','>

cs850_info   label   word   ;CP850 Czech Republic
   ctable  <>
   cinfo   <CID_CS,850,DMY,'K','c',000,000,0,' ',0,',',0,'.',0,'.',0,Amount_Cur,2,HR24,0,','>

;================================================

dk850_info   label   word   ;CP850 Denmark
   ctable  <>
   cinfo   <CID_DK,850,DMY,'k','r',000,000,0,'.',0,',',0,'-',0,'.',0,Cur_Amount,2,HR24,0,';'>

dk865_info   label   word   ;CP865 Denmark
   ctable  <>
   cinfo   <CID_DK,865,DMY,'k','r',000,000,0,'.',0,',',0,'-',0,'.',0,Cur_Amount,2,HR24,0,';'>

;================================================

ec850_info   label   word   ;CP850 Ecuador
   ctable  <>
   cinfo   <CID_EC,850,DMY,'$',000,000,000,0,'.',0,',',0,'/',0,':',0,CurrAmount,2,HR24,0,','> 

ec437_info   label   word   ;CP437 Ecuador
   ctable  <>
   cinfo   <CID_EC,437,DMY,'$',000,000,000,0,'.',0,',',0,'/',0,':',0,CurrAmount,2,HR24,0,','> 


;================================================

fi850_info   label   word   ;CP850 Finland
   ctable  <>
   cinfo   <CID_FI,437,DMY,'m','k',000,000,0,' ',0,',',0,'.',0,'.',0,Amount_Cur,2,HR24,0,';'>

fi437_info   label   word   ;CP437
   ctable  <>
   cinfo   <CID_FI,437,DMY,'m','k',000,000,0,' ',0,',',0,'.',0,'.',0,Amount_Cur,2,HR24,0,';'>

;================================================

fr850_info   label   word   ;CP850 France
   ctable  <>
   cinfo   <CID_FR,850,DMY,'F',000,000,000,0,' ',0,',',0,'/',0,':',0,Amount_Cur,2,HR24,0,';'> 

fr437_info   label   word   ;CP437 France
   ctable  <>
   cinfo   <CID_FR,437,DMY,'F',000,000,000,0,' ',0,',',0,'/',0,':',0,Amount_Cur,2,HR24,0,';'> 

;================================================

gr850_info   label   word   ;CP850 Germany
   ctable  <>
   cinfo   <CID_GR,850,DMY,'D','M',000,000,0,'.',0,',',0,'.',0,':',0,Amount_Cur,2,HR24,0,';'> 

gr437_info   label   word   ;CP437 Germany
   ctable  <>
   cinfo   <CID_GR,437,DMY,'D','M',000,000,0,'.',0,',',0,'.',0,':',0,Amount_Cur,2,HR24,0,';'> 

;================================================

gk869_info   label   word   ;CP869 Greece
   ctable  <>
   cinfo   <CID_GK,869,DMY,'�','�','�',000,0,'.',0,',',0,'/',0,':',0,AmountCurr,2,HR12,0,','>

gk737_info   label   word   ;CP737 Greece
   ctable  <>
   cinfo   <CID_GK,737,DMY,'�','�','�',000,0,'.',0,',',0,'/',0,':',0,AmountCurr,2,HR12,0,','>

gk852_info   label   word   ;CP852 Greece
   ctable  <>
   cinfo   <CID_GK,852,DMY,'D','r','s',000,0,'.',0,',',0,'/',0,':',0,AmountCurr,2,HR12,0,','>

gk850_info   label   word   ;CP850 Greece
   ctable  <>
   cinfo   <CID_GK,850,DMY,'D','r','s',000,0,'.',0,',',0,'/',0,':',0,AmountCurr,2,HR12,0,','>

;================================================

hk437_info   label   word   ;CP437 Hong Kong SAR
   ctable  <>
   cinfo   <CID_HK,437,DMY,'H','K','$',000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR24,0,','>  

;================================================

hu852_info   label   word   ;CP852 Hungary
   ctable  <>
   cinfo   <CID_HU,852,YMD,'F','t',000,000,0,' ',0,',',0,'.',0,'.',0,CurrAmount,2,HR24,0,';'>

hu850_info   label   word   ;CP850 Hungary
   ctable  <>
   cinfo   <CID_HU,850,YMD,'F','t',000,000,0,' ',0,',',0,'.',0,'.',0,CurrAmount,2,HR24,0,';'>

;================================================

ic861_info   label   word   ;CP861 Iceland
   ctable  <>
   cinfo   <CID_IC,861,YMD,'�','K','r',000,0,' ',0,',',0,'-',0,':',0,Amount_Cur,2,HR24,0,';'>

ic850_info   label   word   ;CP850 Iceland
   ctable  <>
   cinfo   <CID_IC,850,YMD,'k','r',000,000,0,' ',0,',',0,'-',0,':',0,Amount_Cur,2,HR24,0,';'>

;================================================

in437_info   label   word   ;CP437 Indea
   ctable  <>
   cinfo   <CID_IN,437,DMY,'R','s',000,000,0,'.',0,',',0,'/',0,':',0,CurrAmount,2,HR24,0,','>  

;================================================

afe437_info  label   word   ;CP437 International English
   ctable  <>
   cinfo  <CID_AFE,437,DMY,'$',000,000,000,0,',',0,'.',0,'-',0,':',0,CurrAmount,2,HR12,0,','>

afe850_info  label   word   ;CP850 International English
   ctable  <>
   cinfo  <CID_AFE,850,DMY,'$',000,000,000,0,',',0,'.',0,'-',0,':',0,CurrAmount,2,HR12,0,','>

;================================================

ie850_info   label   word   ;CP850 Ireland
   ctable  <>
   cinfo   <CID_IE,850,DMY,'I','R','�',000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR24,0,','>  

ie437_info   label   word   ;CP437 Ireland
   ctable  <>
   cinfo   <CID_IE,437,DMY,'I','R','�',000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR24,0,','>  

;================================================

is862_info   label   word   ;CP862 Israel
   ctable  <>
   cinfo   <CID_IS,862,DMY,153,000,000,000,0,',',0,'.',0,'/',0,':',0,Cur_Amount,2,HR24,0,','>

is850_info   label   word   ;CP850 Israel
   ctable  <>
   cinfo   <CID_IS,850,DMY,'N','I','S',000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR24,0,','>

;================================================

it850_info   label   word   ;CP850 Italy
   ctable  <>
   cinfo   <CID_IT,850,DMY,'L','.',000,000,0,'.',0,',',0,'/',0,'.',0,Cur_Amount,0,HR24,0,';'>       

it437_info   label   word   ;CP437 Italy
   ctable  <>
   cinfo   <CID_IT,437,DMY,'L','.',000,000,0,'.',0,',',0,'/',0,'.',0,Cur_Amount,0,HR24,0,';'>       

;================================================

jp932_info   label   word   ;CP932 Japan
   ctable  <>
   cinfo   <CID_JP,932,YMD,'\',000,000,000,0,',',0,'.',0,'-',0,':',0,CurrAmount,0,HR24,0,','>

jp437_info   label   word   ;CP437 Japan
   ctable  <>
   cinfo   <CID_JP,437,MDY,'$',000,000,000,0,',',0,'.',0,'-',0,':',0,CurrAmount,2,HR12,0,','>

;================================================

ko949_info   label   word   ;CP949 Korea
   ctable  <>
   cinfo   <CID_KO,949,YMD,'\',000,000,000,0,',',0,'.',0,'-',0,':',0,CurrAmount,0,HR24,0,','>  

ko1361_info   label   word   ;CP1361 Korea
   ctable  <>
   cinfo   <CID_KO,1361,YMD,'\',000,000,000,0,',',0,'.',0,'-',0,':',0,CurrAmount,0,HR24,0,','>  

ko437_info   label   word   ;CP437 Korea
   ctable  <>
   cinfo   <CID_KO,437,MDY,'$',000,000,000,0,',',0,'.',0,'-',0,':',0,CurrAmount,2,HR12,0,','>

;================================================

la850_info   label   word   ;CP850 Latin America
   ctable  <>
   cinfo   <CID_LA,850,DMY,'$',000,000,000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR12,0,','> 

la437_info   label   word   ;CP437 Latin America
   ctable  <>
   cinfo   <CID_LA,437,DMY,'$',000,000,000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR12,0,','> 

;================================================

mac855_info  label   word   ;CP855 FYRO Former Yugoslav Republic of Macedonia
   ctable  <>
   cinfo  <CID_MAC,855,YMD,'�','�','�',000,0,'.',0,',',0,'-',0,':',0,Cur_Amount,2,HR24,0,','>

mac850_info  label   word   ;CP850 FYRO Former Yugoslav Republic of Macedonia
   ctable  <>
   cinfo  <CID_MAC,850,YMD,'D','i','n',000,0,'.',0,',',0,'-',0,':',0,Cur_Amount,2,HR24,0,','>

;================================================

my437_info   label   word   ;CP437 Malaysia
   ctable  <>
   cinfo   <CID_MY,437,DMY,'$',000,000,000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR12,0,','>  

;================================================

mx850_info   label   word   ;CP850 Mexico
   ctable  <>
   cinfo   <CID_MX,850,DMY,'N','$',000,000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR12,0,','> 

mx437_info   label   word   ;CP437 Mexico
   ctable  <>
   cinfo   <CID_MX,437,DMY,'N','$',000,000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR12,0,','> 

;================================================

nl850_info   label   word   ;CP850 Netherlands
   ctable  <>
   cinfo   <CID_NL,850,DMY,'�',000,000,000,0,'.',0,',',0,'-',0,':',0,Cur_Amount,2,HR24,0,';'>

nl437_info   label   word   ;CP437 Netherlands
   ctable  <>
   cinfo   <CID_NL,437,DMY,'�',000,000,000,0,'.',0,',',0,'-',0,':',0,Cur_Amount,2,HR24,0,';'>

;================================================

nz437_info   label   word   ;CP437 New Zealand
   ctable  <>
   cinfo   <CID_NZ,437,DMY,'$',000,000,000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR24,0,','>

nz850_info   label   word   ;CP850 New Zealand
   ctable  <>
   cinfo   <CID_NZ,850,DMY,'$',000,000,000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR24,0,','>

;================================================

no850_info   label   word   ;CP850 Norway
   ctable  <>
   cinfo   <CID_NO,850,DMY,'k','r',000,000,0,' ',0,',',0,'.',0,':',0,Cur_Amount,2,HR24,0,';'>

no865_info   label   word   ;CP865 Norway
   ctable  <>
   cinfo   <CID_NO,865,DMY,'k','r',000,000,0,' ',0,',',0,'.',0,':',0,Cur_Amount,2,HR24,0,';'> 

;================================================

pr936_info   label   word   ;CP936 People's Republic of China
   ctable  <>
   cinfo   <CID_PR,936,YMD,'\',000,000,000,0,',',0,'.',0,'.',0,':',0,CurrAmount,2,HR12,0,','>

pr437_info   label   word   ;CP437 People's Republic of China
   ctable  <>
   cinfo   <CID_PR,437,YMD,'$',000,000,000,0,',',0,'.',0,'.',0,':',0,CurrAmount,2,HR12,0,','>

;================================================

pl852_info   label   word   ;CP852 Poland 
   ctable  <>
   cinfo   <CID_PL,852,YMD,'Z','�',000,000,0,' ',0,',',0,'.',0,':',0,CurrAmount,2,HR24,0,';'>

pl850_info   label   word   ;CP850 Poland 
   ctable  <>
   cinfo   <CID_PL,850,YMD,'Z','l',000,000,0,' ',0,',',0,'.',0,':',0,CurrAmount,2,HR24,0,';'>

;================================================

po850_info   label   word   ;CP850 Portugal
   ctable  <>
   cinfo   <CID_PO,850,DMY,'E','s','c','.',0,'.',0,',',0,'-',0,':',0,Amount_Cur,2,HR24,0,';'>        

po860_info   label   word   ;CP860 Portugal
   ctable  <>
   cinfo   <CID_PO,860,DMY,'E','s','c','.',0,'.',0,',',0,'-',0,':',0,Amount_Cur,2,HR24,0,';'>        

;================================================

ro852_info   label   word   ;CP852 Romania
   ctable  <>
   cinfo   <CID_RO,852,YMD,'L','e','i',000,0,'.',0,',',0,'-',0,':',0,Cur_Amount,2,HR24,0,','>

ro850_info   label   word   ;CP850 Romania
   ctable  <>
   cinfo   <CID_RO,850,YMD,'L','e','i',000,0,'.',0,',',0,'-',0,':',0,Cur_Amount,2,HR24,0,','>

;================================================

ru866_info   label   word   ;CP866 Russia
   ctable  <>
   cinfo   <CID_RU,866,DMY,'�','.',000,000,0,' ',0,'.',0,'.',0,':',0,Amount_Cur,2,HR24,0,';'>

ru437_info   label   word   ;CP437 Russia
   ctable  <>
   cinfo   <CID_RU,437,DMY,'r','.',000,000,0,' ',0,'.',0,'.',0,':',0,Amount_Cur,2,HR24,0,';'>

ru850_info   label   word   ;CP850 Russia
   ctable  <>
   cinfo   <CID_RU,850,DMY,'r','.',000,000,0,' ',0,'.',0,'.',0,':',0,Amount_Cur,2,HR24,0,';'>

ru855_info   label   word   ;CP855 Russia
   ctable  <>
   cinfo   <CID_RU,855,DMY,'�','.',000,000,0,' ',0,'.',0,'.',0,':',0,Amount_Cur,2,HR24,0,';'>

ru852_info   label   word   ;CP852 Russia
   ctable  <>
   cinfo   <CID_RU,852,DMY,'r','.',000,000,0,' ',0,'.',0,'.',0,':',0,Amount_Cur,2,HR24,0,';'>

;================================================

sm855_info   label   word   ;CP855 Serbia/Montenegro
   ctable  <>
   cinfo   <CID_SM,855,YMD,'�','�','�',000,0,'.',0,',',0,'-',0,':',0,Cur_Amount,2,HR24,0,','>

sm850_info   label   word   ;CP850 Serbia/Montenegro
   ctable  <>
   cinfo   <CID_SM,850,YMD,'D','i','n',000,0,'.',0,',',0,'-',0,':',0,Cur_Amount,2,HR24,0,','>

;================================================

sg437_info   label   word   ;CP437 Singapore
   ctable  <>
   cinfo   <CID_SG,437,DMY,'$',000,000,000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR12,0,','>  

;================================================

sl852_info   label   word   ;CP852 Slovakia
   ctable  <>
   cinfo   <CID_SL,852,DMY,'S','k',000,000,0,' ',0,',',0,'.',0,'.',0,Amount_Cur,2,HR24,0,';'>

sl850_info   label   word   ;CP850 Slovakia
   ctable  <>
   cinfo   <CID_SL,850,DMY,'S','k',000,000,0,' ',0,',',0,'.',0,'.',0,Amount_Cur,2,HR24,0,';'>

;================================================

sln852_info  label   word   ;CP852 Slovenia
   ctable  <>
   cinfo  <CID_SLN,852,YMD,'D','i','n',000,0,'.',0,',',0,'-',0,':',0,Cur_Amount,2,HR24,0,','>

sln850_info  label   word   ;CP850 Slovenia
   ctable  <>
   cinfo  <CID_SLN,850,YMD,'D','i','n',000,0,'.',0,',',0,'-',0,':',0,Cur_Amount,2,HR24,0,','>

;================================================

za437_info   label   word   ;CP437 South Africa
   ctable  <>
   cinfo   <CID_ZA,437,YMD,'R',000,000,000,0,' ',0,',',0,'-',0,':',0,CurrAmount,2,HR24,0,','>

za850_info   label   word   ;CP850 South Africa
   ctable  <>
   cinfo   <CID_ZA,850,YMD,'R',000,000,000,0,' ',0,',',0,'-',0,':',0,CurrAmount,2,HR24,0,','>

;================================================

sp850_info   label   word   ;CP850 Spain
   ctable  <>
   cinfo   <CID_SP,437,DMY,'P','t','s',000,0,'.',0,',',0,'/',0,':',0,Amount_Cur,0,HR24,0,';'>   

sp437_info   label   word   ;CP437 Spain
   ctable  <>
   cinfo   <CID_SP,437,DMY,'�',000,000,000,0,'.',0,',',0,'/',0,':',0,Amount_Cur,0,HR24,0,';'> 

;================================================

sv850_info   label   word   ;CP850 Sweden
   ctable  <>
   cinfo   <CID_SV,850,YMD,'k','r',000,000,0,' ',0,',',0,'-',0,'.',0,Amount_Cur,2,HR24,0,';'>      

sv437_info   label   word   ;CP437 Sweden
   ctable  <>
   cinfo   <CID_SV,437,YMD,'k','r',000,000,0,' ',0,',',0,'-',0,'.',0,Amount_Cur,2,HR24,0,';'>      

;================================================

sw850_info   label   word   ;CP850 Switzerland
   ctable  <>
   cinfo   <CID_SW,850,DMY,'S','F','r','.',0,"'",0,'.',0,'.',0,':',0,Cur_Amount,2,HR24,0,';'> 

sw437_info   label   word   ;CP437 Switzerland
   ctable  <>
   cinfo   <CID_SW,437,DMY,'S','F','r','.',0,"'",0,'.',0,'.',0,':',0,Cur_Amount,2,HR24,0,';'> 

;================================================

ta938_info   label   word   ;CP938 Taiwan
   ctable  <>
   cinfo  <CID_TA,938,YMD,'N','T','$',000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR12,0,','>

ta437_info   label   word   ;CP437 Taiwan
   ctable  <>
   cinfo  <CID_TA,437,YMD,'$',000,000,000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR12,0,','>    

tai938_info  label   word   ;CP938 Taiwan with Real Country/Region Code
   ctable  <>
   cinfo   <CID_TAI,938,YMD,'N','T','$',000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR12,0,','>

tai437_info  label   word   ;CP437 Taiwan with Country/Region Code
   ctable  <>
   cinfo   <CID_TAI,437,YMD,'$',000,000,000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR12,0,','>    

;================================================

tr850_info   label   word   ;CP852 Turkey
   ctable  <>
   cinfo   <CID_TR,850,DMY,'T','L',000,000,0,'.',0,',',0,'/',0,':',0,CurrAmount,2,HR24,0,';'>

tr857_info   label   word   ;CP852 Turkey
   ctable  <>
   cinfo   <CID_TR,857,DMY,'T','L',000,000,0,'.',0,',',0,'/',0,':',0,CurrAmount,2,HR24,0,';'>

;================================================

uk850_info   label   word   ;CP850 United Kingdom
   ctable  <>
   cinfo   <CID_UK,850,DMY,'�',000,000,000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR24,0,','>  

uk437_info   label   word   ;CP437 United Kingdom
   ctable  <>
   cinfo   <CID_UK,437,DMY,'�',000,000,000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR24,0,','>  

;================================================

us437_info   label   word   ;CP437 United States
   ctable  <>
   cinfo   <CID_US,437,MDY,'$',000,000,000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR12,0,','>

us850_info   label   word   ;CP850 United States
   ctable  <>
   cinfo   <CID_US,850,MDY,'$',000,000,000,0,',',0,'.',0,'/',0,':',0,CurrAmount,2,HR12,0,','>

;================================================

ve850_info   label   word   ;CP850 Venezuela
   ctable  <>
   cinfo   <CID_VE,850,DMY,'B','s','.',000,0,'.',0,',',0,'/',0,':',0,CurrAmount,2,HR12,0,','> 

ve437_info   label   word   ;CP437 Venezuela
   ctable  <>
   cinfo   <CID_VE,437,DMY,'B','s','.',000,0,'.',0,',',0,'/',0,':',0,CurrAmount,2,HR12,0,','> 

;================================================

yu852_info   label   word   ;CP852 Yugoslavia
   ctable  <>
   cinfo   <CID_YU,852,YMD,'D','i','n',000,0,'.',0,',',0,'-',0,':',0,Cur_Amount,2,HR24,0,','>

yu850_info   label   word   ;CP850 Yugoslavia
   ctable  <>
   cinfo   <CID_YU,850,YMD,'D','i','n',000,0,'.',0,',',0,'-',0,':',0,Cur_Amount,2,HR24,0,','>

;================================================

yc855_info   label   word   ;CP855 Yugoslavia Cyrillic
   ctable  <>
   cinfo   <CID_YC,855,YMD,'�','�','�',000,0,'.',0,',',0,'-',0,':',0,Cur_Amount,2,HR24,0,','>

;================================================

iso437_info  label   word   ;CP437 Work around an NLSFUNC.EXE Bug Entry
   ctable  <>
   cinfo  <CID_ISO,437,YMD,'E','A','$',000,0,'.',0,',',0,'-',0,':',0,CurrAmount,2,HR24,0,','>

iso850_info  label   word   ;CP850 Work around an NLSFUNC.EXE Bug Entry
   ctable  <>
   cinfo  <CID_ISO,850,YMD,'J','K','$',000,0,',',0,'.',0,'-',0,':',0,CurrAmount,2,HR24,0,','>

;================================================

        page

include nls437.inc
include nls737.inc
include nls850.inc
include nls852.inc
include nls855.inc
include nls857.inc
include nls860.inc
include nls861.inc
include nls862.inc
include nls863.inc
include nls864.inc
include nls865.inc
include nls866.inc
include nls869.inc
include nls93x.inc


; ----------------------------------------------------------------------------
;
;       World Trade Valid Filename Character Tables
;
;               Currently all countries have same (4/14/86)
;
;
; ----------------------------------------------------------------------------
Valid_flist label word
                ctable  <,'FCHAR  ',fclend-fclbegin>
fclbegin        label   word
                db      1,0,255                         ; include all
                db      0,0,20h                         ; exclude 0 - 20h
                db      2,14,'."/\[]:|<>+=;,'           ; exclude 14 special chars
fclend          label   word



; ----------------------------------------------------------------------------
;
;       World Trade DBCS Tables
;
;           Currently all countries have same (4/14/86)
;
;
; ----------------------------------------------------------------------------
;                                  
Not_dbcs label word
                ctable  <,'DBCS   ',dbcsterm-dbcsbegin>         ;AN000;
dbcsbegin       label   word                                    ;AN000;
dbcsterm        db      0,0                                     ;AN000;
dbcsend         label   word                                    ;AN000;



include DBCS93x.inc



include copyrigh.inc

; ---------------------------------------------------------------
;
;               END OF CDI SEGMENT
;
; ---------------------------------------------------------------


dseg    ends
        end

