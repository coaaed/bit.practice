//myarr.c
#include "std.h"

void myarr_init(MyArr* parr)
{
	parr->max = 10;
	parr->size = 0;
}

int myarr_insert(MyArr* parr, void* value)
{
	if (parr->size >= parr->max)
	{
		printf("Overflow\n");
		return 0;
	}

	parr->arr[parr->size] = value;
	parr->size++;
	return 1;
}

int myarr_delete(MyArr* parr, int idx)
{
	if (idx <0 || idx> parr->size)
		return 0;

	for (int i = idx; i < parr->size - 1; i++)
	{
		parr->arr[i] = parr->arr[i + 1];
	}
	parr->size--;
	return 1;
}

int  myarr_get_size(const MyArr* parr)
{
	return parr->size;
}

int  myarr_get_max(const MyArr* parr)
{
	return parr->max;
}

void* myarr_get_data(const MyArr* parr, int idx)
{
	if (idx <0 || idx> parr->size)
		return NULL;

	return parr->arr[idx];
}



