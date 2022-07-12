#define _CRT_SECURE_NO_WARNINGS 1

//malloc函数和free函数
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


//colloc函数
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


//realloc函数
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
	////这里需要p指向的空间更大，需要20个int的空间
	////realloc调整
	//int *ptr=(int *)realloc(p,2000*sizeof(int));
	//if (ptr != NULL)
	//{
	//	p = ptr;
	//}

	//free(p);
	//p == NULL;



	//直接使用realloc函数
	int* p = (int*)realloc( NULL , 10*sizeof(int) );
	//直接在堆区开辟40字节的空间

	return 0;
}