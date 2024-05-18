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

//변수 선언 -> 입력 초기화 -> 학생정보 생성 -> 저장
void Control::insert()
{
	printf("[회원정보 저장]\n");

	int number = MyInput::input_integer("회원번호");
	string name = MyInput::input_string("이름");
	string phone = MyInput::input_string("전화번호");

	

	Member* mem = new Member(number, name, phone);

	if (myarr->push_back(mem) == true)
		printf("저장되었습니다\n");
	else
		printf("저장 실패\n");
}

//변수 선언 -> 입력 초기화, 순차검색 -> 결과 출력
void Control::select_name()
{
	printf("[회원정보 검색(이름)]\n");

	

	string name = MyInput::input_string("이름");

	int idx = nametoidx(name);

	if (idx == -1)
	{
		printf("없다\n");
	}
	else
	{
		Member* pmem = (Member*)myarr->get_data(idx);
		pmem->Println();
	}
}

void Control::select_number()
{
	printf("[회원정보 검색(번호)]\n");

	int number = MyInput::input_integer("회원번호");

	int idx = numbertoidx(number);

	if (idx == -1)
	{
		printf("없다\n");
	}
	else
	{
		Member* pmem = (Member*)myarr->get_data(idx);
		pmem->Println();
	}
}

//변수 선언 -> 입력 초기화, 순차검색 -> 수정정보획득->변경
void Control::update()
{
	printf("[회원정보 수정]\n");

	string name = MyInput::input_string("이름");
	int idx = nametoidx(name);

	if (idx == -1)
	{
		printf("없다\n");
	}
	else
	{
		char phone[20];
		printf("전화번호 : ");	gets_s(phone, sizeof(phone));

		Member* pmem = (Member*)myarr->get_data(idx);
		pmem->Set_Phone(phone);
		printf("전화번호가 변경되었습니다\n");
	}
}

//변수 선언 -> 입력 초기화, 순차검색 -> 모든값을 초기화
void Control::remove()
{
	printf("[회원정보 삭제]\n");

	string name = MyInput::input_string("이름");
	int idx = nametoidx(name);

	if (idx == -1)
	{
		printf("없다\n");
	}
	else
	{
		Member* pmem = (Member*)myarr->get_data(idx);
		delete pmem;						//이거 안해주면 주소잃은 힙 메모리 삭제 안됨
		myarr->remove(idx);					

		printf("삭제되었습니다\n");
	}
}

//전체출력 :
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
