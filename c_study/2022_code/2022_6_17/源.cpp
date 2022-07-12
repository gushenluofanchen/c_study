#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//int main()
//{
//	int i = 1;
//
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//
//	i = i + 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch;
//	ch = getchar();
//	putchar(ch);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//
//
//	for(i=1;i<=10;i++)
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//
//
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//
//
//	do
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		i++;
//
//	} while (i < 10);
//
//		return 0;
//}

int main()
{
	int i = 1;


	do
	{
		if (i == 5)
			continue;

		printf("%d ", i);
		i++;

	} while (i < 10);

	return 0;
}