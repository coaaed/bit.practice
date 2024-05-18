//MyArr.cpp
#include "std.h"

MyArr::MyArr() :size(0),max(10)
{

}
MyArr::~MyArr()
{

}


int MyArr::get_size()const
{		

	return size;
}

int MyArr::get_max()const
{
	return max;
}

void* MyArr::get_data(int idx)const
{
	return arr[idx];
}

bool MyArr::push_back(void* _data)
{
	if (size >= max)
	{
		printf("Overflow\n");
		return false;
	}

	arr[size] = _data;
	size++;
	return true;

}

bool MyArr::remove(int idx)
{
	if (idx <0 || idx> size)
		return false;

	for (int i = idx; i < size - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	size--;
	return true;

}