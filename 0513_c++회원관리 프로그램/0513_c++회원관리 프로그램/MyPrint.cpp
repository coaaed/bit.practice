//MyPrint.cpp
#include "std.h"


void MyPrint::logo()
{
	system("cls");
	printf("**********************************************\n");
	printf("��Ʈ�ܱ����\n");
	printf("C++���\n");
	printf("ȸ���������α׷�\n");
	printf("2024.05.14\n");
	printf("����ȣ \n");
	printf("**********************************************\n");
	system("pause");
}

void MyPrint::ending()
{
	system("cls");
	printf("**********************************************\n");
	printf("���α׷��� �����մϴ� \n");
	printf("**********************************************\n");
	system("pause");
}

char MyPrint::menuprint()
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


