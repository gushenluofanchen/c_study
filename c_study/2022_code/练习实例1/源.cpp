#define _CRT_SECURE_NO_WARNINGS 1

//1.
//打印二维数组的元素
//循环
//#include<stdio.h>
//
//int main()
//{
//	int arr3[3][4] = { {1,2},{3,4},{5,6} };
//
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4;j++)
//		{
//			printf("%d ",arr3[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//指针方式
//#include<stdio.h>
//
//int main()
//{
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//
//	int i = 0;
//	int* p = &arr[0][0];
//
//
//	for (i= 0; i < 12; i++)
//	{
//		printf("%d ",*p);
//		p++;
//	}
//
//
//	return 0;
//}



//2.
//冒泡排序
//将一个降序的数组排序成升序的
//思想：两两相邻的元素进行比较，需要的话交换位置
//分趟解决，一趟解决一个元素的位置，让他来到自己应该在的位置，一共需要n-1趟
//例如，将9，8，7，6,，5，4，3，2，1，0进行排序

//#include<stdio.h>
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//冒泡排序的趟数
//	for (i = 0; i < sz - 1; i++)
//	{ 
//		//一趟排序的过程
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int ret = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = ret;
//			}
//		}
//
//	}
//}
//
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//冒泡排序
//	bubble_sort(arr,sz);
//
//	//打印排序后的数组
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}


//3.
//三子棋游戏






//4.模拟实现strcmp函数
//#include<stdio.h>

//void my_strcmp(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//
//	my_strcmp(arr1,arr2);
//	printf("%s\n",arr1);
//	
//	return 0;
//}


//优化1
//#include<stdio.h>
//
//void my_strcmp(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//  *dest = *src;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//
//	my_strcmp(arr1, arr2);
//
//	printf("%s\n",arr1);
//	return 0;
//}


//优化2
//#include<stdio.h>
//#include<assert.h>
//
//void my_strcmp(char* dest, char* src)
//{
//	assert(src != NULL);//断言
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//
//	my_strcmp(arr1, arr2);
//
//	printf("%s\n",arr1);
//	return 0;
//}


//优化3
//#include<stdio.h>
//#include<assert.h>
//
//dest的内容被修改，src的内容不可以被修改
//void my_strcmp(char* dest, const char* src)
//{
//	assert(src != NULL);//断言
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//
//	my_strcmp(arr1, arr2);
//
//	printf("%s\n",arr1);
//	return 0;
//}


//优化4
//#include<stdio.h>
//#include<assert.h>
//
////dest的内容被修改，src的内容不可以被修改
//strcmp函数返回值是目标空间的起始地址
//char* my_strcmp(char* dest, const char* src)
//{
//	assert(src != NULL);//断言
//	char* ret=dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//  return ret;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//
//	printf("%s\n", my_strcmp(arr1, arr2));
//	return 0;
//}




//5.计算器的实现
//普通方法
//#include<stdio.h

//void menu()
//{
//	printf("***** 1.Add ***** 2.Sub *****\n");
//	printf("                             \n");
//	printf("***** 3.Mul ***** 4.Div *****\n");
//	printf("                             \n");
//	printf("*****     0.退出程序    *****\n");
//	
//	
//}
//int Add(int x, int y) { return x + y; }
//int Sub(int x, int y) { return x - y; }
//int Mul(int x, int y) { return x * y; }
//int Div(int x, int y) { return x / y; }
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//
//		printf("请输入一个数字作出选择:\n");
//		scanf("%d" ,&input);
//
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//	
//
//		switch (input) 
//		{
//		case 1:
//			printf("请输入两个整数:");
//			scanf("%d %d",&x,&y);
//			ret=Add(x,y);
//			printf("ret=%d\n",ret);
//			break;
//		case 2:
//			printf("请输入两个整数:");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个整数:");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个整数:");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("输入错误，请重新输入:\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
// 
// 
//函数指针数组实现
//#include<stdio.h>
//
//void menu()
//{
//	printf("***** 1.Add加法 ***** 2.Sub减法 *****\n");
//	printf("                                     \n");
//	printf("***** 3.Mul乘法 ***** 4.Div除法 *****\n");
//	printf("                                     \n");
//	printf("*****         0.退出程序        *****\n");
//
//
//}
//
//int Add(int x, int y) { return x + y; }
//int Sub(int x, int y) { return x - y; }
//int Mul(int x, int y) { return x * y; }
//int Div(int x, int y) { return x / y; }
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//
//		menu();
//		int(*pf[5])(int, int) = { NULL,Add,Sub,Mul,Div };
//
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//
//		printf("请输入一个数字选择:\n");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个整数:\n");
//			scanf("%d %d", &x, &y);
//
//			ret = (pf[input])(x, y);
//			printf("ret=%d\n", ret);
//
//		}
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else
//			printf("输入错误，请重新输入\n");
//
//
//	} while (input);
//
//	return 0;
//}

