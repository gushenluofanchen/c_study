#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include<stdlib.h>


#include"标头.h"


int main()
{
    int num;
    int count = 0;

    printf("请输入一个数：\n");
    scanf("%d", &num);

    if (num % 4 == 0)
    {
        count++;
    }
    if (num % 7 == 0)
    {
        count++;
    }
    if (num % 9 == 0)
    {
        count++;
    }

    switch (count)
    {
    case 0:
        printf("%d不能被4，7，9任一个数整除\n", num);
        break;
    case 1:
        printf("%d只能被其中一个数整除\n", num);
        print(num);
        printf("\n");
        break;
    case 2:
        printf("%d能同时被其中的2个数整除\n", num);
        print(num);
        printf("\n");
        break;
    case 3:
        printf("%d能同时被4，7，9整除\n", num);
        break;
    default:
        break;
    }
    return 0;
}
