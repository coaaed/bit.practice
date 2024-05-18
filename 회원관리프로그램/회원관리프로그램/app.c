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
	printf("비트단기과정\n");
	printf("C언어\n");
	printf("회원관리프로그램\n");
	printf("2024.04.16\n");
	printf("이현호 \n");
	printf("**********************************************\n");
	system("pause");
}

void ending()
{
	system("cls");
	printf("**********************************************\n");
	printf("프로그램을 종료합니다 \n");
	printf("**********************************************\n");
	system("pause");
}

char menuprint()
{
	printf("**********************************************\n");
	printf("[1] 회원정보 저장(insert)\n");
	printf("[2] 회원정보 검색-이름(select)\n");
	printf("[3] 회원정보 검색-번호(select)\n");
	printf("[4] 회원정보 수정(update)\n");
	printf("[5] 회원정보 삭제(delete)\n");
	printf("[6] 프로그램 종료\n");
	printf("**********************************************\n");

	return _getch();	//#inclue <conio.h>
}
