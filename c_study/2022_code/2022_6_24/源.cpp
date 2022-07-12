#define _CRT_SECURE_NO_WARNINGS 1
//输入一个非负整数，返回组成他的数字之和（递归实现）
//#include<stdio.h>
//
//int digitsum(int n)
//{
//	if (n > 9)
//		return digitsum(n / 10) + n % 10;
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 0;
//
//	printf("请输入一个整数：");
//	scanf("%d",&n);
//
//	int sum=digitsum(n);
//
//	printf("%d\n",sum);
//
//	return 0;
//}


//求n的k次方（递归实现）
//#include<stdio.h>
//
//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k < 0)
//		return 1.0 / (Pow(n, -k));
//	else
//		return 1.0;
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//
//	printf("请输入两个整数：");
//	scanf("%d %d",&n,&k);
//
//	double ret=Pow(n,k);
//	printf("%lf\n",ret);
//	
//	return 0;
//}


#include<stdio.h>
#include<string.h>

int main()
{
	//char ch1[5] = { 'b','i','t' };//数组内容是b,i,t,0,0；长度是5

	//printf("%d\n", sizeof(ch1));
	//printf("%d\n", sizeof(ch1) / sizeof(ch1[1]));

	//char ch2[] = { 'b','i','t' };//数组内容是b,i,t；长度是3

	//char ch3[5] = "bit";//数组内容是b,i,t,\0,0；长度是5
	//char ch4[] = "bit";//数组内容是b,i,t.\0；长度是4

	//char ch5[] = "bit";
	//char ch6[] = {'b','i','t'};

	//printf("%s\n",ch5);
	//printf("%s\n", ch6);

	//printf("%d\n",strlen(ch5));//长度是3
	//printf("%d\n",strlen( ch6));//长度是随机值 

	//int arr[10] = { 0 };

	//arr[4] = 5;

	//printf("%d\n",sizeof(arr));
	//printf("%d\n",sizeof(arr)/sizeof(arr[1]));

	//printf("--------------------------------\n");

	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[1]);
	//for (i = 1; i < sz;i++)
	//{
	//	printf("%d ",arr[i]);
	//}

	/*int arr[10] = { 0 };
	arr[4] = 5;
	int i = 0;

	for (i = 1; i < 10; i++)
	{
		printf("&arr[%d]=%p\n",i, &arr[i]);
	}*/

	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	//int* p = arr;
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ",*p);
	//	p++;
	//}

	return 0;
}
