//Member.cpp
#include "std.h"


Member::Member(int _num, string _name,int _ran_num):num(_num),name(_name),ran_num(_ran_num)/*,idx(_idx)*//*, string _idx*/
{

}
Member::~Member(){}

int Member::Get_num()const
{
	return num;
}
string Member::Get_name()const
{
	return name;
}

int Member::Get_ran_num()const
{
	return ran_num;
}
//string Member::Get_idx()const
//{
//	return idx;
//}

void Member::Set_num(int _num)
{
	num = _num;
}
void Member::Set_name(string _name)
{
	name = _name;
}

void Member::set_ran_num(int _ran_num)
{
	ran_num = _ran_num;
}
//void Member::Set_idx(string _idx)
//{
//	idx = _idx;
//}

void Member::Print()const
{
	cout << num << "\t";
	cout << name << "\t";
	cout << ran_num << endl;
	//cout << idx << endl;

}
void Member::Println()const
{
	cout << "[6자리 숫자]" << num << endl;
	cout << "[이름]" << name << endl;
	cout << "[이번 당청 번호]" << ran_num << endl;
	/*cout << "[인덱스 번호]" << idx << endl;*/
}

