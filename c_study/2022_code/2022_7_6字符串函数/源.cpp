#define _CRT_SECURE_NO_WARNINGS 1


//strlen��ʹ��
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


//ģ��ʵ��strlen����
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


//strcpy����
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



//strcat����
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


//ģ��ʵ��strcat
#include<stdio.h>
#include<assert.h>

void my_strcat(char*dest, const char*src)
{
	assert(dest && src);
	//�ҵ�Ŀ���ַ����е�\0
	
	while (*dest)
	{
		dest++;
	}
	//Դ����׷�ӹ�ȥ������\0
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

