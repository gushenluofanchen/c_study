#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("*****************************\n");
	printf("*****************************\n");
	printf("                             \n");
	printf("***   ��0��100֮�������  ***\n");
	printf("                             \n");
	printf("*****************************\n");
	printf("*****************************\n");
	printf("                             \n");
	printf("****      1.play          ***\n");
	printf("                             \n");
	printf("*****************************\n");
	printf("*****************************\n");
	printf("                             \n");
	printf("***       0.exit          ***\n");
	printf("                             \n");
	printf("*****************************\n");
	printf("*****************************\n");
}

void game()
{
	//��������Ϸ�Ĺ���ʵ��
	//1.���������
	//rand����������һ��0-32767֮�������
	//ʱ��һֱ�ڱ仯����ʱ���

	int ret = rand()%100;//%100��������0-99��Ȼ���1���õ��ķ�Χ����1-100

	//2.������
	int guess = 0;

	while (1)
	{
		printf("�������:");
		scanf("%d", &guess);

		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;

	srand((unsigned int)time(NULL));

	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��1/0����");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}