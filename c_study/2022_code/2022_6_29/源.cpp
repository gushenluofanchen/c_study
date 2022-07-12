#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int * test()
{
	int a = 10;
	return &a;
}

//int main()
//{
	//3.指针指向的空间被释放
	//int *p=test();
	//*p = 20;//a已经被释放

	//1.未初始化指针导致野指针
	//int* p;//申明

	//*p = 20;//未初始化，默认是随机值

	//2.指针越界导致野指针
	//int arr[10] = {0};

	//int* p = arr;

	//int i = 0;

	//for (i = 0; i <= 10; i++) 
	//{
	//	*p = 1;
	//	p++;//i=10，指针越界
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
//		p++;//指针+-整数
//	}
//
//	return 0;
//}


int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	//指针-指针
	//结果是两个指针之间的元素个数
	printf("%d\n",&arr[9]-&arr[0]);//结果是9

	return 0;
}