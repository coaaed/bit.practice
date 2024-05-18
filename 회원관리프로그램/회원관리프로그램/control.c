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

//���� ���� -> �Է� �ʱ�ȭ -> �л����� ���� -> ����
void con_insert()
{
	printf("[ȸ������ ����]\n");

	int number;
	char name[20], phone[20];

	printf("ȸ����ȣ : "); scanf_s("%d", &number);
	char dummy = getchar();
	printf("��   ��  : "); gets_s(name, sizeof(name));
	printf("��ȭ��ȣ : "); gets_s(phone, sizeof(phone));

	Member* mem = mem_create(number, name, phone);

	if (myarr_insert(&g_arr, mem) == 1)
		printf("����Ǿ����ϴ�\n");
	else
		printf("���� ����\n");
}

//���� ���� -> �Է� �ʱ�ȭ, �����˻� -> ��� ���
void con_select_name()
{
	printf("[ȸ������ �˻�(�̸�)]\n");

	char name[20];

	printf("�˻��� �̸� : ");
	gets_s(name, sizeof(name));

	int idx = nametoidx(name);

	if (idx == -1)
	{
		printf("����\n");
	}
	else
	{
		Member* pmem = myarr_get_data(&g_arr, idx);
		mem_println(pmem);
	}
}

void con_select_number()
{
	printf("[ȸ������ �˻�(��ȣ)]\n");

	int number;

	printf("�˻��� ��ȣ : ");
	scanf_s("%d", &number);
	char dummy = getchar();

	int idx = numbertoidx(number);

	if (idx == -1)
	{
		printf("����\n");
	}
	else
	{
		Member* pmem = myarr_get_data(&g_arr, idx);
		mem_println(pmem);
	}
}

//���� ���� -> �Է� �ʱ�ȭ, �����˻� -> ��������ȹ��->����
void con_update()
{
	printf("[ȸ������ ����]\n");

	char name[20];

	printf("������ �̸� : ");
	gets_s(name, sizeof(name));

	int idx = nametoidx(name);

	if (idx == -1)
	{
		printf("����\n");
	}
	else
	{
		char phone[20];
		printf("��ȭ��ȣ : ");	gets_s(phone, sizeof(phone));

		Member* pmem = myarr_get_data(&g_arr, idx);
		mem_set_phone(pmem, phone);

		printf("��ȭ��ȣ�� ����Ǿ����ϴ�\n");
	}
}

//���� ���� -> �Է� �ʱ�ȭ, �����˻� -> ��簪�� �ʱ�ȭ
void con_delete()
{
	printf("[ȸ������ ����]\n");

	char name[20];

	printf("������ �̸� : ");
	gets_s(name, sizeof(name));

	int idx = nametoidx(name);

	if (idx == -1)
	{
		printf("����\n");
	}
	else
	{
		Member* pmem = myarr_get_data(&g_arr, idx);
		mem_delete(pmem);
		myarr_delete(&g_arr, idx);

		printf("�����Ǿ����ϴ�\n");
	}
}

//��ü��� :
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
