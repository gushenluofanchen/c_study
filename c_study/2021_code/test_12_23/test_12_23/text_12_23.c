#include<stdio.h>

//int main(void)
//{
//    int height, length, width, volume, weight;
//
//    height = 8;
//    length = 12;
//    width = 10;
//    volume = height * length * width;
//    weight = (volume + 165) / 166;
//
//    printf("Dimensions:%dx%dx%d\n", height, length, width);
//    printf("Volume:%d\n", volume);
//    printf("Dimensional weigth(pounds):%d\n", weight);
//
//    return 0;
//}


//全局变量
int a = 100;

int main()
{
    //局部变量
    int a = 10;

        printf("%d\n", a);

    return 0;
}