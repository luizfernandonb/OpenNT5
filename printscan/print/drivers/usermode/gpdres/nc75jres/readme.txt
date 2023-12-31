----------------------------------------------------------------------------
           ■  PCPR750シリーズプリンタドライバの変更点    ■
----------------------------------------------------------------------------

PCPR750シリーズは以下の2本のＧＰＤファイルと１本のＯＥＭ ＤＬＬ(nc75jres.dll)
から成ります。


ドライバ名称                 ＧＰＤファイル名       ＯＥＭ ＤＬＬ名
￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣￣
NEC PC-PR750/150R            nc7515rj.gpd             nc75jres.dll
NEC PC-PR750/360             nc7536j.gpd              nc75jres.dll


＜＜改版履歴＞＞

＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊

リリース日
￣￣￣￣￣
９７．８．２２  −  新規リリース

変更点
￣￣￣
    ＮＴ４．０対応７５０ドライバのＧＰＣファイルを変換してＧＰＤファイル作成
    し、新たにＵＤ５でサポートされた新機能を追加しました。
    今回は修正点が多いため、個々のモジュールごとの修正点は明記いたしません。
    ＮＴ４．０７５０ドライバとの違いは以下の通りです。

    １）NC75JRES.RCで、GPDでの給紙方法の追加／変更、Featureの追加に対応。
    ２）組み合わせの制限（*InvalidInstallableCombination）対応
    ３）給紙方法名を、マニュアル記載のものに変更、追加
    ４）Featureの追加（漢字ｺｰﾄﾞ表の選択、印刷品質）
    ５）Installable Option対応
    ６）用紙のｾｯﾄ位置（*Feature: PaperSetting）によるレフトマージン値の
        切り分けを対応
    ７）その用紙で使用する給紙方法のみ印刷範囲（*PrintableArea）、
        ユーザ定義用紙の最小値（*MinSize）を変更
    ８）CmdStartPage、CmdEndpageで給紙方法毎に出力コマンドを設定するよう変更
    ９）CmdStartJobを追加
    10）MaxSpacingの値をMasterUnit値に変更



制限事項
￣￣￣￣
    なし


＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊

９７．１０．２４  −  修正版リリース（全機種）


修正版リリース変更点
￣￣￣￣￣￣￣￣￣￣
    弊社での評価で発見したミニドライバ障害修正と新しいツールの使用、
    リソースの全角カタカナへの変更対応等を実施。


全機種共通変更点
￣￣￣￣￣￣￣￣
【ＯＥＭ．ＤＬＬ】
    １）ＰＦＭファイルの半角カタカナを全角カタカナに修正
         GOTHOUT.PFM
         VGOTHOUT.PFM
         MOUOUT.PFM
         VMOUOUT.PFM
         MINOUT.PFM
         VMINOUT.PFM
    ２）リソース（ＲＣ）の半角カタカナを全角カタカナに修正
    ３）ifm2ufm.exeの最新ツールを使用
    ４）漢字コード表のリソース修正
          年度版     →     年版

【ＧＰＤファイル】
    １）*ReselectFont: LIST(AFTER_GRXDATA, AFTER_XMOVE)の追加
    ２）CmdXMoveAbsoluteの出力コマンドの修正
                "<1B>H<1B>F"  →  "<1B>H<1B>e11<1B>F"
    ３）GPDに印字速度(LPS値)を追加

＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊

リリース日
￣￣￣￣￣
９７．１２．１９

◆変更点
￣￣￣￣
【ＯＥＭ．ＤＬＬ】

・nc75jres.rc
    １．Print Qualityの修正に伴ない、以下のように修正
        （印刷方向は、サポートしていないことが判明したため）
        �@「標準（両方向印字ﾓｰﾄﾞ）」と「ドラフト（両方向印字ﾓｰﾄﾞ）」を削除
        �A「標準（片方向印字ﾓｰﾄﾞ）」
              ↓
          「標準」

          「ドラフト（片方向印字ﾓｰﾄﾞ）」
              ↓
          「ドラフト」

・nc75jres.inf
    １．PnPIDを追記

・readme.txt
    １．このファイル。改版履歴を追加
    
・\pfm\*.ufm
    １．pfm2ufm.exeに-fを付けて再変換を実施

・\pfm\*.pfm
・\etc\*.*
    １．新規追加。UNITOOLでフォントファイルが修正できるように追加
    
【ＧＰＤファイル】

