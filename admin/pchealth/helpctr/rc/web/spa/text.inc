<% @LANGUAGE="VBScript" @EnableSessionState="False"  %>
<% 'Option Explicit

Function GetString(ByVal sStringName)
	If InStr(sStringName, "L_") <> 1 Then sStringName = "L_" & sStringName & "_Text"

	'' Texts
	Const L_StartRemoteAssistance_Text  		= "Iniciar Asistencia remota"
	Const L_ProductName_Text			= "Asistencia remota"
	Const L_Title1Paragraph1_Text		= "Proporcionar ayuda usando Asistencia remota"
	Const L_Paragraph1_Text				= "A veces la mejor manera de ayudar a alguien a resolver un          problema es demostrando una soluci�n. Asistencia remota es una conexi�n segura que se puede usar para ayudar a una persona a buscar una soluci�n para el problema de su equipo."
	Const L_Paragraph2_Text				= "Si �sta es su primera vez, lea las siguientes notas. "
	Const L_StartRAMessage_Text			= "<font color=""#000000"" size=""2"">Para conectarse al equipo de la otra persona, haga clic en</font><b><font color=""#000000"" size=""2""><b> Iniciar Asistencia remota.</b></font></b>"
	Const L_StartRAButton_Text			= "Iniciar Asistencia remota"
	Const L_JScriptNotAvail1_Text		= "Su configuraci�n de seguridad de Internet Explorer est� establecida a un nivel demasiado alto para permitirle usar Asistencia remota. Para usar Asistencia remota, cambie la configuraci�n o agregue este sitio como un sitio de confianza."
	Const L_IEHelp_Text					= "Para obtener m�s informaci�n acerca de c�mo cambiar la configuraci�n de seguridad, consulte la Ayuda de Internet Explorer."
	Const L_TicketError1_Text			= "Su invitaci�n de Asistencia remota falta o no es v�lida. Para usar Asistencia remota, necesita una invitaci�n v�lida."
	Const L_InstallIE_Text				= "Para aceptar una invitaci�n de Asistencia remota, debe instalar Internet Explorer 5.5."
	Const L_TicketErrorMsg_Text			= "Para obtener m�s informaci�n acerca de Asistencia remota, haga clic en <B>Inicio</B> de Windows XP, haga clic en <B>Ayuda y soporte t�cnico</B> y, a continuaci�n, escriba <B>Asistencia remota</B> en el cuadro <B>B�squeda</B>"
	
	Const L_NotesTitle_Text				= "Notas"
	Const L_NotesLine1_Text				= "Acepte s�lo invitaciones de las personas en las que conf�a."
	
	Const L_NotesLine2_Text				= "Usted y la persona a la que est� ayudando deben estar conectadas a Internet mientras usan Asistencia remota. Si la persona que ha enviado esta invitaci�n est� disponible para aceptar su solicitud para conectarse a su equipo, podr� ver su pantalla del equipo y charlar con ella en tiempo real.                         "
	
	Const L_NotesLine6_Text				= "Esta es una conexi�n segura de un s�lo sentido. La persona a cuyo equipo usted est� conectado no podr� en ning�n momento usar su propio equipo para obtener acceso al de usted. Si est� trabajando en una red de �rea local, es posible que los servidores de seguridad le impidan usar Asistencia remota. En este caso, p�ngase en contacto con el administrador de red para obtener m�s informaci�n."
	
	Const L_LearnXP_Text				= "Para obtener m�s informaci�n acerca de Asistencia remota, haga clic en <B>Inicio</B> de Windows XP, haga clic en <B>Ayuda y soporte t�cnico</B> y, a continuaci�n, escriba <B>Asistencia remota</B> en el cuadro <B>B�squeda</B"
	
	Const L_ContactUsMsg_Text			= "Contacte con nosotros"
	

	Const L_XPNewsletterMsg_Text		= "Boletines gratuitos"
	Const L_EmailPage_Text				= "Enviar esta p�gina por correo electr�nico"
	
	Const L_CopyRightMsg_Text			= "(C) 2001 Microsoft Corporation. Reservados todos los derechos. Condiciones de uso."
	
	Const L_PrivacyMsg_Text				= "Declaraci�n de privacidad"

	Const L_AccMsg_Text					= "Accesibilidad"

	Const L_NotIEError1_Text			= "Para aceptar una invitaci�n de Asistencia remota, debe instalar Internet Explorer 5.5 o posterior."

	Const L_NotXPError1_Text			= "Asistencia remota de Microsoft es una caracter�stica de Windows&nbsp;XP. Para usar Asistencia remota, primero tiene que instalar Windows&nbsp;XP."

	Const L_IELinkMsg_Text				= "Descargar la �ltima versi�n de Internet Explorer"
	Const L_XPLinkMsg_Text				= "Para obtener m�s informaci�n acerca de  Windows XP, visite "
	Const L_XPLinkMsg2_Text				= "el sitio Web de Microsoft Windows"
	Const L_XPLinkMsg3_Text				= "."
	
	Const L_IntroMsg1_Text              = "Se est� descargando un componente requerido para utilizar Asistencia remota. Si tiene un m�dem de 28800 bps, la descarga puede tardar 1 minuto."
    Const L_IntroMsg2_Text              = "Para ejecutar Asistencia remota, la opci�n Secuencias de comandos ActiveX debe estar habilitada. Si luego del tiempo estimado de descarga esta p�gina no confirma el fin de la descarga, compruebe que la opci�n de secuencias de comandos est� habilitada."
    Const L_IntroMsg3_Text              = "Para habilitar la opci�n Secuencias de comandos ActiveX:"
    Const L_IntroMsg4_Text              = "Haga clic en <B>Opciones de Internet</B> en el men� <B>Herramientas</B> de Internet Explorer."
    Const L_IntroMsg5_Text              = "Haga clic en la ficha <B>Seguridad</B>."
    Const L_IntroMsg6_Text              = "Haga clic en el icono <STRONG>Internet</STRONG> y luego en <STRONG>Nivel personalizado</STRONG>."
    Const L_IntroMsg7_Text              = "En la secci�n Automatizaci�n, dentro de <STRONG>Secuencias de comandos ActiveX</STRONG>, haga clic en <STRONG>Activar</STRONG>."
    
	' **************************************
	' Links - No need for localization
	' **************************************
	Const L_AccLink_Text				= "http://www.microsoft.com/enable/"		
	Const L_XPLink_Text					= "http://www.microsoft.com/windowsxp/default.asp"
	Const L_PrivacyLink_Text			= "http://www.microsoft.com/info/privacy.htm"
	Const L_ContactUsLink_Text			= "http://register.microsoft.com/contactus30/contactus.asp?domain=windows&amp;lcid=1033&amp;cu=http://register.microsoft.com/contactus30/contactus.asp?domain=windows"
	Const L_MailTo1_Text				= "mailto:?subject=Un v�nculo de Microsoft&body=Este v�nculo es del sitio Web de Windows XP de Microsoft "
	Const L_CopyRightLink_Text			= "http://www.microsoft.com/info/cpyright.htm"
	Const L_XPNewsletterLink_Text		= "http://www.microsoft.com/windowsxp/newsletters.asp"
	Const L_LinkToIE_Text				= "http://www.microsoft.com/windows/ie/default.htm"
	'*************************************	
	
	GetString = Eval(sStringName)
End Function

%>