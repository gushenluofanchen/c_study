#define _CRT_SECURE_NO_WARNINGS 1
//数组的初始化
//#include<stdio.h>

//int main()
//{
//	int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};//完全初始化
//	int arr2[3][4] = {1,2,3,4,5,6};//不完全初始化，后面整形补0，字符类型补\0
//	int arr3[3] [4] = { {1,2},{3,4},{5,6} };//以行为基准初始化
//	int arr4[][4] = { {1,2},{3,4},{5,6} };//行数可以省略，列数不能省略
//
//	int arr5[2][2] = {arr5[0][0]=2,arr5[1][1]=2};
//
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		for(j=0;j<4)
//	}
//
//	return 0;
//}



//打印二维数组的元素和地址
//#include<stdio.h>
//
//int main()
//{
//	int arr3[3][4] = { {1,2},{3,4},{5,6} };
//
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4;j++)
//		{
//			printf("%d ",arr3[i][j]);
//		}
//		printf("\n");
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n",i,j,&arr3[i][j]);
//		}
//	}
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = {0};
//
//	printf("%p\n",&arr);
//	printf("%p\n", &arr+1);//跳过数组，地址是一个随机值
//
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);//数组第二个元素的地址
//
//	printf("%p\n", arr[0]);//首元素的地址
//
//	return 0;
//}

