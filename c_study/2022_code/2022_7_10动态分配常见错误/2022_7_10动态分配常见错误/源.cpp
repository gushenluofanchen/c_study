#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>


//1.��NULLָ��Ľ�����
//int main()
//{
//	int* p = (int*)malloc(1000000000);
//	int i = 0;
//	//û�ж�malloc�����ķ���ֵ���пմ���
//	for (i = 0; i < 10; i++)
//	{
//		*(p+i)=1;
//	}
//
//	return 0;
//}


//2.�Զ�̬���ٵĿռ����Խ�����
//int main()
//{
//	int* p = (int*)malloc( 10*sizeof(int) );
//	if (p != NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 40; i++)
//	{
//		*(p + i) = 1;//10�����Σ�10��ѭ��֮����Խ�����
//	}
//
//	free(p);
//	p == NULL;
//
//	return 0;
//}


//3.ʹ��free�����ͷŷǶ�̬���ٵĿռ�
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	//use
//
//	free(p);//p��ջ��
//	p == NULL;
//
//	return 0;
//}


//4.ʹ��free�����ͷŶ�̬�ڴ��һ����
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//
//	if (p!= NULL)
//	{
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = 1;
//		
//	}
//	free(p);//p��λ���Ѿ������˱仯
//	p == NULL;
//
//	return 0;
//}


//5.��ͬһ�鶯̬���ٵĿռ����ͷ�
//int main()
//{
//	int* p = (int*)malloc(100);
//	if (p != NULL)
//	{
//		return 1;
//	}
//	//ʹ��
//	free(p);
//
//	free(p);//����ͷ�
//
//	return 0;
//}


//6.��̬���ٵĿռ������ͷ�
//void test(void)
//{
//	int* p = (int*)malloc(100);
//	return;
//	//û���ͷſռ�
//}
//
//int main()
//{
//	test();
//
//	return 0;
//})