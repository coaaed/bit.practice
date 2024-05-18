//member.h
#pragma once

typedef struct tagMember
{
	int  number;
	char name[20];
	char phone[20];
}Member;

Member* mem_create(int number, const char* name, const char* phone);
void mem_print(const Member* pmem);
void mem_println(const Member* pmem);
void mem_set_phone(Member* pmem, const char* phone);
void mem_delete(Member* pmem);

