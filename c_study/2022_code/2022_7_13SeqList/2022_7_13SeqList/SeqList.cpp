#define _CRT_SECURE_NO_WARNINGS 1


//SeqList�ӿں�����ض���

#include"SeqList.h"

void SeqListPrint(SL* ps)//��ӡ
{
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}



void SeqListInit(SL* ps)//��ʼ��
{
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}



void SeqListPushBack(SL* ps, SLDataType x)//β��
{
	//���û�пռ���߿ռ䲻��,�ͽ�������
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity==0 ? 4 : 2*ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity*sizeof(SLDataType));

		//������ɺ�,��tmp�����пղ���
		if (tmp == NULL)
		{
			printf("realloc fail");
			exit(-1);
		}

		//������ݳɹ�,�Ϳ��Ը���a�����capacity
		ps->a = tmp;
		ps->capacity = newcapacity;
	}

	//����β��
	ps->a[ps->size] == x;
	ps->size++;
}



void SeqListPopBack(SL* ps)//βɾ
{
	assert(ps->size>0);
	ps->size--;
}



void SeqListPushFront(SL* ps, SLDataType x)//ͷ��
{

}



void SeqListPopFront(SL* ps)//ͷɾ
{

}



void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}