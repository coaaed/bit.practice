//Member.h
//데이터 관리
#pragma once
class Member
{
private:
	int num;
	string name;
	int ran_num;
	/*string idx;*/

public:
	Member(int _num,string _name/*, string _idx*/,int _ran_num );
	~Member();

public:
	int Get_num()const;
	string Get_name()const;
	int Get_ran_num()const;
	/*string Get_idx()const;*/

public:
	void Set_num(int _num);
	void Set_name(string _name);
	void set_ran_num(int _ran_num);
	/*void Set_idx(string _idx);*/

public:
	void Print()const;
	void Println()const;

};




