//app.c
#include "std.h"

void app_init()
{
	logo();
	con_init();
}

void app_run()
{
	while (1)
	{
		system("cls");
		con_printall();
		char ch = menuprint();
		switch (ch)
		{
		case '1': con_insert();			break;
		case '2': con_select_name();	break;
		case '3': con_select_number();	break;
		case '4': con_update();			break;
		case '5': con_delete();			break;
		case '6': return;
		}
		system("pause");
	}
}
void app_exit()
{
	ending();
	con_exit();
}


void logo()
{
	system("cls");
	printf("**********************************************\n");
	printf("��Ʈ�ܱ����\n");
	printf("C���\n");
	printf("ȸ���������α׷�\n");
	printf("2024.04.16\n");
	printf("����ȣ \n");
	printf("**********************************************\n");
	system("pause");
}

void ending()
{
	system("cls");
	printf("**********************************************\n");
	printf("���α׷��� �����մϴ� \n");
	printf("**********************************************\n");
	system("pause");
}

char menuprint()
{
	printf("**********************************************\n");
	printf("[1] ȸ������ ����(insert)\n");
	printf("[2] ȸ������ �˻�-�̸�(select)\n");
	printf("[3] ȸ������ �˻�-��ȣ(select)\n");
	printf("[4] ȸ������ ����(update)\n");
	printf("[5] ȸ������ ����(delete)\n");
	printf("[6] ���α׷� ����\n");
	printf("**********************************************\n");

	return _getch();	//#inclue <conio.h>
}
