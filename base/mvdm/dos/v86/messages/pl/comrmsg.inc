;***    Translateable text for command.com resident data.


;*      Input characters for critical error "Abort, Retry, Fail, Ignore?"
;       and Yes/No.

Abort_Char      db      "P"
Retry_Char      db      "O"
Ignore_Char     db      "I"
Fail_Char       db      "Z"
Yes_Char        db      "T"
No_Char         db      "N"


;*      MESSAGES
;
;       See resmsg.equ for macro definition.


;*      Local messages.

	msg     Req_Abort, <"Przerwij">
	msg     Req_Retry, <", pOn�w">
	msg     Req_Ignore,<", Ignoruj">
	msg     Req_Fail,  <", Zrezygnuj">
	msg     Req_End,   <"?">
	msg     MRead,     <"odczytu",0>
	msg     MWrite,    <"zapisu",0>
	msg     BlkDevErr, <" %1 dysk %2",CR,LF>
	msg     CharDevErr,<" %1 urz�dzenie %2",CR,LF>
	msg     NeedVolMsg,<"W��� wolumin %1 seria %2-%3",CR,LF>
	msg     BadFatMsg, <"Uszkodzona tablica alokacji plik�w, dysk %1",CR,LF>
    msg     ComBad,    <"Nieprawid�owy plik COMMAND.COM",CR,LF>
	msg     PutBackMsg,<"W��� dysk z %1 do stacji %2",CR,LF>
    msg     Prompt,    <"Naci�nij jaki� klawisz, aby kontynuowa�...",CR,LF>
	msg     EndBatMes, <CR,LF,"Czy zako�czy� zadanie w trybie wsadowym (T/N)?">
	msg     ExecEMes,  <"Nie mo�na wykona� %1",CR,LF>
	msg     ExeBad,    <"B��d w pliku EXE",CR,LF>
	msg     TooBig,    <"Program za du�y do umieszczenia w pami�ci",CR,LF>
	msg     NoHandMes, <CR,LF,"Brak wolnych doj�� do plik�w">
	msg     RBadNam,   <"Z�e polecenie lub nazwa pliku",CR,LF>
	msg     AccDen,    <"Odmowa dost�pu ">
	msg     BMemMes,   <CR,LF,"B��d alokacji pami�ci">
    msg     HaltMes,   <CR,LF,"Nie mo�na za�adowa� pliku COMMAND, system zosta� zatrzymany",CR,LF>
	msg     FRetMes,   <CR,LF,"Nie mo�na uruchomi� pliku COMMAND, ko�czenie pracy",CR,LF>
	msg     Patricide, <CR,LF,"Proces najwy�szego poziomu zosta� przerwany, nie mo�na kontynuowa�",CR,LF> 
	msg     Newlin,    <CR,LF>

;*      Ptrs to message lists.
;       Segment portion is 1, signalling message services to call retriever.

MsgPtrLists     label   dword
	dw      DATARES:ExtMsgPtrs,1    ; extended error messages
	dw      DATARES:ParsMsgPtrs,1   ; parse error messages
	dw      DATARES:ExtMsgPtrs,1    ; critical error messages -
					;  use extended error list
	dw      0,0                     ; file system error messages - none
	dw      DATARES:MsgRetrv_Trap           ; address of message retriever
MySeg3  dw      ?                       ;  (segment filled in during init)



;*      Critical error messages.

	msg     ExtErr19,<"B��d zabezpieczenia przed zapisem">
	msg     ExtErr20,<"Nieprawid�owa jednostka">
	msg     ExtErr21,<"Niegotowy">
	msg     ExtErr22,<"Nieprawid�owe ��danie urz�dzenia">
	msg     ExtErr23,<"B��d danych">
	msg     ExtErr24,<"Nieprawid�owe parametry ��dania urz�dzenia">
	msg     ExtErr25,<"B��d wyszukiwania">
	msg     ExtErr26,<"Nieprawid�owy typ no�nika">
    msg     ExtErr27,<"Sektor nie znaleziony">
	msg     ExtErr28,<"B��d braku papieru">
	msg     ExtErr29,<"B��d zapisu">
	msg     ExtErr30,<"B��d odczytu">
	msg     ExtErr31,<"B��d og�lny">
	msg     ExtErr32,<"Naruszenie wsp��u�ytkowania">
	msg     ExtErr33,<"Naruszenie blokady">
	msg     ExtErr34,<"Nieprawid�owa zmiana dysku">
	msg     ExtErr35,<"Niedost�pny FCB">
	msg     ExtErr36,<"Wyczerpane zasoby systemu">
	msg     ExtErr37,<"Niezgodno�� stron kodowych">
	msg     ExtErr38,<"Za ma�o danych wej�ciowych">
	msg     ExtErr39,<"Za ma�o miejsca na dysku">

;       List of ptrs to critical error messages.
;       Code assumes extended error number order, beginning
;       with extended error number 19.

CritMsgPtrs     label   word
	dw      DATARES:ExtErr19,DATARES:ExtErr20,DATARES:ExtErr21,DATARES:ExtErr22,DATARES:ExtErr23,DATARES:ExtErr24
	dw      DATARES:ExtErr25,DATARES:ExtErr26,DATARES:ExtErr27,DATARES:ExtErr28,DATARES:ExtErr29,DATARES:ExtErr30
	dw      DATARES:ExtErr31,DATARES:ExtErr32,DATARES:ExtErr33,DATARES:ExtErr34,DATARES:ExtErr35,DATARES:ExtErr36
	dw      DATARES:ExtErr37,DATARES:ExtErr38,DATARES:ExtErr39

DataResEnd      label   byte    ; end of resident portion if /msg not used



;*      Parse error messages.

	msg     ParsErr01,<"Zbyt du�o parametr�w">
	msg     ParsErr02,<"Brak wymaganego parametru">
	msg     ParsErr03,<"Nieprawid�owy prze��cznik">
	msg     ParsErr04,<"Nieprawid�owe s�owo kluczowe">
	msg     ParsErr05,<" ">
	msg     ParsErr06,<"Warto�� parametru poza dozwolonym zakresem">
	msg     ParsErr07,<"Niedozwolona warto�� parametru">
	msg     ParsErr08,<"Niedozwolona warto�� parametru">
	msg     ParsErr09,<"Niepoprawny format parametru">
	msg     ParsErr10,<"Nieprawid�owy parametr">
	msg     ParsErr11,<"Nieprawid�owa kombinacja parametr�w">

;       List of ptrs to parse error messages.
;       In order, beginning with parse error number 1.

ParsMsgPtrs     label   word
	dw      DATARES:ParsErr01,DATARES:ParsErr02,DATARES:ParsErr03
	dw      DATARES:ParsErr04,DATARES:ParsErr05,DATARES:ParsErr06
	dw      DATARES:ParsErr07,DATARES:ParsErr08,DATARES:ParsErr09
	dw      DATARES:ParsErr10,DATARES:ParsErr11

NUMPARSMSGS     equ     ($ - ParsMsgPtrs) / 2   ;M033


;*      Extended error messages.

	msg     ExtErr01,<"Nieprawid�owa funkcja">
	msg     ExtErr02,<"Nie znaleziono pliku">
	msg     ExtErr03,<"Nie znaleziono �cie�ki">
	msg     ExtErr04,<"Za du�o otwartych plik�w">
	msg     ExtErr05,<"Brak dost�pu ">
	msg     ExtErr06,<"Nieprawid�owe doj�cie">
    msg     ExtErr07,<"Zniszczone bloki kontroli pami�ci">
    msg     ExtErr08,<"Za ma�o pami�ci">
	msg     ExtErr09,<"Nieprawid�owy adres bloku pami�ci">
	msg     ExtErr10,<"Nieprawid�owe �rodowisko">
	msg     ExtErr11,<"Nieprawid�owy format">
	msg     ExtErr12,<"Nieprawid�owy parametr funkcji">
	msg     ExtErr13,<"Nieprawid�owe dane">

	msg     ExtErr15,<"Nieprawid�owe okre�lenie dysku">
	msg     ExtErr16,<"Pr�ba usuni�cia bie��cego katalogu">
	msg     ExtErr17,<"Inne urz�dzenie">
	msg     ExtErr18,<"Nie ma wi�cej plik�w">

	msg     ExtErr80,<"Plik istnieje">

	msg     ExtErr82,<"Nie mo�na utworzy� wpisu katalogu">
	msg     ExtErr83,<"B��d przerwania 24">
	msg     ExtErr84,<"Zbyt wiele przekierowa�">
    msg     ExtErr85,<"Powt�rzone przekierowanie">
	msg     ExtErr86,<"Nieprawid�owe has�o">
	msg     ExtErr87,<"Nieprawid�owy parametr">
	msg     ExtErr88,<"B��d danych sieci">
	msg     ExtErr89,<"Funkcja nie jest obs�ugiwana przez sie�">
    msg     ExtErr90,<"Wymagany sk�adnik systemu nie jest zainstalowany">

;       List of ptrs to extended error messages.
;       In order, beginning with extended error number 1.
;       Critical error messages are included here, as well as in the
;       critical error message list.  
;       Error numbers without messages are included as null ptrs.

ExtMsgPtrs      label   word
	dw      DATARES:ExtErr01,DATARES:ExtErr02,DATARES:ExtErr03
	dw      DATARES:ExtErr04,DATARES:ExtErr05,DATARES:ExtErr06
	dw      DATARES:ExtErr07,DATARES:ExtErr08,DATARES:ExtErr09
	dw      DATARES:ExtErr10,DATARES:ExtErr11,DATARES:ExtErr12
	dw      DATARES:ExtErr13,0,                DATARES:ExtErr15
	dw      DATARES:ExtErr16,DATARES:ExtErr17,DATARES:ExtErr18
	dw      DATARES:ExtErr19,DATARES:ExtErr20,DATARES:ExtErr21
	dw      DATARES:ExtErr22,DATARES:ExtErr23,DATARES:ExtErr24
	dw      DATARES:ExtErr25,DATARES:ExtErr26,DATARES:ExtErr27
	dw      DATARES:ExtErr28,DATARES:ExtErr29,DATARES:ExtErr30
	dw      DATARES:ExtErr31,DATARES:ExtErr32,DATARES:ExtErr33
	dw      DATARES:ExtErr34,DATARES:ExtErr35,DATARES:ExtErr36
	dw      DATARES:ExtErr37,DATARES:ExtErr38,DATARES:ExtErr39
	dw      80-40 dup (0) ; null ptrs for errors 40-79
	dw      DATARES:ExtErr80,0,                DATARES:ExtErr82
	dw      DATARES:ExtErr83,DATARES:ExtErr84,DATARES:ExtErr85
	dw      DATARES:ExtErr86,DATARES:ExtErr87,DATARES:ExtErr88
	dw      DATARES:ExtErr89,DATARES:ExtErr90
ExtMsgPtrsEnd   label   word

NUMEXTMSGS      equ     ($ - ExtMsgPtrs) / 2    ;M033

ExtMsgEnd	label	byte	; end of extended error messages
				; = end of resident if /msg is used
