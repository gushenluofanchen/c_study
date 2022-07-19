#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

//打印
void SListPrint(SListNode* phead)
{
	SListNode* cur = phead;
	while (cur!=NULL) {
		printf("%d",cur->data);
		cur = cur->next;
	}
}


//尾插
void SListPushBack(SListNode** pphead, SListDataType x)
{
	//申请一个新的结点
	SListNode* newSListNode = (SListNode*)malloc(sizeof(SListDataType));
	newSListNode->data = x;
	newSListNode->next = NULL;

	//更改尾结点
	if (*pphead == NULL) //如果头结点就是尾结点
	{
		*pphead = newSListNode;
	}
	else//头结点不是尾结点的话,需要找到尾结点
	{
		//找尾结点
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		
		//找到了尾结点,更改
		tail->next = newSListNode;
	}

}