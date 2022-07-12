#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>



//  //调用0地址处的函数
//	( *(void (*) () ) 0 ) ();
//	//void(*)()是函数指针类型
//	//()0是强制转换
//	//(void (*)())0是把0强制转换成函数指针类型的地址
//	//* (void (*)())0强制转换成函数指针类型地址后进行解引用找到函数，函数无参，返回类型是void
//	//解引用找到函数后进行函数调用(  * (void (*)())0  ) ()


////signal函数的声明
//void (*signal(int, void(*)(int)))(int)
////等价于 void(*)(int)	signal  (int, void(*)(int)，但是语法不支持这样写
////如果返回类型是函数指针类型的话，*必须和函数名放在一起
////signal和圆括号结合，说明signal是一个函数名
////signal函数的参数有两个，一个是int，一个是void(*)(int)函数指针类型
////signal函数的返回类型也是一个void(*)(int)类型的函数指针 



////类型重定义
//typedef void(*pfun_t)(int);//把void (*) (int)重定义为pfun_t
//
////上面signal函数的声明可以改写成
//pfun_t signal(int, pfun_t)





////函数指针数组
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//
//	int (*parr[2])(int, int) = {pf1,pf2};//函数指针数组的初始化
//	int (*parr[2])(int, int) = {Add,Sub };
//	//parr是一个函数指针数组，存放的是函数指针类型
//	//parr有两个元素，每个元素是一个函数指针，每个函数的指针的两个参数是int,int,返回类型也是int
//
//	return 0;
//}



//函数指针数组的使用
//计算器的实现
//普通方法
//void menu()
//{
//	printf("***** 1.Add ***** 2.Sub *****\n");
//	printf("                             \n");
//	printf("***** 3.Mul ***** 4.Div *****\n");
//	printf("                             \n");
//	printf("*****     0.退出程序    *****\n");
//	
//	
//}
//int Add(int x, int y) { return x + y; }
//int Sub(int x, int y) { return x - y; }
//int Mul(int x, int y) { return x * y; }
//int Div(int x, int y) { return x / y; }
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//
//		printf("请输入一个数字作出选择:\n");
//		scanf("%d" ,&input);
//
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//	
//
//		switch (input) 
//		{
//		case 1:
//			printf("请输入两个整数:");
//			scanf("%d %d",&x,&y);
//			ret=Add(x,y);
//			printf("ret=%d\n",ret);
//			break;
//		case 2:
//			printf("请输入两个整数:");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个整数:");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个整数:");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("输入错误，请重新输入:\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}




//函数指针数组实现
//void menu()
//{
//	printf("***** 1.Add加法 ***** 2.Sub减法 *****\n");
//	printf("                                     \n");
//	printf("***** 3.Mul乘法 ***** 4.Div除法 *****\n");
//	printf("                                     \n");
//	printf("*****         0.退出程序        *****\n");
//	
//	
//}
//
//int Add(int x, int y) { return x + y; }
//int Sub(int x, int y) { return x - y; }
//int Mul(int x, int y) { return x * y; }
//int Div(int x, int y) { return x / y; }
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//
//		menu();
//
//		//转移表
//		int(*pf[5])(int, int) = { NULL,Add,Sub,Mul,Div };
//
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//
//		printf("请输入一个数字选择:\n");
//		scanf("%d",&input);
//
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个整数:\n");
//			scanf("%d %d", &x, &y);
//
//			ret = (pf[input])(x, y);
//			printf("ret=%d\n", ret);
//
//		}
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else
//			printf("输入错误，请重新输入\n");
//
//
//	} while (input);
//
//	return 0;
//}


//回调函数方式
void menu()
{
	printf("***** 1.Add ***** 2.Sub *****\n");
	printf("                             \n");
	printf("***** 3.Mul ***** 4.Div *****\n");
	printf("                             \n");
	printf("*****     0.退出程序    *****\n");
	
	
}
int Add(int x, int y) { return x + y; }
int Sub(int x, int y) { return x - y; }
int Mul(int x, int y) { return x * y; }
int Div(int x, int y) { return x / y; }

int cacl (int (*p)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请输入两个整数:\n");
	scanf("%d %d",&x,&y);
	return p(x,y);
}

int main()
{
	int input = 0;
	
	do
	{
		menu();

		printf("请输入一个数字作出选择:\n");
		scanf("%d" ,&input);

		int ret = 0;
	
		switch (input) 
		{
		case 1:
			ret=cacl(Add);
			printf("ret=%d\n",ret);
			break;
		case 2:
			
			ret = cacl(Sub);
			printf("ret=%d\n", ret);
			break;
		case 3:
			ret=cacl(Mul);
			printf("ret=%d\n", ret);
			break;
		case 4:
			ret=cacl(Div);
			printf("ret=%d\n", ret);
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("输入错误，请重新输入:\n");
			break;
		}
	} while (input);

	return 0;
}
