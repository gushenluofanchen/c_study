#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int * test()
{
	int a = 10;
	return &a;
}

//int main()
//{
	//3.ָ��ָ��Ŀռ䱻�ͷ�
	//int *p=test();
	//*p = 20;//a�Ѿ����ͷ�

	//1.δ��ʼ��ָ�뵼��Ұָ��
	//int* p;//����

	//*p = 20;//δ��ʼ����Ĭ�������ֵ

	//2.ָ��Խ�絼��Ұָ��
	//int arr[10] = {0};

	//int* p = arr;

	//int i = 0;

	//for (i = 0; i <= 10; i++) 
	//{
	//	*p = 1;
	//	p++;//i=10��ָ��Խ��
	//}


	//return 0;
//}


//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int* p = arr;
//	int* ptr = arr + 9;
//
//	while (p <= ptr)
//	{
//		printf("%d\n",*p);
//		p++;//ָ��+-����
//	}
//
//	return 0;
//}


int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	//ָ��-ָ��
	//���������ָ��֮���Ԫ�ظ���
	printf("%d\n",&arr[9]-&arr[0]);//�����9

	return 0;
}