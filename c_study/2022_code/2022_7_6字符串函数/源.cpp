#define _CRT_SECURE_NO_WARNINGS 1


//strlen的使用
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char ch1[] = {'b','i','t'};
//	const char ch2[] = "bit";
//
//	printf("%d\n", strlen(ch1));
//	printf("%d\n", strlen(ch2));
//
//
//	return 0;
//}


//模拟实现strlen函数
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* p)
//{
//	int count = 0;
//	assert(p != NULL);
//	while ( *p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	char* p = arr;
//
//	int ret=my_strlen(p);
//	printf("%d\n",ret);
//
//	return 0;
//}


//strcpy函数
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr[20] = "**************";
//	char ch[] = "hello";
//
//	strcpy(arr,ch);
//
//	printf("%s",arr);
//
//	return 0;
//}



//strcat函数
//#include<string.h>
//int main()
//{
//	char arr1[20] = "hello \0*********";
//	char arr2[] = "world";
//
//	strcat(arr1,arr2);
//
//	return 0;
//}


//模拟实现strcat
#include<stdio.h>
#include<assert.h>

void my_strcat(char*dest, const char*src)
{
	assert(dest && src);
	//找到目标字符串中的\0
	
	while (*dest)
	{
		dest++;
	}
	//源数据追加过去，包含\0
	while (*dest++ = *src++)
	{
		;
	}
}
int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";

	my_strcat(arr1,arr2);

	printf("%s",arr1);

	return 0;
}

