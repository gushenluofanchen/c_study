#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//
//	i = a++ && ++b && d++;
//
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);//1,2,3,4
//
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//
//	i = a++ && ++b && d++;
//
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);//2,3,3,5
//
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//
//	i = a++ || ++b || d++;
//
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);//2,3,3,4
//
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	printf("%d",arr[4]);//[ ]就是下标引用操作符
//	[ ]的操作数有两个，arr和4
//
//	return 0;
//}



//#include<stdio.h>
//
////创建一个自定义类型，结构体book
//struct book
//{
//	//结构体的成员（变量）
//	char name[20];
//	char id[20];
//	int price;
//};
//
//int main()
//{
//	//结构体初始化
//	struct book b = {"c语言","20220627",50};
//
//	printf("书名是 %s\n",b.name);
//	printf("书号是 %s\n",b.id );
//	printf("价格是 %d\n",b.price );
//
//	return 0;
//}



//#include<stdio.h>
//
////创建一个自定义类型，结构体book
//struct book
//{
//	//结构体的成员（变量）
//	char name[20];
//	char id[20];
//	int price;
//};
//
//int main()
//{
//	//结构体初始化
//	struct book b = { "c语言","20220627",50 };
//	struct book* pb = &b;
//
//	printf("书名是 %s\n", pb->name);
//	printf("书号是 %s\n", pb->id);
//	printf("价格是 %d\n", pb->price);
//
//	return 0;
//}


#include<stdio.h>

int main()
{
	//a和b都是字符类型，不够一个int类型，运算时候发生整形提升

	char a = 3;
	//二进制    为00000000 00000000 00000000 00000011
	//实际a中发生截断，存储的是最低的一个字节
	//a = 00000011
	char b = 127;
	//b = 01111111

	//运算的时候发生整形提升，有符号char提升补充符号位
	//a提升补0  为00000000 00000000 00000000 00000011
	//b提升补0  为00000000 00000000 00000000 01111111
	//相加得到    00000000 00000000 00000000 10000010

	//c是char类型，发生截断，c = 10000010

	char c = a + b;

	//%d打印c，c会发生整形提升
	//c提升补1  为11111111 11111111 11111111 10000010
	//将c的补码转换成原码
	//c反码减1  为11111111 11111111 11111111 10000001
	//将c的反码转换成原码
	//c原码取反 为10000000 00000000 00000000 01111110
	//得到c = -126
	printf("%d",c);

	return 0;
}
