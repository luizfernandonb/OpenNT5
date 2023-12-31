<% @LANGUAGE="VBScript" @EnableSessionState="False"  %>
<% 'Option Explicit

Function GetString(ByVal sStringName)
	If InStr(sStringName, "L_") <> 1 Then sStringName = "L_" & sStringName & "_Text"

	'' Texts
	Const L_StartRemoteAssistance_Text  		= "Aloita et�tuki"
	Const L_ProductName_Text			= "Et�tuki"
	Const L_Title1Paragraph1_Text		= "Et�tuen tarjoaminen"
	Const L_Paragraph1_Text				= "Usein paras tapa auttaa ongelman ratkaisussa on n�ytt�� miten se tehd��n. Et�tuki on suojattu yhteys jonka avulla voidaan avustaa tietokoneongelmissa."
	Const L_Paragraph2_Text				= "Jos t�m� on ensimm�inen k�ytt�kertasi, lue alla olevat huomautukset."
	Const L_StartRAMessage_Text			= "<font color=""#000000"" size=""2"">Yhdist� avustettavan koneeseen valitsemalla</font><b><font color=""#000000"" size=""2""><b> Aloita et�tuki.</b></font></b>"
	Const L_StartRAButton_Text			= "Aloita et�tuki"
	Const L_JScriptNotAvail1_Text		= "Nykyiset Internet Explorerin suojausasetukset ovat liian korkealla tasolla. Suojaustasoa pit�� alentaa ennen et�tuen k�ytt�mist�, tai t�m� kohde pit�� lis�t� luetettujen sivustojen luetteloon."
	Const L_IEHelp_Text					= "Lis�tietoja suojausasetusten muuttamisesta on Internet Explorerin ohjeessa."
	Const L_TicketError1_Text			= "Et�tukikutsua ei ole tai se ei kelpaa. Et�tuen k�ytt�miseen tarvitaan voimassaoleva kutsu."
	Const L_InstallIE_Text				= "Et�tukikutsun hyv�ksymiseen tarvitaan Internet Explorer 5.5 tai uudempi."
	Const L_TicketErrorMsg_Text			= "Saat lis�tietoja et�tuesta Windows XP:ss� valitsemalla <b>K�ynnist�</b> -> <b>Ohje ja tuki</b> ja kirjoittamalla <b>Etsi</b>-kentt��n <b>Et�tuki</b>."
	
	Const L_NotesTitle_Text				= "Huomautukset"
	Const L_NotesLine1_Text				= "Hyv�ksy et�tukikutsuja vain luotettavalta taholta."
	
	Const L_NotesLine2_Text				= "Sek� sinun ett� avustettavan pit�� olla Internet-yhteydess� et�tuki-istunnon aikana. Jos kutsun l�hett�nyt henkil� on tavoitettavissa ja hyv�ksyy yhteydenottopyynt�si, n�et h�nen tietokoneensa n�yt�n ja voitte keskustella reaaliaikaisesti."
	
	Const L_NotesLine6_Text				= "T�m� on suojattu, yksisuuntainen yhteys. Avustettava ei voi miss��n ottaa yhteytt� avustajan tietokoneeseen. Paikallisverkon palomuuri saattaa est�� et�tuen k�yt�n. T�llaisessa tapauksessa verkon j�rjestelm�nvalvoja voi antaa lis�tietoja."
	
	Const L_LearnXP_Text				= "Saat lis�tietoja et�tuesta Windows XP:ss� valitsemalla <b>K�ynnist�</b> -> <b>Ohje ja tuki</b> ja kirjoittamalla <b>Etsi</b>-kentt��n <b>Et�tuki</b>."
	
	Const L_ContactUsMsg_Text			= "Yhteystiedot"
	

	Const L_XPNewsletterMsg_Text		= "Ilmainen tiedote"
	Const L_EmailPage_Text				= "L�het� sivu s�hk�postina"
	
	Const L_CopyRightMsg_Text			= "(C) 2001 Microsoft Corporation. Kaikki oikeudet pid�tet��n. K�ytt�ehdot."
	
	Const L_PrivacyMsg_Text				= "Tietosuojalausunto"

	Const L_AccMsg_Text					= "Helppok�ytt�toiminnot"

	Const L_NotIEError1_Text			= "Et�tukikutsun hyv�ksymiseen tarvitaan Internet Explorer 5.5 tai uudempi."

	Const L_NotXPError1_Text			= "Et�tuki on Windows&nbsp;XP:n ominaisuus. Et�tuen k�ytt�miseen tarvitaan Windows&nbsp;XP."

	Const L_IELinkMsg_Text				= "Lataa Internet Explorerin uusin versio"
	Const L_XPLinkMsg_Text				= "Lis�tietoja Windows XP:st� saat "
	Const L_XPLinkMsg2_Text				= "Microsoft Windows -Web-sivustosta"
	Const L_XPLinkMsg3_Text				= "."
	
	Const L_IntroMsg1_Text              = "Ladataan et�tuen k�ytt�miseen tarvittavaa osaa. 28,8 kbps:n modeemilla lataaminen kest�� noin yhden minuutin."
    Const L_IntroMsg2_Text              = "Jotta et�tukitoimintoa voitaisiin k�ytt��, tulee aktiiviset komentosarjat sallia. Mik�li lataamisen j�lkeen t�m� sivu ei vahvista lataamisen p��ttymist�, tarkista ett� aktiiviset komentosarjat on sallittu."
    Const L_IntroMsg3_Text              = "Aktiivisten komentosarjojen salliminen"
    Const L_IntroMsg4_Text              = "Internet Explorerin <B>Ty�kalut</B>-valikossa valitse <B>Internet-asetukset</B>."
    Const L_IntroMsg5_Text              = "Valitse <B>Suojaus</B>-v�lilehti."
    Const L_IntroMsg6_Text              = "Napsauta <STRONG>Internet</STRONG>-kuvaketta valitse sitten <STRONG>Mukautettu taso</STRONG>."
    Const L_IntroMsg7_Text              = "Komentosarjat-osassa kohdassa <STRONG>Aktiiviset komentosarjat</STRONG> valitse <STRONG>Salli</STRONG>."
    
	' **************************************
	' Links - No need for localization
	' **************************************
	Const L_AccLink_Text				= "http://www.microsoft.com/enable/"		
	Const L_XPLink_Text					= "http://www.microsoft.com/windowsxp/default.asp"
	Const L_PrivacyLink_Text			= "http://www.microsoft.com/info/privacy.htm"
	Const L_ContactUsLink_Text			= "http://register.microsoft.com/contactus30/contactus.asp?domain=windows&amp;lcid=1033&amp;cu=http://register.microsoft.com/contactus30/contactus.asp?domain=windows"
	Const L_MailTo1_Text				= "mailto:?subject=Microsoftin linkki&body=T�m� on linkki Microsoft Windows XP -Web-sivustosta"
	Const L_CopyRightLink_Text			= "http://www.microsoft.com/info/cpyright.htm"
	Const L_XPNewsletterLink_Text		= "http://www.microsoft.com/windowsxp/newsletters.asp"
	Const L_LinkToIE_Text				= "http://www.microsoft.com/windows/ie/default.htm"
	'*************************************	
	
	GetString = Eval(sStringName)
End Function

%>