//回调函数方式
//#include<stdio.h>
//
//void menu()
//{
//	printf("***** 1.Add ***** 2.Sub *****\n");
//	printf("                             \n");
//	printf("***** 3.Mul ***** 4.Div *****\n");
//	printf("                             \n");
//	printf("*****     0.退出程序    *****\n");
//
//
//}
//int Add(int x, int y) { return x + y; }
//int Sub(int x, int y) { return x - y; }
//int Mul(int x, int y) { return x * y; }
//int Div(int x, int y) { return x / y; }
//
//int cacl(int (*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个整数:\n");
//	scanf("%d %d", &x, &y);
//	return p(x, y);
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//
//		printf("请输入一个数字作出选择:\n");
//		scanf("%d", &input);
//
//		int ret = 0;
//
//		switch (input)
//		{
//		case 1:
//			ret = cacl(Add);
//			printf("ret=%d\n", ret);
//			break;
//		case 2:
//
//			ret = cacl(Sub);
//			printf("ret=%d\n", ret);
//			break;
//		case 3:
//			ret = cacl(Mul);
//			printf("ret=%d\n", ret);
//			break;
//		case 4:
//			ret = cacl(Div);
//			printf("ret=%d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("输入错误，请重新输入:\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}




//6.
//模拟实现strcat
//#include<stdio.h>
//#include<assert.h>
//
//void my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	//找到目标字符串中的\0
//
//	while (*dest)
//	{
//		dest++;
//	}
//	//源数据追加过去，包含\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//
//	my_strcat(arr1, arr2);
//
//	printf("%s", arr1);
//
//	return 0;
//}

//按照strcat格式
//#include<stdio.h>
//#include<assert.h>
//
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret=dest;
//	assert(dest && src);
//	//找到目标字符串中的\0
//
//	while (*dest)
//	{
//		dest++;
//	}
//	//源数据追加过去，包含\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//
//	my_strcat(arr1, arr2);
//
//	printf("%s", arr1);
//
//	return 0;
//}


//7.
//模拟实现strcmp函数
//#include<stdio.h>
//#include<assert.h>
//
//int my_strcmp(const char* p,const char* q)
//{
//	assert(p&&q);
//	while (*p == *q)
//	{
//		if (*p == '\0' || *q == '\0')
//		{
//			return 0;
//		}
//		p++;
//		q++;
//	}
//	if (*p > *q)
//		return 1;
//	if (*p < *q)
//		return -1;
//}
//
//int main()
//{
//	const char* arr1 = "abc";
//	const char* arr2= "def";
//
//	int ret = my_strcmp(arr1,arr2);
//
//	if (ret > 0)
//	{
//		printf("ch1>ch2\n");
//	}
//	if (ret < 0)
//	{
//		printf("ch1<ch2\n");
//	}
//	if (ret == 0)
//	{
//		printf("ch1=ch2\n");
//	}
//
//	return 0;
//}

//优化
//#include<stdio.h>
//#include<assert.h>
//
//int my_strcmp(const char* p, const char* q)
//{
//	assert(p && q);
//	while (*p == *q)
//	{
//		if (*p == '\0' || *q == '\0')
//		{
//			return 0;
//		}
//		p++;
//		q++;
//	}
//	return *p - *q;
//}
//
//int main()
//{
//	const char* arr1 = "abc";
//	const char* arr2 = "def";
//
//	int ret = my_strcmp(arr1, arr2);
//
//	if (ret > 0)
//	{
//		printf("ch1>ch2\n");
//	}
//	if (ret < 0)
//	{
//		printf("ch1<ch2\n");
//	}
//	if (ret == 0)
//	{
//		printf("ch1=ch2\n");
//	}
//
//	return 0;
//}




//8.
//模拟实现strstr函数
//#include<stdio.h>
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	const char* ch1 = str1;
//	const char* ch2 = str2;
//	const char* p = str1;
//
//	while (*p)
//	{
//		ch1 = p;
//		ch2 = str2;
//		while (*ch1 && *ch2 && (*ch1 == *ch2))
//		{
//			ch1++;
//			ch2++;
//		}
//		if (*ch2 == '\0')
//		{
//			return (char*) p;
//		}
//		p++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[20] = "abcdefabcdef";
//	char arr2[] = "bcd";
//
//	char* ret=my_strstr(arr1, arr2);
//	printf("%s",ret);
//
//	return 0;
//}



//9.
//模拟实现memcpy
//#include<assert.h>
//void* my_memcpy(void* dest, const void* src, unsigned int num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i[20] = { 0 };
//
//	my_memcpy(i, arr, 20);
//
//	return 0;
//}
