#pragma once

#include<stdio.h>
#include<string>

typedef int SListDataType;

typedef struct SListNode{

	SListDataType data;
	SListNode* next;

}SListNode;


//��ӡ
void SListPrint ( SListNode* phead );

//β��
void SListPushBack(SListNode** pphead, SListDataType x);