・nc75???j.gpd
    １．ユーザ定義縦サポートサイズの変更
        （縦２１．３インチの用紙を作成し印字した際、改ページが発生するので、
          その回避策として）
        *MaxSize: PAIR(7920, 17891)
                              ↓
        *MaxSize: PAIR(7920, 17909)

    ２．ｘ方向移動の前にいったんヘッドをHOME位置に戻すように
        <CR>を追加
        *Command: CmdXMoveAbsolute { *Cmd : "<1B>H<1B>e11<1B>F" %4d
        [0,1280]{max_repeat((DestX / 3) )} }
                              ↓
        *Command: CmdXMoveAbsolute { *Cmd : "<0D><1B>H<1B>e11<1B>F" %4d
        [0,1280]{max_repeat((DestX / 3) )} }

    ３．*Feature: PrintQualityを修正
        印刷方向は、サポートしていないことが判明したため、
        選択肢を「標準」と「ドラフト」のみにし、印刷方向コマンドが
        出力されないように修正



制限事項
￣￣￣￣
　　なし
＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊

リリース日
￣￣￣￣￣
９８．０３．１３

◆変更点
￣￣￣￣
【ＧＰＤＲＥＳ】

・readme.txt
    １．このファイル。改版履歴を追加
    
・NC75JRES.INF
    １．ヘルプファイル名を変更

・\pfm\*.ufm
    １．新しいpfm2ufm.exeで再変換を実施
        ９８．０１．１６リリース時、変換に使用したバッチファイルの記述が
        誤っていたため

・nc75jres.cmd
    １．記述ミスを修正

        pfm2ufm -f -c UniqName ..PFM\Roman5.PFM 932 ..PFM\Roman5.ufm
                                      ↓
        pfm2ufm -f -c UniqName ..\PFM\Roman5.PFM 1252 ..\PFM\Roman5.ufm


【ＧＰＤファイル】

・nc75???j.gpd（全機種共通）

　　１．*GPDFileName、*GPDFileVersion（Verは1.000）を追加


制限事項
￣￣￣￣
　　なし


＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊

リリース日
￣￣￣￣￣
９８．０４．１４

◆変更点
￣￣￣￣
【ＧＰＤＲＥＳ】

・readme.txt
    １．このファイル。改版履歴を追加
    
・\pfm\*.pfm，*.ufm
    １．PFMファイルのFont Selectに出力コマンドを追加

        ・\x1C06F1-000\x1Be11を追加
          ROMAN10.PFM，ROMAN12.PFM，ROMAN17.PFM，ROMANPS.PFM

        ・\x1C06F1-000を追加
          ROMAN5.PFM，ROMAN6.PFM，ROMAN8.PFM

        ・\x1Be11を追加
          CO10.PFM，CO12.PFM，CO17.PFM，OCRB10.PFM
          SANS10.PFM，SANS12.PFM，SANS17.PFM，SANSPS.PFM

    ２．念のため全てのPFMファイルをUFMファイルにPFM2UFM.EXEツール(98/02/27)を
        使用して変換


制限事項
￣￣￣￣
　　なし

＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊

リリース日
￣￣￣￣￣
９８．０７．０７

◆変更点
￣￣￣￣
【ＧＰＤＲＥＳ】

・readme.txt
    １．このファイル。改版履歴を追加
    
・NC75JRES.INF
    １．ヘルプがインストールされるようにヘルプファイル名を追加

【ＨＥＬＰ】

以下のファイル（ＯＥＭヘルプ関連）を新規に追加
（Hcw  Version 4.01.0950 使用）

・NC75JRES.hpj
・NC75JRES.rtf
・NC75JRES.HLP
・NC75JRES.h

【ＧＰＤファイル】

・nc75???j.gpd（全機種共通）

    １．*HelpFile: "NCDLJRES.HLP"の追加と、CustomFeatureに*HelpIndex: 
        を追加

　　２．MSKK殿より頂いたソースよりCmdClearAllFontAttribs関連を吸収

        *Command: CmdBoldOn { *Cmd : "<1C>c,,1." }
        *Command: CmdBoldOff { *Cmd : "<1C>c,,0." }
        *Command: CmdItalicOn { *Cmd : "<1C>c,,2." }
        *Command: CmdItalicOff { *Cmd : "<1C>c,,0." }
                              ↓
        *Command: CmdBoldOn { *Cmd : "<1C>c,,1." }
        *Command: CmdItalicOn { *Cmd : "<1C>c,,2." }
        *Command: CmdClearAllFontAttribs { *Cmd : "<1C>c,,0." }



制限事項
￣￣￣￣
　　なし

＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊
2000.12.21

◆変更点
￣￣￣￣
【ＧＰＤＲＥＳ】
・readme.txt
  １．このファイル。改版履歴を追加
    

【ＧＰＤファイル】
・nc7515rj.gpd、nc7536j.gpd


　１．MS 依頼の「CUSTOMSIZE 修正・確認依頼」に対応して以下を追加。

    *Option: CUSTOMSIZE

        *switch: InputBin
        {
            *case: TracterFeeder
            {
                *CustCursorOriginX: %d{0}
                *CustCursorOriginY: %d{0}
                *CustPrintableOriginX: %d{0}
                *CustPrintableOriginY: %d{0}
                *CustPrintableSizeX: %d{PhysPaperWidth - (0+0)}
                *CustPrintableSizeY: %d{PhysPaperLength - (0+0)}
            }
        }


