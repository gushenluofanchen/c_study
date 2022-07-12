#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int max(int a, int b) 
{
	int tem = 0;
	if (a > b) 
	{
		return a;
	}
	else 
		return b;
}

int main() {
	int w[5] = { 1,2,3,4,5 };
	int v[5] = { 2,3,4,5,6 };
	int c = 10;
	int f[6][11] = { {0} };
	for (int i = 1; i <= 5; i++) 
	{
		for (int j = 0; j <= 10; j++) 
		{
			if (j < w[i - 1]) 
			{
				f[i][j] = f[i - 1][j];
			}
			else 
			{
				f[i][j] = max(f[i - 1][j], f[i - 1][j - w[i - 1]] + v[i - 1]);
			}
		}
	}

	int count = 0;

	for (int x = 0; x < 6; x++) 
	{
		for (int y = 0; y < 11; y++)
		{
			printf("%3d", f[x][y]);
			count++;
			if (count % 11 == 0) 
			{
				printf("\n");
			}
		}
	}

	printf("%2d", f[5][10]);

	return 0;
}