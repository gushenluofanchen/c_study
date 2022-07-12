#define _CRT_SECURE_NO_WARNINGS 1

//strcmp函数
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	const char* arr1 = "abc";
//	const char* arr2 = "ade";
//
//	int ret=strcmp(arr1,arr2);//arr1小于arr2，返回负数；arr1大于arr2，返回正数；arr1等于arr2，返回0
//	printf("%d",ret);
//
//	return 0;
//}


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


//strncpy函数
//#include<stdio.h>
//#include<string.h>

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "hello";
//
//	strncpy(arr1,arr2,3);
//	printf("%s",arr1);
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdefghijk";
//	char arr2[] = "hello";
//
//	/*strncpy(arr1,arr2,3);
//	printf("%s",arr1);*/
//
//	strncpy(arr1, arr2, 8);
//	printf("%s", arr1);
//
//	return 0;
//}


//strncat函数
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = "abcde ";
//	char arr2[] = "world";
//
//	strncat(arr1,arr2,3);
//
//	printf("%s",arr1);
//
//	return 0;
//}

//strncmp函数
#include<stdio.h>
#include<string.h>
int main()
{
	const char* p = "abcdef";
	const char* q = "abclmn";

	int ret = strncmp(p,q,3);
	int set = strncmp(p,q,4);

	printf("%d\n", ret);
	printf("%d\n", set);

	return 0;
}