制限事項
￣￣￣￣
　　なし

＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊
2001.1.15

◆変更点
￣￣￣￣
【ＧＰＤＲＥＳ】
・readme.txt
  １．このファイル。改版履歴を追加
    

【ＧＰＤファイル】
・nc7515rj.gpd、nc7536j.gpd

　１．印刷終了後、用紙長クリアコマンドがドライバから送られてくる為、
　　　帳票用紙印刷後、カットスイッチを押下すると、用紙長がデフォルトの
　　　11インチになる障害対応のため、EndJobを以下に修正。

　    *Cmd: "<1C>05v0000<1B>c8"
　　　　　　　↓
　    *Cmd: "<1B>c8"

制限事項
￣￣￣￣
　　なし

＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊

2001.2.9

◆変更点
￣￣￣￣
【ＧＰＤＲＥＳ】
・readme.txt
  １．このファイル。改版履歴を追加
    

【ＧＰＤファイル】
・nc7515rj.gpd、nc7536j.gpd


　１．MS 依頼の「CUSTOMSIZE 修正・確認依頼」に対応して
　　　ユーザ定義用紙の各給紙方法ごとに以下を修正。

            *case: TracterFeeder
            {
                *CustCursorOriginX: %d{0}
                *CustCursorOriginY: %d{0}
                *CustPrintableOriginX: %d{0}
                *CustPrintableOriginY: %d{0}
                *CustPrintableSizeX: %d{min(6528, PhysPaperWidth)}
                *CustPrintableSizeY: %d{PhysPaperLength - (0+0)}
            }

制限事項
￣￣￣￣
　　なし

＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊

2001.2.26

◆変更点
￣￣￣￣
【ＧＰＤＲＥＳ】
・readme.txt
  １．このファイル。改版履歴を追加

【ＨＬＰファイル】
・nc75jres.hlp

　１．ポップアップヘルプの体裁を NM 系ヘルプに合わせるよう修正。

制限事項
￣￣￣￣
　　なし

＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊

2001.3.3

◆変更点
￣￣￣￣
【ＧＰＤＲＥＳ】
・readme.txt
  １．このファイル。改版履歴を追加

【ＵＦＭファイル】
・MINCHOB.ufm、MINOUT.ufm、VMINOUT.ufm、GOTHOUT.ufm、MOUOUT.ufm、
　VMINCHOB.ufm、VGOTHOUT.ufm、VMOUOUT.ufm、Roman5.ufm、Roman6.ufm、
　Roman8.ufm、Roman10.ufm、Roman12.ufm、Roman17.ufm、RomanPS.ufm、Co5.ufm、
　Co6.ufm、Co8.ufm、Co10.ufm、Co12.ufm、Co17.ufm、Sans5.ufm、Sans6.ufm、
　Sans8.ufm、Sans10.ufm、Sans12.ufm、Sans17.ufm、Sansps.ufm、Ocrb10.ufm

　１．dpFontSim で Bold、Italic、Bold Italic の情報が抜け落ちていたのを修正。

制限事項
￣￣￣￣
　　なし

＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊

2001.3.15

◆変更点
￣￣￣￣
【ＧＰＤＲＥＳ】
・readme.txt
  １．このファイル。改版履歴を追加

【ＧＰＤファイル】
・nc7515rj.gpd、nc7536j.gpd
　１．低解像度時にTrueTypeフォントでHalftoningが有効となる新Feature、
　　　TextHalftoneThreshold に対応。

　２．MaxLineSpacing 値を 495 に修正。
　　　Y 方向の解像度は 168dpi であるため、最大値 99 を MasterUnit 化（×5）して 495。


制限事項
￣￣￣￣
　　なし

＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊

リリース日
￣￣￣￣￣
2001.4.9

◆変更点
￣￣￣￣
【ＧＰＤＲＥＳ】
・readme.txt
  １．このファイル。改版履歴を追加
    

【ＧＰＤファイル】

・*.GPD

　１．TextHalftoneThresholdのUI表示文字列を変更。
            *Name: "TextHalftoneThreshold"
            ↓
            *rcNameID: =TEXTHALFTONE_DISPLAY

　２．TextHalftoneThresholdにカスタムヘルプを表示させるため、HelpIndexを追加。
            *HelpIndex: 7580

【ＨＥＬＰ】

・NC75JRES.HPJ、NC75JRES.RTF、NC75JRES.HLP、NC75JRES.H

　１．TextHalftoneThreshold 対応カスタムヘルプの記述を追加。


制限事項
￣￣￣￣
　　なし

＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊
