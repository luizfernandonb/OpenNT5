;	Command.com initialization messages.
;
;	See resmsg.equ for macro definition.

        msg     BadVerMsg,   <"���ࠢ��쭠� ����� DOS",CR,LF>
        msg     OutEnvMsg,   <"�������筮 ����� ��� ��६����� �।�",CR,LF>
        msg     CopyrightMsg,<"Microsoft(R) Windows DOS",CR,LF,"(C)Copyright Microsoft Corp 1990-2001.",CR,LF>
        msg     BadComLkMsg, <"��⠫�� ���᪠ ��� COMMAND ����� ���ࠢ��쭮",CR,LF>
        msg     BadComAccMsg,<"��⠫�� ���᪠ ��� COMMAND ����� ���ࠢ��쭮, ��� ����㯠",CR,LF>

        msg     Help1Msg  <"����� �� ������ ��������� �������� ������ MS-DOS.",CR,LF,CR,LF>
        msg     Help2Msg  <"COMMAND [[���:]����] [���ன�⢮] [/E:nnnnn] [/P] [/C ��ப�] [/MSG]",CR,LF,CR,LF>
        msg     Help3Msg  <"  [���:]����     ��⠫��, ᮤ�ঠ騩 䠩� COMMAND.COM.",CR,LF>
        msg     Help4Msg  <"  ���ன�⢮      ���ன�⢮, �ᯮ��㥬�� ��� ����� � �뢮�� ������.",CR,LF>
        msg     Help5Msg  <"  /E:nnnnn        ��室�� ࠧ��� ������ ��६����� �।� � �����.",CR,LF>
        msg     Help6Msg  <"  /P              ����㧪� �������� ������ ��� ���������� ��室�.",CR,LF>
        msg     Help7Msg  <"  /C ��ப�       �믮������ �������, 㪠������ � ��ப�, � ��室.",CR,LF>
        msg     Help8Msg  <"  /MSG            �࠭���� ᮮ�饭�� �� �訡��� � �����. �ॡ�� �ਬ������",CR,LF>
        msg     Help9Msg  <"                  ��ࠬ��� /P ᮢ���⭮ � �⨬ ��ࠬ��஬.",CR,LF>

HelpMsgs	dw	RESGROUP:Help1Msg,RESGROUP:Help2Msg
		dw	RESGROUP:Help3Msg,RESGROUP:Help4Msg
		dw	RESGROUP:Help5Msg,RESGROUP:Help6Msg
		dw	RESGROUP:Help7Msg,RESGROUP:Help8Msg
		dw	RESGROUP:Help9Msg,0

	public	HelpMsgs
