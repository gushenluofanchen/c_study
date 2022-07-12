#define _CRT_SECURE_NO_WARNINGS 1

//strstr的使用
//#include<stdio.h>
//#include<string>
//
//int main()
//{
//	char arr[20] = "abcdefabcdef";
//	char ch[] = "bcd";
//
//	char* ret = strstr(arr,ch);
//	printf("%s",ret);
//
//	return 0;
//}

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


//strtok函数
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr[] = "3170446830@qq.com";
//	const char* p = "@.";
//
//
//	char tmp[20] = { 0 };
//	strcpy(tmp,arr);
//	
//	char* ret=NULL;
//
//	for(ret=strtok(tmp,p) ; ret != NULL ; ret=strtok(NULL,p))
//	{
//		printf("%s\n",ret);
//	}
//
//	return 0;
//}


//字符操作函数
//#include<ctype.h>
//#include<stdio.h>
//
//int main()
//{
//	char ch = '#';
//	char arr = '8';
//
//	int ret=isdigit(ch);
//	int set = isdigit(arr);
//
//	printf("%d\n",ret);
//	printf("%d\n",set);
//
//
//	return 0;
//}



//字符转换函数tolower
//#include<stdio.h>
//#include<ctype.h>
//
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s",arr);
//
//	int i = 0;
//	while (arr[i]!='\0')
//	{
//		if ( isupper(arr[i]) )
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		printf("%c ", arr[i]);
//		i++;
//	}
//
//	return 0;
//}
//






//复制内存函数memcpy
//#include<string.h>
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = {0};
//
//	memcpy(arr2,arr1,20);
//
//	return 0;
//}



//模拟实现memcpy
//#include<assert.h>
// void* my_memcpy(void* dest, const void* src, unsigned int num)
//{
//	 void* ret = dest;
//	 assert(dest&&src);
//	 while (num--)
//	 {
//		 *(char*)dest = *(char*)src;
//		 dest=(char*)dest + 1;
//		 src = (char*)src + 1;
//	 }
//	 return ret;
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i[20] = {0};
//
//	my_memcpy(i,arr,20);
//
//	return 0;
//}



//memmove函数
//#include<string.h>
//int main()
//{
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	memmove(arr+2,arr,20);
//
//	return 0;
//}



//memcmp函数
//#include<string.h>
//#include<stdio.h>
//
//int main()
//{
//	float arr1[] = {1.0,2.0,3.0};
//	float arr2[] = {2.0,3.0};
//
//	int ret=memcmp(arr1,arr2,8);
//
//	printf("%d\n",ret);
//
//	return 0;
//}


//memset函数
#include<string.h>

int main()
{
	int arr[10] = { 0 };

	memset(arr, 1, 20);

	return 0;
}