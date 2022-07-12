#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//qsort函数的使用
//int cmp_int(const void *e1,const void *e2)
//{
//	return *(int*)e2 - *(int*)e1;
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]),cmp_int);
//
//	//打印
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}

struct stu 
{
	char name[20];
	int age;
};
int sort_by_sge(const void* e1,const void* e2)
{
	return ((struct stu*)e1) -> age - ((struct stu*)e2) ->age;
}
int sort_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
int main()
{
	struct stu s[3] = {{"zhangsan" , 30},{"lisi" , 34},{"wangwu" , 28}};
	int sz = sizeof(s) / sizeof(s[0]);

	qsort(s, sz, sizeof(s[0]), sort_by_sge);
	//qsort(s, sz, sizeof(s[0]), sort_by_name);

	return 0;
}