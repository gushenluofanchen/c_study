#define _CRT_SECURE_NO_WARNINGS 1



//#include<stdio.h>
//#define MAX 200
//
//typedef struct Solution
//{
//    float x[MAX]; //��ʾ�ú���Ʒ���ڶ��ٱ�����
//    int order[MAX];//��ʾ��Ʒ����ţ��൱������
//
//}Solution;
//
//Solution X;
//int m = 15;//��������
//int n = 7;//��Ʒ����
//int p[] = { 10,5,15,7,6,18,3 };
//int w[] = { 2,3,5,7,1,4,1 };
//
//
//void GreedyKnapsack(int weight[]) {
//    float cu;
//    int i;
//    cu = float(m);
//
//    for (i = 0; i < n; i++) {
//        if (weight[i] > cu)
//            break;
//        X.x[i] = 1;
//        cu = cu - weight[i];
//    }
//    if (i < n) {
//        X.x[i] = cu / weight[i];
//    }
//}
////����ֵ����
//bool compare1(int i, int j) {
//    if ((p[i] < p[j]))
//        return true;
//    else return false;
//}
////����������
//bool compare2(int i, int j) {
//    if ((w[i] > w[j]))
//        return true;
//    else return false;
//}
//
//// ����ֵ/��������
//bool compare3(int i, int j) {
//    if ((float)(p[i] / w[i] < p[i] / w[j]))
//        return true;
//    else return false;
//}
//void swap(int& a, int& b) {
//    int t = a;
//    a = b;
//    b = t;
//}
//
//void sort(int type) {
//
//    int i, j;
//    for (i = 0; i < n - 1; i++) {
//        int k = i;
//        for (j = i + 1; j < n; j++) {
//            if (type == 1) {
//                if (compare1(k, j))
//                    k = j;
//            }
//            else if (type == 2) {
//                if (compare2(k, j))
//                    k = j;
//            }
//            else
//            {
//                if (compare3(k, j))
//                    k = j;
//            }
//            if (k != i) {
//                swap(p[i], p[k]);
//                swap(w[i], w[k]);
//                swap(X.order[i], X.order[k]);
//            }
//
//        }
//    }
//}
//
//void init() {
//    for (int i = 0; i < n; i++) {
//        X.order[i] = i;
//        X.x[i] = 0;
//    }
//}
//
//void show()
//{
//    float total = 0, weight = 0;
//    for (int i = 0; i < n; i++)
//    {
//        total += p[i] * X.x[i];
//        weight += w[i] * X.x[i];
//        printf("װ��İ������:%d װ��ķ���%.6f\n", X.order[i], X.x[i]);
//        printf("\n �������ܼ�ֵ fp:%.2f,������������ fw:%.2f\n", total, weight);
//
//    }
//}
//int main()
//{
//    for (int i = 1; i <= 3; i++)
//    {
//        printf("\t\t ����%d:\n", i);
//        printf("������ x%d:\n", i);
//        init();
//        sort(i);
//        GreedyKnapsack(w);
//        show();
//    }
//
//    return 0;
//}

