#define _CRT_SECURE_NO_WARNINGS 1

/*PriorDate����
�������Ϊ��
����3.1
ÿ���1.1  8.1
*/
//#include<cstdio>
//#include<algorithm>
//using namespace std;
///*���꺯��*/
//int Run(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int PriorDate(int a, int b, int c)
//{
//	if (b == 3 && c == 1 && Run(a) == 1)//����3.1ǰһ��Ϊ2.29 
//	{
//		printf("%d��%d��%d�յ�ǰһ���ǣ�\n", a, b, c);
//		printf("%d��%d��%d��\n", a, 2, 29);
//	}
//	if (b == 3 && c == 1 && Run(a) == 0)//ƽ��3.1ǰһ��Ϊ2.28
//	{
//		printf("%d��%d��%d�յ�ǰһ���ǣ�\n", a, b, c);
//		printf("%d��%d��%d��\n", a, 2, 28);
//	}
//	if (b == 1 && c == 1)//1.1ǰһ��Ϊa-1��.12.31 
//	{
//		printf("%d��%d��%d�յ�ǰһ���ǣ�\n", a, b, c);
//		printf("%d��%d��%d��\n", a - 1, 12, 31);
//	}
//	if (b == 8 && c == 1)//8.1ǰһ��Ϊ7.31
//	{
//		printf("%d��%d��%d�յ�ǰһ���ǣ�\n", a, b, c);
//		printf("%d��%d��%d��\n", a, 7, 31);
//	}
//	if ((b == 5 || b == 7 || b == 10 || b == 12) && c == 1)//b.1ǰһ��Ϊb-1.30
//	{
//		printf("%d��%d��%d�յ�ǰһ���ǣ�\n", a, b, c);
//		printf("%d��%d��%d��\n", a, b - 1, 30);
//	}
//	if ((b == 2 || b == 4 || b == 6 || b == 9 || b == 11) & c == 1)//b.1ǰһ��Ϊb-1.31
//	{
//		printf("%d��%d��%d�յ�ǰһ���ǣ�\n", a, b, c);
//		printf("%d��%d��%d��\n", a, b - 1, 31);
//	}
//	if (c != 1)//�������ھ�Ϊ����c-1
//	{
//		printf("%d��%d��%d�յ�ǰһ���ǣ�\n", a, b, c);
//		printf("%d��%d��%d��\n", a, b, c - 1);
//	}
//}
//int main()
//{
//	int ye;
//	int mo;
//	int da;
//	printf("������ĳһ�������,��2004 5 20\n");
//	while (scanf("%d %d %d", &ye, &mo, &da) != EOF)
//		PriorDate(ye, mo, da);
//	return 0;
//}