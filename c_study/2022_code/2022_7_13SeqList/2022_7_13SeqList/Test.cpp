#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

void testSeqList1()
{
	SL s1;

	//˳���ĳ�ʼ��
	SeqListInit(&s1);

	//˳����β�����
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPrint(&s1);

	//˳����βɾ
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPrint(&s1);

	//˳��������
	SeqListDestory(&s1);
}

int main()
{
	testSeqList1();

	return 0;
}