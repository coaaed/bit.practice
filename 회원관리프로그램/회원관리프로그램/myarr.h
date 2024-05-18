//myarr.h
#pragma once

//배열 : 모든 타입의 주소 저장 
typedef struct tagMyArr
{
	void* arr[10];	//void*를 10개 저장하는 배열
	int size;
	int max;
}MyArr;

/************************************************
초기화 과정에서 호출 : 배열을 초기화
*************************************************/
void myarr_init(MyArr* parr);

/************************************************
저장함수
- 매개변수 parr  : 저장소
- 매개변수 value : 저장할 값의 주소
- 반환  : 성공 1, 실패 0(저장소가 부족할때)
*************************************************/
int myarr_insert(MyArr* parr, void* value);

/************************************************
삭제함수
- 매개변수 parr  : 저장소
- 매개변수 idx   : 삭제할 인덱스
- 반환  : 성공 1, 실패 0(유효하지 않은 인덱스)
*************************************************/
int myarr_delete(MyArr* parr, int idx);

//정보를 반환하는 함수
int  myarr_get_size(const MyArr* parr);
int  myarr_get_max(const MyArr* parr);
void* myarr_get_data(const MyArr* parr, int idx);
