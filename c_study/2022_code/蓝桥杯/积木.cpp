#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int sum(int N)
{
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;


	if (N % 3 == 0)
		sum1 = N / 3 * 5;
		printf("%d\n", sum1);
	else
		{
			if (N % 3 == 1)
			sum2 = (N - 1) / 3 * 5 + 1;
			printf("%d\n", sum2);
			else
			{
				sum3 = (N - 2) / 3 * 5 + 2;
				printf("%d\n", sum3);
			}
		}
}

int main()
{
	int N = 0;

	scanf("%d", &N);

	printf("%d", sum(N));
	return 0;
}