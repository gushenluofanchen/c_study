#define _CRT_SECURE_NO_WARNINGS 1

//��ӡ100��200֮�������
//#include<stdio.h>
//#include<math.h>

//�Գ���
//int main()
//{
//	int i = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж��ǲ�������
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


//�Ż�1
//int main()
//{
//	int i = 0;
//
//	//ѭ������100��200
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж��ǲ�������
//		int m = 0;
//		for (m = 2; m <=sqrt(i); m++)
//		{
//			if (i % m == 0)
//			{
//				break;//��������������ѭ��
//			}
//		}
//
//		//�ж����������Լ�����֮ǰ����������������ӡ�������
//		if (m>sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//�Ż�2
//int main()
//{
//	int i = 0;
//
//	//ѭ������100��200
//	for (i = 101; i <= 200; i += 2)
//	{
//		//�ж��ǲ�������
//		int m = 0;
//		for (m = 2; m <= sqrt(i); m++)
//		{
//			if (i % m == 0)
//			{
//				break;//��������������ѭ��
//			}
//		}
//
//		//�ж����������Լ�����֮ǰ����������������ӡ�������
//		if (m > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//goto���
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
//	printf("��ĵ�����������֮�ڹػ���������������ȡ���ػ�\n");
//	scanf("%s", arr);
//
//	if (strcmp(arr, "������") == 0)
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

	printf("��ĵ�����������֮�ڹػ���������������ȡ���ػ�\n");
	scanf("%s", arr);

	while(1)
	if (strcmp(arr, "������") == 0)
	{
		system("shutdown -a");
		break;
	}
	



	return 0;
}