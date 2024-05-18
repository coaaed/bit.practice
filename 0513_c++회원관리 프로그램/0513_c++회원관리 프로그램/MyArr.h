//MyArr.h
#pragma once
class MyArr
{
private:
	void* arr[10];	//void*�� 10�� �����ϴ� �迭
	int size;
	int max;

public:
	MyArr();
	~MyArr();

public:
	int get_size()const;
	int get_max()const;
public:
	void* get_data(int idx)const;
	bool push_back(void* _data);
	bool remove(int idx);
};

