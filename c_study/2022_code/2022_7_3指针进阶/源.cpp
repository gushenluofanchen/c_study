#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//һ��ָ�봫��
//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(ptr+i));
//	}
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(p, sz);
//
//	return 0;
//}



//һ��ָ����Ϊ���������Խ�������ʵ�ʲ���
//void test(char* ptr) {}
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//
//	test(&ch);//���Խ��ձ����ĵ�ַ
//	test(p);//���Խ���һ��ָ�����
//
//
//	return 0;
//}


//����ָ�봫��
//void test(int** p)
//{
//	**p = 20;
//}
//int main()
//{
//	int i = 10;
//	int* pr = &i;
//	int** ppr = &pr;
//
//	test(ppr);
//
//	printf("%d",i);
//	return 0;
//}


//����ָ����Ϊ�������Խ�������ʵ�ʲ���
//void test(int** p)
//{
//	**p = 20;
//}
//int main()
//{
//	int i=10;
//	int* pr = &i;
//	int** ppr = &pr;
//
//	test(&pr);//���Խ���һ��ָ��ĵ�ַ
//	test(ppr);//���Խ��ն���ָ�����
//
//	int* arr[10] = { 0 };
//	test(arr);//���Խ��մ��һ��ָ���������
//
//	return 0;
//}


//�������������ַ�ͺ�������������ַ
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = {0};
//
//	printf("%p\n",&arr);//&�������õ�����ĵ�ַ
//	printf("%p\n", arr);//����������Ԫ�صĵ�ַ
//
//	printf("%p\n",&ADD);//&�������õ������ĵ�ַ
//	printf("%p\n", ADD);//���������Ǻ����ĵ�ַ
//	
//	return 0;
//}

//����ָ�롪��ָ������ָ�룬��ź�����ַ
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int i = 0;
//	int* p1 = &i;
//
//	char ch = 'j';
//	char* p2 = &ch;
//
//	int arr[10] = { 0 };
//	int(*p3)[10] = &arr;//p3��ָ�������ָ�룬�������ĵ�ַ
//
//	//����ָ��
//	int (*p4)(int,int) = &ADD;//p4��ָ������ָ�룬��ź����ĵ�ַ
//
//	return 0;
//}

//void test(char* str)
//{
//
//}
//int main()
//{
//	void (*p5)(char*) = &test;
//
//	return 0;
//}


//����ָ���ʹ��
//ͨ������ָ����ú���
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*p6)(int, int) = &ADD;
//	int(*p7)(int, int) = ADD;
//
//	//*p6�����������ҵ�ADD�����ĵ�ַ
//	//(*p6)(3,5)���������õ��ú�����Ϊ�����󴫲�
//	int ret=(*p6)(3, 5);
//	int set = (*p7)(3, 5);
//	
//	printf("%d\n",ret);
//	printf("%d\n", set);
//
//	return 0;
//}

//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*p8)(int, int)=ADD;//˵��ADD��p8��ͬ��ADD == p8
//	
//	//��������
//	(*p8)(3, 5);//*û��ʵ������
//	ADD(3, 5);
//	p8(3, 5);
//	(*****p8)(3, 5);//*û��ʵ������
//
//	//��������������
//	//p8(3,5)�����8����8���н����ã��Ǵ����
//	*p8(3, 5);
//
//	return 0;
//}