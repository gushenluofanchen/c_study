#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

void testSeqList1()
{
	SL s1;

	//顺序表的初始化
	SeqListInit(&s1);

	//顺序表的尾插操作
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPrint(&s1);

	//顺序表的尾删
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPrint(&s1);

	//顺序表的销毁
	SeqListDestory(&s1);
}

int main()
{
	testSeqList1();

	return 0;
}