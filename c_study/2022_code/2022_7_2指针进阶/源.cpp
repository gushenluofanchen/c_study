#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�ַ�ָ��
//int main()
//{
//	//�ַ�ָ��ָ�򵥸��ַ�
//	char ch = 'w';
//	char* pc = &ch;
//
//	//�ַ�ָ��ָ���ַ���
//	char* p = "hello bit";
//	//�����ǰ�hello bit�ַ��������ַ�h�ĵ�ַ�洢����p��
//	//hello bit��һ�������ַ����������޸�
//
//	printf("%c\n",*p);
//	return 0;
//}


//ָ������
//int main()
//{
	//int a = 10;
	//int b = 20;
	//int c = 30;
	//int* arr[3] = {&a,&b,&c};;//�������ָ�������

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






//����ָ��
//int main()
//{
	//int arr[10] = {1,2,3,4,5};

	//int(*parr)[10] = &arr;
	//ָ�������ָ�룬�����ÿһ��Ԫ��������int
	//parrָ�������ָ�������������int [10]
	//���д�ŵ�������ĵ�ַ

	/*double* d[10];*///ָ������

	//ָ��ָ�����������ָ����
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

//����ָ���ʹ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; \
//
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//��p�������ҵ�arr����ĵ�ַ��Ҳ������Ԫ�صĵ�ַ
//		//(*p)+i�õ�ÿ��Ԫ�صĵ�ַ���Ե�ַ�����ô�ӡ��ַ��Ӧ������
//		printf("%d ",*(( * p)+i));
//	}
//
//
//	return 0;
//}
//��ӡ��ά����
//void print2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c;j++)
//		{
//			printf("%d ", * (*(p + i) + j));
//			// *��p+i����ÿһ�е��׵�ַ
//			// * (*(p+i)+j)��ÿһ�е�ÿһ��Ԫ��
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5,},{2,3,4,5,6},{3,4,5,6,7} };
//
//	print2(arr,3,5);//arr�������ǵ�һ������ĵ�ַ����int��*p��[5]����
//
//	return 0;
//}


//һά���鴫��
//��ͨ����
//void test(int a[]) {}//����
//void test(int a[10]) {}//����
//void test(int* p) {}//����
//int main()
//{
//	int arr[10] = {0};
//	test(arr);
//	return 0;
//}
//ָ������
//void test(int* a[]) {}//����
//void test(int* a[10]) {}//����
//void test(int** p) {}//����
//int main()
//{
//	int* arr[10] = { 0 };
//	test(arr);//����������Ԫ�صĵ�ַ��int*������Ԫ�صĵ�ַ���Ƕ���ָ��
//	return 0;
//}


//��ά���鴫��
//�������
void test(int a[3][5]) {}//����
void test(int a[][]) {}//�����ԣ���ά�����п���ʡ�ԣ��о��Բ�����ʡ��
void test(int a[][5]) {}//����
int main()
{
	int arr[3][5] = { 0 };

	test(arr);

	return 0;
}
//ָ�����
//���ι�ȥ����������Ԫ�صĵ�ַ��Ҳ�ǵ�һ������ĵ�ַ��Ӧ����ָ�������ָ�����
void test(int* a) {}//������������ָ�����
void test(int* a[5]) {}//���������������
void test(int (*p)[5]) {}//����,ָ�������ָ��,����������
void test(int** a) {}//�����ԣ�����ȥ�Ĳ���ָ��ĵ�ַ��������ĵ�ַ
int main()
{
	int arr[3][5] = { 0 };

	test(arr);

	return 0;
}



















