//Myarr.h
//ÀúÀå¼Ò
#pragma once
class Myarr
{
private:
	void* arr[20];
	int size;
	int max;

public:
	Myarr();
	~Myarr();

public:
	int Get_size()const;
	int Get_Max()const;

public:
	void* get_data(int idx)const;
	bool push_back(void* _data);
	bool remove(int idx);
};

