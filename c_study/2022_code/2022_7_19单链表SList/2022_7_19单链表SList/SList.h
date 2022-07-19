#pragma once

#include<stdio.h>
#include<string>

typedef int SListDataType;

typedef struct SListNode{

	SListDataType data;
	SListNode* next;

}SListNode;


//¥Ú”°
void SListPrint ( SListNode* phead );

//Œ≤≤Â
void SListPushBack(SListNode** pphead, SListDataType x);