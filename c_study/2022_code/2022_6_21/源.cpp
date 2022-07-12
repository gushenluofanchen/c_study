#define _CRT_SECURE_NO_WARNINGS 1

//传址调用
//写一个函数，每次调用函数，将n的值加1
//#include<stdio.h>
//
//void add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int n = 0;
//
//	add(&n);
//	printf("%d\n",n);
//
//	add(&n);
//	printf("%d\n", n);
//
//	add(&n);
//	printf("%d\n", n);
//
//	return 0;
//}


//链式访问
//#include<stdio.h>
//
//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));//printf返回的参数是打印在屏幕上的个数
//
//	return 0;
//}


//接受一个无符号整型，打顺序打印他的每一位，例如输入1234，打印1 2 3 4
//#include<stdio.h>
//
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d ",n%10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//
//	scanf("%u",&num);
//
//	print(num);
//
//	return 0;
//}