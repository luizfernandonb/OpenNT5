<% @LANGUAGE="VBScript" @EnableSessionState="False"  %>
<% 'Option Explicit

Function GetString(ByVal sStringName)
	If InStr(sStringName, "L_") <> 1 Then sStringName = "L_" & sStringName & "_Text"

	'' Texts
	Const L_StartRemoteAssistance_Text  		= "T�vseg�ts�g ind�t�sa"
	Const L_ProductName_Text			= "T�vseg�ts�g"
	Const L_Title1Paragraph1_Text		= "Seg�ts�gny�jt�s T�vseg�ts�g haszn�lat�val"
	Const L_Paragraph1_Text				= "Gyakran �gy lehet a legk�nnyebben seg�teni valakinek egy probl�ma megold�s�ban, hogy bemutatjuk a megold�st. A T�vseg�ts�g egy olyan biztons�gos kapcsolat, amely seg�ts�g�vel v�gigvezetheti bar�tj�t egy probl�ma megold�s�nak l�p�sein."
	Const L_Paragraph2_Text				= "Ha most haszn�lja ezt els� alkalommal, olvassa el az al�bbi megjegyz�seket."
	Const L_StartRAMessage_Text			= "<font color=""#000000"" size=""2"">A bar�t sz�m�t�g�p�hez val� kapcsol�d�shoz kattintson a </font><b><font color=""#000000"" size=""2""><b>T�vseg�ts�g ind�t�sa</b></font> lehet�s�gre.</b>"
	Const L_StartRAButton_Text			= "T�vseg�ts�g ind�t�sa"
	Const L_JScriptNotAvail1_Text		= "Az Internet Explorer jelenlegi biztons�gi be�ll�t�sai t�l magasak a T�vseg�ts�g haszn�lat�hoz. A T�vseg�ts�g haszn�lat�hoz m�dos�tsa a be�ll�t�sokat, vagy megb�zhat� helyk�nt �ll�tsa be ezt a helyet."
	Const L_IEHelp_Text					= "A biztons�gi be�ll�t�sok m�dos�t�s�val kapcsolatos inform�ci�kat az Internet Explorer s�g�j�ban tal�lja."
	Const L_TicketError1_Text			= "A T�vseg�ts�gre val� felk�r�s hi�nyzik, vagy �rv�nytelen. A T�vseg�ts�g haszn�lat�hoz �rv�nyes felk�r�sre van sz�ks�ge."
	Const L_InstallIE_Text				= "T�vseg�ts�gre val� felk�r�s elfogad�s�hoz Internet Explorer 5.5-�t kell telep�tenie."
	Const L_TicketErrorMsg_Text			= "Tov�bbi inform�ci��rt a Windows XP-ben kattintson a <B>Startra</B>, a <B>S�g� �s t�mogat�s </B> lehet�s�gre, majd �rja be a <B>Keres�s</B> mez�be azt, hogy <B>T�vseg�ts�g</B>."
	
	Const L_NotesTitle_Text				= "Megjegyz�sek"
	Const L_NotesLine1_Text				= "Csak megb�zhat� emberekt�l fogadjon el felk�r�st."
	
	Const L_NotesLine2_Text				= "A T�vseg�ts�g haszn�lat�nak teljes id�tartama alatt mindk�t f�lnek (�nnek �s annak, akinek seg�t) csatlakoznia kell az Internetre. Ha az a szem�ly, aki k�ldte ezt a felk�r�st, �ppen tudja fogadni a sz�m�t�g�p�hez val� csatlakoz�si k�relmeket, meg tudja tekinteni az � k�perny�j�t, �s val�s id�ben cseveghet vele."
	
	Const L_NotesLine6_Text				= "Ez egy biztons�gos, egyir�ny� kapcsolat. Az a szem�ly, akinek a sz�m�t�g�pe az �n sz�m�t�g�p�hez csatlakozik, soha nem fogja tudni el�rni az �n sz�m�t�g�p�t. Ha helyi h�l�zaton dolgozik, t�zfal haszn�lata megakad�lyozhatja a T�vseg�ts�g haszn�lat�t. Ebben az esetben tov�bbi inform�ci�k�rt l�pjen kapcsolatba a h�l�zati rendszergazd�val."
	
	Const L_LearnXP_Text				= "Tov�bbi inform�ci��rt a Windows XP-ben kattintson a <B>Startra</B>, a <B>S�g� �s t�mogat�s </B> lehet�s�gre, majd �rja be a <B>Keres�s</B> mez�be azt, hogy <B>T�vseg�ts�g</B>."
	
	Const L_ContactUsMsg_Text			= "Kapcsolatfelv�tel"
	

	Const L_XPNewsletterMsg_Text		= "Ingyenes h�rlev�l"
	Const L_EmailPage_Text				= "Az oldal elk�ld�se e-mailk�nt"
	
	Const L_CopyRightMsg_Text			= "(C) 2001 Microsoft Corporation. Minden jog fenntartva. Haszn�lati felt�telek."
	
	Const L_PrivacyMsg_Text				= "Adatv�delmi nyilatkozat"

	Const L_AccMsg_Text					= "Kiseg�t� lehet�s�gek"

	Const L_NotIEError1_Text			= "T�vseg�ts�gre val� felk�r�s elfogad�s�hoz Internet Explorer 5.5-�t vagy frissebbet kell telep�tenie."

	Const L_NotXPError1_Text			= "A Microsoft T�vseg�ts�g a Windows&nbsp;XP funkci�ja. A T�vseg�ts�g haszn�lat�hoz el�bb telep�tenie kell a Windows&nbsp;XP-t."

	Const L_IELinkMsg_Text				= "Az Internet Explorer leg�jabb verzi�j�nak let�lt�se"
	Const L_XPLinkMsg_Text				= "Tov�bbi inform�ci�t a Windows XP-r�l"
	Const L_XPLinkMsg2_Text				= "A Microsoft Windows webhelyen tal�lhat"
	Const L_XPLinkMsg3_Text				= "."
	
	Const L_IntroMsg1_Text              = "A t�vseg�ts�g haszn�lat�hoz sz�ks�ges �sszetev� let�lt�se. Ha 28,8 kbps sebess�g� modemmel rendelkezik, a let�lt�s kb. 1 percig fog tartani."
    Const L_IntroMsg2_Text              = "A t�vseg�ts�g futtat�s�hoz enged�lyeznie kell az Active Scripting haszn�lat�t. Ha a becs�lt let�lt�si id� eltelte ut�n a webhely nem er�s�ti meg a let�lt�s befejez�d�s�t, ellen�rizze, hogy enged�lyezve van-e a parancsf�jlkezel�s."
    Const L_IntroMsg3_Text              = "Az Active Scripting enged�lyez�se"
    Const L_IntroMsg4_Text              = "Az Internet Explorer <B>Eszk�z�k</B> men�j�ben kattintson az <B>Internetbe�ll�t�sok</B> parancsra."
    Const L_IntroMsg5_Text              = "Kattintson a <B>Biztons�g</B> lapra."
    Const L_IntroMsg6_Text              = "Kattintson az <STRONG>Internet</STRONG> ikonra, majd kattintson az <STRONG>Egy�ni szint</STRONG> gombra."
    Const L_IntroMsg7_Text              = "A Parancsf�jlkezel�s r�szben az <STRONG>Active Scripting</STRONG> alatt kattintson az <STRONG>Enged�lyez�s</STRONG> r�di�gombra."
    
	' **************************************
	' Links - No need for localization
	' **************************************
	Const L_AccLink_Text				= "http://www.microsoft.com/enable/"		
	Const L_XPLink_Text					= "http://www.microsoft.com/windowsxp/default.asp"
	Const L_PrivacyLink_Text			= "http://www.microsoft.com/info/privacy.htm"
	Const L_ContactUsLink_Text			= "http://register.microsoft.com/contactus30/contactus.asp?domain=windows&amp;lcid=1033&amp;cu=http://register.microsoft.com/contactus30/contactus.asp?domain=windows"
	Const L_MailTo1_Text				= "mailto:?subject=Microsoft-hivatkoz�s&body=Ez a hivatkoz�s a Microsoft Windows XP webhely�r�l sz�rmazik"
	Const L_CopyRightLink_Text			= "http://www.microsoft.com/info/cpyright.htm"
	Const L_XPNewsletterLink_Text		= "http://www.microsoft.com/windowsxp/newsletters.asp"
	Const L_LinkToIE_Text				= "http://www.microsoft.com/windows/ie/default.htm"
	'*************************************	
	
	GetString = Eval(sStringName)
End Function

%>