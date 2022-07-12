#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//一级指针传参
//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(ptr+i));
//	}
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(p, sz);
//
//	return 0;
//}



//一级指针作为参数，可以接收哪种实际参数
//void test(char* ptr) {}
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//
//	test(&ch);//可以接收变量的地址
//	test(p);//可以接收一级指针变量
//
//
//	return 0;
//}


//二级指针传参
//void test(int** p)
//{
//	**p = 20;
//}
//int main()
//{
//	int i = 10;
//	int* pr = &i;
//	int** ppr = &pr;
//
//	test(ppr);
//
//	printf("%d",i);
//	return 0;
//}


//二级指针作为参数可以接受哪种实际参数
//void test(int** p)
//{
//	**p = 20;
//}
//int main()
//{
//	int i=10;
//	int* pr = &i;
//	int** ppr = &pr;
//
//	test(&pr);//可以接收一级指针的地址
//	test(ppr);//可以接收二级指针变量
//
//	int* arr[10] = { 0 };
//	test(arr);//可以接收存放一级指针的数组名
//
//	return 0;
//}


//数组名，数组地址和函数名，函数地址
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = {0};
//
//	printf("%p\n",&arr);//&数组名得到数组的地址
//	printf("%p\n", arr);//数组名是首元素的地址
//
//	printf("%p\n",&ADD);//&函数名得到函数的地址
//	printf("%p\n", ADD);//函数名就是函数的地址
//	
//	return 0;
//}

//函数指针——指向函数的指针，存放函数地址
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int i = 0;
//	int* p1 = &i;
//
//	char ch = 'j';
//	char* p2 = &ch;
//
//	int arr[10] = { 0 };
//	int(*p3)[10] = &arr;//p3是指向数组的指针，存放数组的地址
//
//	//函数指针
//	int (*p4)(int,int) = &ADD;//p4是指向函数的指针，存放函数的地址
//
//	return 0;
//}

//void test(char* str)
//{
//
//}
//int main()
//{
//	void (*p5)(char*) = &test;
//
//	return 0;
//}


//函数指针的使用
//通过函数指针调用函数
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*p6)(int, int) = &ADD;
//	int(*p7)(int, int) = ADD;
//
//	//*p6——解引用找到ADD函数的地址
//	//(*p6)(3,5)——解引用调用函数，为函数后传参
//	int ret=(*p6)(3, 5);
//	int set = (*p7)(3, 5);
//	
//	printf("%d\n",ret);
//	printf("%d\n", set);
//
//	return 0;
//}

//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*p8)(int, int)=ADD;//说明ADD和p8相同，ADD == p8
//	
//	//函数调用
//	(*p8)(3, 5);//*没有实际意义
//	ADD(3, 5);
//	p8(3, 5);
//	(*****p8)(3, 5);//*没有实际意义
//
//	//不可以这样调用
//	//p8(3,5)计算出8，对8进行解引用，是错误的
//	*p8(3, 5);
//
//	return 0;
//}