//Control.cpp
#include "std.h"




Control::Control()
{

	myarr = new MyArr;
	MyFile::load(myarr);
}

Control::~Control()
{
	MyFile::save(myarr);

	delete myarr;
}

//���� ���� -> �Է� �ʱ�ȭ -> �л����� ���� -> ����
void Control::insert()
{
	printf("[ȸ������ ����]\n");

	int number = MyInput::input_integer("ȸ����ȣ");
	string name = MyInput::input_string("�̸�");
	string phone = MyInput::input_string("��ȭ��ȣ");

	

	Member* mem = new Member(number, name, phone);

	if (myarr->push_back(mem) == true)
		printf("����Ǿ����ϴ�\n");
	else
		printf("���� ����\n");
}

//���� ���� -> �Է� �ʱ�ȭ, �����˻� -> ��� ���
void Control::select_name()
{
	printf("[ȸ������ �˻�(�̸�)]\n");

	

	string name = MyInput::input_string("�̸�");

	int idx = nametoidx(name);

	if (idx == -1)
	{
		printf("����\n");
	}
	else
	{
		Member* pmem = (Member*)myarr->get_data(idx);
		pmem->Println();
	}
}

void Control::select_number()
{
	printf("[ȸ������ �˻�(��ȣ)]\n");

	int number = MyInput::input_integer("ȸ����ȣ");

	int idx = numbertoidx(number);

	if (idx == -1)
	{
		printf("����\n");
	}
	else
	{
		Member* pmem = (Member*)myarr->get_data(idx);
		pmem->Println();
	}
}

//���� ���� -> �Է� �ʱ�ȭ, �����˻� -> ��������ȹ��->����
void Control::update()
{
	printf("[ȸ������ ����]\n");

	string name = MyInput::input_string("�̸�");
	int idx = nametoidx(name);

	if (idx == -1)
	{
		printf("����\n");
	}
	else
	{
		char phone[20];
		printf("��ȭ��ȣ : ");	gets_s(phone, sizeof(phone));

		Member* pmem = (Member*)myarr->get_data(idx);
		pmem->Set_Phone(phone);
		printf("��ȭ��ȣ�� ����Ǿ����ϴ�\n");
	}
}

//���� ���� -> �Է� �ʱ�ȭ, �����˻� -> ��簪�� �ʱ�ȭ
void Control::remove()
{
	printf("[ȸ������ ����]\n");

	string name = MyInput::input_string("�̸�");
	int idx = nametoidx(name);

	if (idx == -1)
	{
		printf("����\n");
	}
	else
	{
		Member* pmem = (Member*)myarr->get_data(idx);
		delete pmem;						//�̰� �����ָ� �ּ����� �� �޸� ���� �ȵ�
		myarr->remove(idx);					

		printf("�����Ǿ����ϴ�\n");
	}
}

//��ü��� :
void Control::printall()
{
	for (int i = 0; i < myarr->get_size(); i++)
	{
		Member* pmem = (Member*)myarr->get_data(i);
		pmem->Print();
	}
}

int Control::nametoidx(string name)
{
	for (int i = 0; i < myarr->get_size(); i++)
	{
		Member* p = (Member*)myarr->get_data(i);
		if (p->Get_Name() == name)
		{
			return i;
		}
	}
	return -1;
}

int Control::numbertoidx(int number)
{
	for (int i = 0; i < myarr->get_size(); i++)
	{
		Member* p = (Member*)myarr->get_data(i);
		if (p->Get_Number() == number)
		{
			return i;
		}
	}
	return -1;
}
