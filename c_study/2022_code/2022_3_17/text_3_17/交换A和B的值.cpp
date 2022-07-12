#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void swop(int* pa, int* pb)
{
	int z;

	z = *pa;
	*pa = *pb;
	*pb = z;

}

int main()
{
	int a = 10;
	int b = 20;
	
	printf("a=%d b=%d\n", a, b);
	swop(&a, &b);
	printf("a=%d b=%d\n", a, b);



	return 0;
}