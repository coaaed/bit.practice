//member.c
#include "std.h"

Member* mem_create(int number, const char* name, const char* phone)
{
	Member* pmem = (Member*)malloc(sizeof(Member));

	pmem->number = number;
	strcpy_s(pmem->name, sizeof(pmem->name), name);
	strcpy_s(pmem->phone, sizeof(pmem->phone), phone);

	return pmem;
}

void mem_print(const Member* pmem)
{
	printf("%d\t", pmem->number);
	printf("%s\t", pmem->name);
	printf("%s\n", pmem->phone);
}

void mem_println(const Member* pmem)
{
	printf("[회원번호] %d\n", pmem->number);
	printf("[이    름] %s\n", pmem->name);
	printf("[전화번호] %s\n", pmem->phone);
}

void mem_set_phone(Member* pmem, const char* phone)
{
	strcpy_s(pmem->phone, sizeof(pmem->phone), phone);
}

void mem_delete(Member* pmem)
{
	free(pmem);
}

