#define _CRT_SECURE_NO_WARNINGS 1

//malloc������free����
//#include<stdlib.h>
//#include<stdio.h>
//
//int main()
//{
//	int *p=(int*)malloc(10*sizeof(int));
//
//	if (p == NULL)
//	{
//		perror("main");
//	}
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",p[i]);
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//colloc����
//#include<stdlib.h>
//#include<stdio.h>
//
//int main()
//{
//	int* p = (int*)calloc(10,4);
//	
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	free(p);
//	p==NULL;
//
//	return 0;
//}


//realloc����
#include<stdlib.h>
#include<stdio.h>

int main()
{
	//int* p = (int*)calloc(10, sizeof(int));

	//if (p == NULL)
	//{
	//	perror("main");
	//	return 1;
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	 *(p + i)=5;
	//}
	////������Ҫpָ��Ŀռ������Ҫ20��int�Ŀռ�
	////realloc����
	//int *ptr=(int *)realloc(p,2000*sizeof(int));
	//if (ptr != NULL)
	//{
	//	p = ptr;
	//}

	//free(p);
	//p == NULL;



	//ֱ��ʹ��realloc����
	int* p = (int*)realloc( NULL , 10*sizeof(int) );
	//ֱ���ڶ�������40�ֽڵĿռ�

	return 0;
}