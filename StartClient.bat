;�˴��������4����༭����EXE�ļ����ڵ�Ŀ¼
SET EDITOR_EXE_DIR=D:\UnrealVersion\UE_5.0\Engine\Binaries\Win64
@echo off
SET UE_EXE=%EDITOR_EXE_DIR%\UnrealEditor.exe

set var=0
rem ************ѭ����ʼ
:continue
set /a var+=1
echo ��%var%��ѭ��
start /B "Client" "%UE_EXE%" "%CD%\KBEDemo.uproject" -game
if %var% lss 4 goto continue
rem ************ѭ������
echo ѭ��ִ�����

