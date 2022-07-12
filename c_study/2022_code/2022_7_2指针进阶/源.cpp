#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//字符指针
//int main()
//{
//	//字符指针指向单个字符
//	char ch = 'w';
//	char* pc = &ch;
//
//	//字符指针指向字符串
//	char* p = "hello bit";
//	//本质是把hello bit字符串的首字符h的地址存储在了p中
//	//hello bit是一个常量字符串，不能修改
//
//	printf("%c\n",*p);
//	return 0;
//}


//指针数组
//int main()
//{
	//int a = 10;
	//int b = 20;
	//int c = 30;
	//int* arr[3] = {&a,&b,&c};;//存放整形指针的数组

	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	printf("%d\n",*(arr[i]));
	//}

//	int a[5] = {1,2,3,4,5};
//	int b[] = {2,3,4,5,6};
//	int c[] = {3,4,5,6,7};
//
//	int* arr[3] = {a,b,c};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			/*printf("%d ", *(arr[i] + j));*/
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}






//数组指针
//int main()
//{
	//int arr[10] = {1,2,3,4,5};

	//int(*parr)[10] = &arr;
	//指向数组的指针，数组的每一个元素类型是int
	//parr指针变量的指向的数组类型是int [10]
	//其中存放的是数组的地址

	/*double* d[10];*///指针数组

	//指向指针数组的数组指针是
	/*double* (*pd)[10] = &d;*/

	/*int arr[10] = { 0 };

	int* pa = arr;
	int(*parr)[10] = &arr;

	printf("%p\n",pa);
	printf("%p\n", pa+1);

	printf("%p\n", parr);
	printf("%p\n", parr+1);



	return 0;
}*/

//数组指针的使用
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; \
//
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//对p解引用找到arr数组的地址，也就是首元素的地址
//		//(*p)+i得到每个元素的地址，对地址解引用打印地址对应的内容
//		printf("%d ",*(( * p)+i));
//	}
//
//
//	return 0;
//}
//打印二维数组
//void print2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c;j++)
//		{
//			printf("%d ", * (*(p + i) + j));
//			// *（p+i）是每一行的首地址
//			// * (*(p+i)+j)是每一行的每一个元素
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5,},{2,3,4,5,6},{3,4,5,6,7} };
//
//	print2(arr,3,5);//arr数组名是第一行数组的地址，用int（*p）[5]接受
//
//	return 0;
//}


//一维数组传参
//普通类型
//void test(int a[]) {}//可以
//void test(int a[10]) {}//可以
//void test(int* p) {}//可以
//int main()
//{
//	int arr[10] = {0};
//	test(arr);
//	return 0;
//}
//指针类型
//void test(int* a[]) {}//可以
//void test(int* a[10]) {}//可以
//void test(int** p) {}//可以
//int main()
//{
//	int* arr[10] = { 0 };
//	test(arr);//数组名是首元素的地址，int*类型首元素的地址就是二级指针
//	return 0;
//}


//二维数组传参
//数组接收
void test(int a[3][5]) {}//可以
void test(int a[][]) {}//不可以，二维数组行可以省略，列绝对不可以省略
void test(int a[][5]) {}//可以
int main()
{
	int arr[3][5] = { 0 };

	test(arr);

	return 0;
}
//指针接收
//传参过去的是数组首元素的地址，也是第一行数组的地址，应该用指向数组的指针接收
void test(int* a) {}//不可以用整形指针接收
void test(int* a[5]) {}//不可以用数组接收
void test(int (*p)[5]) {}//可以,指向数组的指针,数组有五列
void test(int** a) {}//不可以，传过去的不是指针的地址，是数组的地址
int main()
{
	int arr[3][5] = { 0 };

	test(arr);

	return 0;
}



















