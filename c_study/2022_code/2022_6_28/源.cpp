#define _CRT_SECURE_NO_WARNINGS 1

//������a�е����ݺ�b�е����ݽ�������������һ����
#include<stdio.h>

//int main()
//{
//	int arr[10] = {0};
//
//	int* pa = arr;
//	char* pc =(char* )&arr;//ǿ��ת��
//
//	printf("%p\n",pa);
//	printf("%p\n", pa+1); 
//	
//	printf("%p\n", pc); 
//	printf("%p\n", pc+1);
//
//	
//
//	return 0;
//}


int main()
{
	int arr[10] = {0};
	int* p = arr;



	int i = 0;
	for (i = 0; i < 10; i++)
	{
		 *(p + i) = 1;//p+i���±�Ϊi��Ԫ��
	}

	return 0;
}