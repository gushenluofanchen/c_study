#define _CRT_SECURE_NO_WARNINGS 1

//��д������������ʱ���������ַ����ĳ���
//������ʱ����
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


//�ݹ�ʵ��
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