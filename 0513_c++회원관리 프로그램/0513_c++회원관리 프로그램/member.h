//member.h
#pragma once


class Member
{
private:
	int  number;
	string name;
	string phone;

public:
	Member(int _number, string _name, string _phone);
	~Member();

public:

	int Get_Number()const;
	string Get_Name()const;
	string Get_Phone()const;

public:
	void Set_Phone(string _phone);

public:
	void Print()const;
	void Println()const;
};
