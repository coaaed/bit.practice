//Myarr.cpp
#include "std.h"

Myarr::Myarr():size(0),max(20)
{

}
Myarr::~Myarr(){}


int Myarr::Get_size()const 
{
	return size;
}
int Myarr::Get_Max()const
{
	return max;
}


void* Myarr::get_data(int idx)const
{
	return arr[idx];
}
bool Myarr::push_back(void* _data)
{
	if (size >= max)
	{
		cout << "overflow" << endl;
		return false;
	}
	arr[size] = _data;
	size++;
	return true;


}
bool Myarr::remove(int idx)
{
	if (idx<0 || idx>size)
	{
		cout << "삭제실패" << endl;
		return false;
	}
	
	for (int i = idx; i < size - 1; i++)
	{
		arr[i] = arr[i - 1];
		
	}
	size--;
	return true;
	
}