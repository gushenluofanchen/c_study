#define _CRT_SECURE_NO_WARNINGS 1

//将数组a中的内容和b中的内容交换，假设数组一样大
#include<stdio.h>

//int main()
//{
//	int arr[10] = {0};
//
//	int* pa = arr;
//	char* pc =(char* )&arr;//强制转换
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
		 *(p + i) = 1;//p+i是下标为i的元素
	}

	return 0;
}