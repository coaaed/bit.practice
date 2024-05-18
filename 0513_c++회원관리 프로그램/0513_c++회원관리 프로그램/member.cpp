//member.cpp
#include "std.h"


Member::Member(int _number, string _name, string _phone):number(_number), name(_name), phone(_phone)
{
}

Member::~Member()
{

}

int Member::Get_Number()const
{
	return number;
}

string Member::Get_Name()const
{
	return name;
}
string Member::Get_Phone()const
{
	return phone;
}

void Member::Set_Phone(string _phone)
{
	phone = _phone;
}

void Member::Print()const
{
	cout << number << "\t";
	cout << name << "\t";
	cout<< phone << endl;
}

void Member::Println()const
{
	cout << "[회원번호]" << number << endl;
	cout << "[이    름]" << name << endl;
	cout << "[전화번호]" << phone << endl;

}



