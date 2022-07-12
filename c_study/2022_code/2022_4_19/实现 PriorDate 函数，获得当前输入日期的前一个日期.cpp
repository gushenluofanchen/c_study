#define _CRT_SECURE_NO_WARNINGS 1

/*PriorDate函数
特殊情况为：
闰年3.1
每年的1.1  8.1
*/
//#include<cstdio>
//#include<algorithm>
//using namespace std;
///*闰年函数*/
//int Run(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int PriorDate(int a, int b, int c)
//{
//	if (b == 3 && c == 1 && Run(a) == 1)//闰年3.1前一天为2.29 
//	{
//		printf("%d年%d月%d日的前一天是：\n", a, b, c);
//		printf("%d年%d月%d日\n", a, 2, 29);
//	}
//	if (b == 3 && c == 1 && Run(a) == 0)//平年3.1前一天为2.28
//	{
//		printf("%d年%d月%d日的前一天是：\n", a, b, c);
//		printf("%d年%d月%d日\n", a, 2, 28);
//	}
//	if (b == 1 && c == 1)//1.1前一天为a-1年.12.31 
//	{
//		printf("%d年%d月%d日的前一天是：\n", a, b, c);
//		printf("%d年%d月%d日\n", a - 1, 12, 31);
//	}
//	if (b == 8 && c == 1)//8.1前一天为7.31
//	{
//		printf("%d年%d月%d日的前一天是：\n", a, b, c);
//		printf("%d年%d月%d日\n", a, 7, 31);
//	}
//	if ((b == 5 || b == 7 || b == 10 || b == 12) && c == 1)//b.1前一天为b-1.30
//	{
//		printf("%d年%d月%d日的前一天是：\n", a, b, c);
//		printf("%d年%d月%d日\n", a, b - 1, 30);
//	}
//	if ((b == 2 || b == 4 || b == 6 || b == 9 || b == 11) & c == 1)//b.1前一天为b-1.31
//	{
//		printf("%d年%d月%d日的前一天是：\n", a, b, c);
//		printf("%d年%d月%d日\n", a, b - 1, 31);
//	}
//	if (c != 1)//其余日期均为天数c-1
//	{
//		printf("%d年%d月%d日的前一天是：\n", a, b, c);
//		printf("%d年%d月%d日\n", a, b, c - 1);
//	}
//}
//int main()
//{
//	int ye;
//	int mo;
//	int da;
//	printf("请输入某一天的日期,如2004 5 20\n");
//	while (scanf("%d %d %d", &ye, &mo, &da) != EOF)
//		PriorDate(ye, mo, da);
//	return 0;
//}