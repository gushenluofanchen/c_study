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
//    for (j = 1; j <= n; j++)       //�Խ���ʱ���������
//    {
//        for (i = 1; i < n; i++)   //�е�����ð������
//        {
//            if (F[t[i]] > F[t[i + 1]])   //������t[i]����ֱ����i����ΪF>�����е����ݲ�û�н�������t[i]�洢���±�����������
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
//    A[t[1]] = 1;      //t[1]�ǽ���ʱ������ģ��ᱻѡ��
//    a = t[j];         //a���������ݴ棬t�����д�ŵ����������±�
//    for (i = 2; i <= n; i++)
//    {
//        if (F[a] > S[t[i]])   //�������ʱ����ڵ�t[i]���Ŀ�ʼʱ��
//        {
//            A[t[i]] = 0;
//        }
//        else
//        {
//            A[t[i]] = 1;
//            a = t[i];  //���������t[j]����ô��ֵ��t�������ң���>����a�ݴ�
//        }
//    }
//}
//
//int main(void)
//{
//    int S[N] = { 0 }, F[N] = { 0 };
//    int n, i;
//    printf("�������ĸ�����");
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        t[i] = i;     //t[i]��ʼ����û����֮ǰ
//        printf("�������%d����Ŀ�ʼʱ��ͽ���ʱ�䣺", i);
//        scanf("%d %d", &S[i], &F[i]);
//    }
//
//    sort(S, F, n);
//    arrange(S, F, n);
//
//    for (i = 1; i <= n; i++)
//    {
//        if (A[i] == 1)
//            printf("%d ", i); //�������ʹ����Դ�Ļ
//    }
//    printf("\n");
//
//    for (i = 1; i <= n; i++)
//    {
//        printf("%d ", t[i]);      //�����Ľ��
//    }
//    printf("\n");
//
//    return 0;
//}
//
//

