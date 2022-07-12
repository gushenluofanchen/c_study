#define _CRT_SECURE_NO_WARNINGS 1

//编写函数不创建临时变量，求字符串的长度
//创建临时变量
//#include<stdio.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	char arr[20] = { 0 };
//
//	scanf("%s",arr);
//
//	printf("%d",my_strlen(arr));
//
//	return 0;
//}


//递归实现
//#include<stdio.h>
//
//int my_strlen(char*str)
//{
//	if (*str != '\0')
//	{
//		return 1+my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[20] = { 0 };
//
//	scanf("%s",arr);
//
//	printf("%d",my_strlen(arr));
//
//	return 0;
//}