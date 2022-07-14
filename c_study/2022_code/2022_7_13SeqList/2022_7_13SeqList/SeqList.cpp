#define _CRT_SECURE_NO_WARNINGS 1


//SeqList接口函数相关定义

#include"SeqList.h"

void SeqListPrint(SL* ps)//打印
{
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}



void SeqListInit(SL* ps)//初始化
{
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}



void SeqListPushBack(SL* ps, SLDataType x)//尾插
{
	//如果没有空间或者空间不足,就进行扩容
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity==0 ? 4 : 2*ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity*sizeof(SLDataType));

		//扩容完成后,对tmp进行判空操作
		if (tmp == NULL)
		{
			printf("realloc fail");
			exit(-1);
		}

		//如果扩容成功,就可以更新a数组和capacity
		ps->a = tmp;
		ps->capacity = newcapacity;
	}

	//进行尾插
	ps->a[ps->size] == x;
	ps->size++;
}



void SeqListPopBack(SL* ps)//尾删
{
	assert(ps->size>0);
	ps->size--;
}



void SeqListPushFront(SL* ps, SLDataType x)//头插
{

}



void SeqListPopFront(SL* ps)//头删
{

}



void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}