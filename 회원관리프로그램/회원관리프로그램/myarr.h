//myarr.h
#pragma once

//�迭 : ��� Ÿ���� �ּ� ���� 
typedef struct tagMyArr
{
	void* arr[10];	//void*�� 10�� �����ϴ� �迭
	int size;
	int max;
}MyArr;

/************************************************
�ʱ�ȭ �������� ȣ�� : �迭�� �ʱ�ȭ
*************************************************/
void myarr_init(MyArr* parr);

/************************************************
�����Լ�
- �Ű����� parr  : �����
- �Ű����� value : ������ ���� �ּ�
- ��ȯ  : ���� 1, ���� 0(����Ұ� �����Ҷ�)
*************************************************/
int myarr_insert(MyArr* parr, void* value);

/************************************************
�����Լ�
- �Ű����� parr  : �����
- �Ű����� idx   : ������ �ε���
- ��ȯ  : ���� 1, ���� 0(��ȿ���� ���� �ε���)
*************************************************/
int myarr_delete(MyArr* parr, int idx);

//������ ��ȯ�ϴ� �Լ�
int  myarr_get_size(const MyArr* parr);
int  myarr_get_max(const MyArr* parr);
void* myarr_get_data(const MyArr* parr, int idx);
