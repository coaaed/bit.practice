//MyPrint.cpp
#include "std.h"


void MyPrint::logo()
{
	system("cls");
	printf("**********************************************\n");
	printf("비트단기과정\n");
	printf("C++언어\n");
	printf("회원관리프로그램\n");
	printf("2024.05.14\n");
	printf("이현호 \n");
	printf("**********************************************\n");
	system("pause");
}

void MyPrint::ending()
{
	system("cls");
	printf("**********************************************\n");
	printf("프로그램을 종료합니다 \n");
	printf("**********************************************\n");
	system("pause");
}

char MyPrint::menuprint()
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


