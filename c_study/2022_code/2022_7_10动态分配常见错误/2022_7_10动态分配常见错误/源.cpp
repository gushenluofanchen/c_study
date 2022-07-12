#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>


//1.对NULL指针的解引用
//int main()
//{
//	int* p = (int*)malloc(1000000000);
//	int i = 0;
//	//没有对malloc函数的返回值做判空处理
//	for (i = 0; i < 10; i++)
//	{
//		*(p+i)=1;
//	}
//
//	return 0;
//}


//2.对动态开辟的空间进行越界访问
//int main()
//{
//	int* p = (int*)malloc( 10*sizeof(int) );
//	if (p != NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 40; i++)
//	{
//		*(p + i) = 1;//10个整形，10次循环之后发生越界访问
//	}
//
//	free(p);
//	p == NULL;
//
//	return 0;
//}


//3.使用free函数释放非动态开辟的空间
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	//use
//
//	free(p);//p在栈区
//	p == NULL;
//
//	return 0;
//}


//4.使用free函数释放动态内存的一部分
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//
//	if (p!= NULL)
//	{
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = 1;
//		
//	}
//	free(p);//p的位置已经发生了变化
//	p == NULL;
//
//	return 0;
//}


//5.对同一块动态开辟的空间多次释放
//int main()
//{
//	int* p = (int*)malloc(100);
//	if (p != NULL)
//	{
//		return 1;
//	}
//	//使用
//	free(p);
//
//	free(p);//多次释放
//
//	return 0;
//}


//6.动态开辟的空间忘记释放
//void test(void)
//{
//	int* p = (int*)malloc(100);
//	return;
//	//没有释放空间
//}
//
//int main()
//{
//	test();
//
//	return 0;
//})