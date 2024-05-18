//control.c
#include "std.h" 

MyArr g_arr;
void con_init()
{
	myarr_init(&g_arr);
	//myfile_load_text(&g_arr);
	myfile_load_binary(&g_arr);
}

void con_exit()
{
	//myfile_save_text(&g_arr);
	myfile_save_binary(&g_arr);
}

//변수 선언 -> 입력 초기화 -> 학생정보 생성 -> 저장
void con_insert()
{
	printf("[회원정보 저장]\n");

	int number;
	char name[20], phone[20];

	printf("회원번호 : "); scanf_s("%d", &number);
	char dummy = getchar();
	printf("이   름  : "); gets_s(name, sizeof(name));
	printf("전화번호 : "); gets_s(phone, sizeof(phone));

	Member* mem = mem_create(number, name, phone);

	if (myarr_insert(&g_arr, mem) == 1)
		printf("저장되었습니다\n");
	else
		printf("저장 실패\n");
}

//변수 선언 -> 입력 초기화, 순차검색 -> 결과 출력
void con_select_name()
{
	printf("[회원정보 검색(이름)]\n");

	char name[20];

	printf("검색할 이름 : ");
	gets_s(name, sizeof(name));

	int idx = nametoidx(name);

	if (idx == -1)
	{
		printf("없다\n");
	}
	else
	{
		Member* pmem = myarr_get_data(&g_arr, idx);
		mem_println(pmem);
	}
}

void con_select_number()
{
	printf("[회원정보 검색(번호)]\n");

	int number;

	printf("검색할 번호 : ");
	scanf_s("%d", &number);
	char dummy = getchar();

	int idx = numbertoidx(number);

	if (idx == -1)
	{
		printf("없다\n");
	}
	else
	{
		Member* pmem = myarr_get_data(&g_arr, idx);
		mem_println(pmem);
	}
}

//변수 선언 -> 입력 초기화, 순차검색 -> 수정정보획득->변경
void con_update()
{
	printf("[회원정보 수정]\n");

	char name[20];

	printf("수정할 이름 : ");
	gets_s(name, sizeof(name));

	int idx = nametoidx(name);

	if (idx == -1)
	{
		printf("없다\n");
	}
	else
	{
		char phone[20];
		printf("전화번호 : ");	gets_s(phone, sizeof(phone));

		Member* pmem = myarr_get_data(&g_arr, idx);
		mem_set_phone(pmem, phone);

		printf("전화번호가 변경되었습니다\n");
	}
}

//변수 선언 -> 입력 초기화, 순차검색 -> 모든값을 초기화
void con_delete()
{
	printf("[회원정보 삭제]\n");

	char name[20];

	printf("삭제할 이름 : ");
	gets_s(name, sizeof(name));

	int idx = nametoidx(name);

	if (idx == -1)
	{
		printf("없다\n");
	}
	else
	{
		Member* pmem = myarr_get_data(&g_arr, idx);
		mem_delete(pmem);
		myarr_delete(&g_arr, idx);

		printf("삭제되었습니다\n");
	}
}

//전체출력 :
void con_printall()
{
	for (int i = 0; i < myarr_get_size(&g_arr); i++)
	{
		Member* pmem = myarr_get_data(&g_arr, i);
		mem_print(pmem);
	}
}

int nametoidx(const char* name)
{
	for (int i = 0; i < myarr_get_size(&g_arr); i++)
	{
		Member* p = (Member*)myarr_get_data(&g_arr, i);
		if (strcmp(p->name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

int numbertoidx(int number)
{
	for (int i = 0; i < myarr_get_size(&g_arr); i++)
	{
		Member* p = (Member*)myarr_get_data(&g_arr, i);
		if (p->number == number)
		{
			return i;
		}
	}
	return -1;
}
