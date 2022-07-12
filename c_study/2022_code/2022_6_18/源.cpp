#define _CRT_SECURE_NO_WARNINGS 1

//打印100到200之间的素数
//#include<stdio.h>
//#include<math.h>

//试除法
//int main()
//{
//	int i = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		//判断是不是素数
//		int m = 0;
//		for (m = 2; m < i; m++)
//		{
//			if (i % m == 0)
//			{
//				break;
//			}
//		}
//
//		if (i == m)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//优化1
//int main()
//{
//	int i = 0;
//
//	//循环输入100到200
//	for (i = 100; i <= 200; i++)
//	{
//		//判断是不是素数
//		int m = 0;
//		for (m = 2; m <=sqrt(i); m++)
//		{
//			if (i % m == 0)
//			{
//				break;//不是素数，跳出循环
//			}
//		}
//
//		//判断是素数，自己本身之前的数不能整除，打印这个素数
//		if (m>sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//优化2
//int main()
//{
//	int i = 0;
//
//	//循环输入100到200
//	for (i = 101; i <= 200; i += 2)
//	{
//		//判断是不是素数
//		int m = 0;
//		for (m = 2; m <= sqrt(i); m++)
//		{
//			if (i % m == 0)
//			{
//				break;//不是素数，跳出循环
//			}
//		}
//
//		//判断是素数，自己本身之前的数不能整除，打印这个素数
//		if (m > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//goto语句
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//	char arr[20] = { 0 };
//
//	system("shutdown -s -t 120");
//
//again:
//	printf("你的电脑在两分钟之内关机，请输入我是猪取消关机\n");
//	scanf("%s", arr);
//
//	if (strcmp(arr, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//		goto again;
//
//
//
//	return 0;
//}

 #include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char arr[20] = { 0 };

	system("shutdown -s -t 120");

	printf("你的电脑在两分钟之内关机，请输入我是猪取消关机\n");
	scanf("%s", arr);

	while(1)
	if (strcmp(arr, "我是猪") == 0)
	{
		system("shutdown -a");
		break;
	}
	



	return 0;
}