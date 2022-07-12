//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//
//int count(int a, int b, int n)
//{
//	int sum = 5 * a + 2 * b;
//	int day = 7;
//	while (sum > n)
//	{
//		sum = sum + (5 * a + 2 * b);
//		day = day + 7;
//	}
//
//
//	if (sum == n)
//		return day;
//	else
//		if ((sum - 2 * b - 4 * a) < n)
//			return day - 6;
//		else
//			if ((sum - 2 * b - 3 * a) < n)
//				return day - 5;
//			else
//				if ((sum - 2 * b - 2 * a) < n)
//					return day - 4;
//				else
//					if ((sum - 2 * b - 1 * a) < n)
//						return day - 3;
//					else
//						if ((sum - 2 * b) < n)
//							return day - 2;
//						else
//							return day - 1;
//
//
//	return day;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int n = 0;
//
//	scanf("%d %d %d\n", &a, &b, &n);
//
//	printf("%d\n", count(a, b, n));
//
//	return 0;
//}