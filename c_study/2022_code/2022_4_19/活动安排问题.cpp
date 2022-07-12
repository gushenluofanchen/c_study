#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#define N 15
//
//void sort(int S[], int F[], int n);
//void arrange(int S[], int F[], int n);
//int A[N] = { 0 };
//int t[N] = { 0 };
//
//void sort(int S[], int F[], int n)
//{
//    int i, j;
//    for (j = 1; j <= n; j++)       //对结束时间进行排序
//    {
//        for (i = 1; i < n; i++)   //有点类似冒泡排序
//        {
//            if (F[t[i]] > F[t[i + 1]])   //这里用t[i]而不直接用i是因为F>数组中的数据并没有交换，用t[i]存储的下标来进行索引
//            {
//                int temp = t[i];
//                t[i] = t[i + 1];
//                t[i + 1] = temp;
//            }
//        }
//    }
//}
//
//void arrange(int S[], int F[], int n)
//{
//    int i, j = 1;
//    int a, b;
//    A[t[1]] = 1;      //t[1]是结束时间最早的，会被选择
//    a = t[j];         //a的作用是暂存，t数组中存放的是排序后的下标
//    for (i = 2; i <= n; i++)
//    {
//        if (F[a] > S[t[i]])   //如果结束时间大于第t[i]个的开始时间
//        {
//            A[t[i]] = 0;
//        }
//        else
//        {
//            A[t[i]] = 1;
//            a = t[i];  //这里如果是t[j]，那么赋值后t数组会变乱，因>此用a暂存
//        }
//    }
//}
//
//int main(void)
//{
//    int S[N] = { 0 }, F[N] = { 0 };
//    int n, i;
//    printf("请输入活动的个数：");
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        t[i] = i;     //t[i]初始化，没排序之前
//        printf("请输入第%d个活动的开始时间和结束时间：", i);
//        scanf("%d %d", &S[i], &F[i]);
//    }
//
//    sort(S, F, n);
//    arrange(S, F, n);
//
//    for (i = 1; i <= n; i++)
//    {
//        if (A[i] == 1)
//            printf("%d ", i); //输出可以使用资源的活动
//    }
//    printf("\n");
//
//    for (i = 1; i <= n; i++)
//    {
//        printf("%d ", t[i]);      //排序后的结果
//    }
//    printf("\n");
//
//    return 0;
//}
//
//

