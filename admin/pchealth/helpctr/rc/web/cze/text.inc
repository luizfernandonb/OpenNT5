<% @LANGUAGE="VBScript" @EnableSessionState="False"  %>
<% 'Option Explicit

Function GetString(ByVal sStringName)
	If InStr(sStringName, "L_") <> 1 Then sStringName = "L_" & sStringName & "_Text"

	'' Texts
	Const L_StartRemoteAssistance_Text  		= "Spustit vzd�lenou pomoc"
	Const L_ProductName_Text			= "Vzd�len� pomoc"
	Const L_Title1Paragraph1_Text		= "Pomoc p�i pou��v�n� vzd�len� pomoci"
	Const L_Paragraph1_Text				= "Nejsnaz��m zp�sobem vy�e�en� probl�mu je v�t�inou p�edveden� �e�en�. Vzd�len� pomoc je zabezpe�en� p�ipojen�, kter� umo��uje proj�t s p��telem �e�en� pot�e s po��ta�em."
	Const L_Paragraph2_Text				= "Pokud ji pou��v�te poprv�, p�e�t�te si pozn�mky n�e."
	Const L_StartRAMessage_Text			= "<font color=""#000000"" size=""2"">K po��ta�i p��tele se p�ipoj�te klepnut�m na odkaz</font><b><font color=""#000000"" size=""2""><b> Spustit vzd�lenou pomoc.</b></font></b>"
	Const L_StartRAButton_Text			= "Spustit vzd�lenou pomoc"
	Const L_JScriptNotAvail1_Text		= "Aktu�ln� nastaven� zabezpe�en� aplikace Internet Explorer je nastaveno na p��li� vysokou �rove�, tak�e vzd�lenou pomoc nelze pou��t. Zm��te nastaven� zabezpe�en� nebo p�idejte tento po��ta� do seznamu d�v�ryhodn�ch server�."
	Const L_IEHelp_Text					= "Informace o zm�n� nastaven� zabezpe�en� najdete v n�pov�d� aplikace Internet Explorer."
	Const L_TicketError1_Text			= "Pozv�n� ke vzd�len� pomoci sch�z� nebo nen� platn�. Chcete-li pou��t vzd�lenou pomoc, mus�te m�t platn� pozv�n�."
	Const L_InstallIE_Text				= "K p�ijet� vzd�len� pomoci je vy�adov�na aplikace Internet Explorer 5.5 nebo vy���."
	Const L_TicketErrorMsg_Text			= "Dal�� informace o Vzd�len� pomoci z�sk�te klepnut�m na tla��tko <b>Start</b> syst�mu Windows XP, vybr�n�m p��kazu <b>N�pov�da a odborn� pomoc</b> a zad�n�m do pole <b>Vyhled�v�n�</b> term�n <b>Vzd�len� pomoc</b>."
	
	Const L_NotesTitle_Text				= "Pozn�mky"
	Const L_NotesLine1_Text				= "Pozv�n� p�ij�mejte pouze od lid�, kter�m d�v��ujete."
	
	Const L_NotesLine2_Text				= "B�hem pou�it� vzd�len� pomoci mus�te b�t vy i odes�latel pozv�n� p�ipojeni k Internetu. Pokud je osoba kter� toto pozv�n� odeslala k dispozici a p�ijme v� po�adavek na p�ipojen� ke sv�mu po��ta�i, budete moci zobrazit obrazovku jej�ho po��ta�e a v�st s n� online konverzaci."
	
	Const L_NotesLine6_Text				= "Toto je zabezpe�en� jednosm�rn� p�ipojen�. V ��dnou chv�li nebude m�t odes�latel pozv�n� p��stup k va�emu po��ta�i. Pokud jste p�ipojeni k m�st� s�ti LAN, mohou v�m v pou��v�n� vzd�len� pomoci br�nit br�ny firewall. V takov�m p��pad� se obra�te na spr�vce s�t�."
	
	Const L_LearnXP_Text				= "Dal�� informace o Vzd�len� pomoci z�sk�te klepnut�m na tla��tko <b>Start</b> syst�mu Windows XP, vybr�n�m p��kazu <b>N�pov�da a odborn� pomoc</b> a zad�n�m do pole <b>Vyhled�v�n�</b> term�n <b>Vzd�len� pomoc</b>."
	
	Const L_ContactUsMsg_Text			= "Kontaktujte n�s"
	

	Const L_XPNewsletterMsg_Text		= "Buletiny zdarma"
	Const L_EmailPage_Text				= "Odeslat tuto str�nku e-mailem"
	
	Const L_CopyRightMsg_Text			= "(C) 2001 Microsoft Corporation V�echna pr�va vyhrazena. Podm�nky pou�it�"
	
	Const L_PrivacyMsg_Text				= "Z�sady ochrany osobn�ch �daj�"

	Const L_AccMsg_Text					= "Usnadn�n�"

	Const L_NotIEError1_Text			= "K p�ijet� vzd�len� pomoci je vy�adov�na aplikace Internet Explorer 5.5 nebo vy���."

	Const L_NotXPError1_Text			= "Slu�ba vzd�len� pomoci je vlastnost opera�n�ho syst�mu Windows&nbsp;XP. Chcete-li tuto slu�bu vyu��t, mus�te si nainstalovat opera�n� syst�m Windows&nbsp;XP."

	Const L_IELinkMsg_Text				= "St�hnout nejnov�j�� verzi aplikace Internet Explorer"
	Const L_XPLinkMsg_Text				= "V�ce informac� o syst�mu Windows XP z�sk�te klepnut�m na "
	Const L_XPLinkMsg2_Text				= "webov�m serveru syst�mu Microsoft Windows."
	Const L_XPLinkMsg3_Text				= "."
	
	Const L_IntroMsg1_Text              = "Stahov�n� sou��sti nutn� pro pou�it� vzd�len� pomoci. Modemem s p�enosovou rychlost� 28,8 kbps bude stahov�n� trvat asi jednu minutu."
    Const L_IntroMsg2_Text              = "Ke spu�t�n� Vzd�len� pomoci je t�eba povolit funkci Aktivn� skriptov�n�. Pokud po ub�hnut� odhadovan� doby stahov�n� nebude zobrazeno potvrzen� o dokon�en� stahov�n�, zkontrolujte, zda je skriptov�n� povoleno."
    Const L_IntroMsg3_Text              = "Povolen� Aktivn�ho skriptov�n�"
    Const L_IntroMsg4_Text              = "V nab�dce <B>N�stroje</B> aplikace Internet Explorer vyberte polo�ku <B>Mo�nosti Internetu</B>"
    Const L_IntroMsg5_Text              = "Klepn�te na z�lo�ku <B>Zabezpe�en�</B>�"
    Const L_IntroMsg6_Text              = "Klepn�te na ikonu <STRONG>Internet</STRONG> a potom na tla��tko <STRONG>Vlastn� �rove�</STRONG>"
    Const L_IntroMsg7_Text              = "V odd�le Skriptov�n� nastavte polo�ku <STRONG>Aktivn� skriptov�n�</STRONG> na <STRONG>Povolit</STRONG>"
    
	' **************************************
	' Links - No need for localization
	' **************************************
	Const L_AccLink_Text				= "http://www.microsoft.com/enable/"		
	Const L_XPLink_Text					= "http://www.microsoft.com/windowsxp/default.asp"
	Const L_PrivacyLink_Text			= "http://www.microsoft.com/info/privacy.htm"
	Const L_ContactUsLink_Text			= "http://register.microsoft.com/contactus30/contactus.asp?domain=windows&amp;lcid=1033&amp;cu=http://register.microsoft.com/contactus30/contactus.asp?domain=windows"
	Const L_MailTo1_Text				= "mailto:?subject=Odkaz od spole�nosti Microsoft&body=Tento odkaz poch�z� z webov�ho serveru opera�n�ho syst�mu Microsoft Windows XP"
	Const L_CopyRightLink_Text			= "http://www.microsoft.com/info/cpyright.htm"
	Const L_XPNewsletterLink_Text		= "http://www.microsoft.com/windowsxp/newsletters.asp"
	Const L_LinkToIE_Text				= "http://www.microsoft.com/windows/ie/default.htm"
	'*************************************	
	
	GetString = Eval(sStringName)
End Function

%>