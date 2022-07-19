#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

//��ӡ
void SListPrint(SListNode* phead)
{
	SListNode* cur = phead;
	while (cur!=NULL) {
		printf("%d",cur->data);
		cur = cur->next;
	}
}


//β��
void SListPushBack(SListNode** pphead, SListDataType x)
{
	//����һ���µĽ��
	SListNode* newSListNode = (SListNode*)malloc(sizeof(SListDataType));
	newSListNode->data = x;
	newSListNode->next = NULL;

	//����β���
	if (*pphead == NULL) //���ͷ������β���
	{
		*pphead = newSListNode;
	}
	else//ͷ��㲻��β���Ļ�,��Ҫ�ҵ�β���
	{
		//��β���
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		
		//�ҵ���β���,����
		tail->next = newSListNode;
	}

}