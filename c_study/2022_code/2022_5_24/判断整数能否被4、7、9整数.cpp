#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include<stdlib.h>


#include"��ͷ.h"


int main()
{
    int num;
    int count = 0;

    printf("������һ������\n");
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
        printf("%d���ܱ�4��7��9��һ��������\n", num);
        break;
    case 1:
        printf("%dֻ�ܱ�����һ��������\n", num);
        print(num);
        printf("\n");
        break;
    case 2:
        printf("%d��ͬʱ�����е�2��������\n", num);
        print(num);
        printf("\n");
        break;
    case 3:
        printf("%d��ͬʱ��4��7��9����\n", num);
        break;
    default:
        break;
    }
    return 0;
}
