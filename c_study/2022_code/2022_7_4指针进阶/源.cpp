#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>



//  //����0��ַ���ĺ���
//	( *(void (*) () ) 0 ) ();
//	//void(*)()�Ǻ���ָ������
//	//()0��ǿ��ת��
//	//(void (*)())0�ǰ�0ǿ��ת���ɺ���ָ�����͵ĵ�ַ
//	//* (void (*)())0ǿ��ת���ɺ���ָ�����͵�ַ����н������ҵ������������޲Σ�����������void
//	//�������ҵ���������к�������(  * (void (*)())0  ) ()


////signal����������
//void (*signal(int, void(*)(int)))(int)
////�ȼ��� void(*)(int)	signal  (int, void(*)(int)�������﷨��֧������д
////������������Ǻ���ָ�����͵Ļ���*����ͺ���������һ��
////signal��Բ���Ž�ϣ�˵��signal��һ��������
////signal�����Ĳ�����������һ����int��һ����void(*)(int)����ָ������
////signal�����ķ�������Ҳ��һ��void(*)(int)���͵ĺ���ָ�� 



////�����ض���
//typedef void(*pfun_t)(int);//��void (*) (int)�ض���Ϊpfun_t
//
////����signal�������������Ը�д��
//pfun_t signal(int, pfun_t)





////����ָ������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//
//	int (*parr[2])(int, int) = {pf1,pf2};//����ָ������ĳ�ʼ��
//	int (*parr[2])(int, int) = {Add,Sub };
//	//parr��һ������ָ�����飬��ŵ��Ǻ���ָ������
//	//parr������Ԫ�أ�ÿ��Ԫ����һ������ָ�룬ÿ��������ָ�������������int,int,��������Ҳ��int
//
//	return 0;
//}



//����ָ�������ʹ��
//��������ʵ��
//��ͨ����
//void menu()
//{
//	printf("***** 1.Add ***** 2.Sub *****\n");
//	printf("                             \n");
//	printf("***** 3.Mul ***** 4.Div *****\n");
//	printf("                             \n");
//	printf("*****     0.�˳�����    *****\n");
//	
//	
//}
//int Add(int x, int y) { return x + y; }
//int Sub(int x, int y) { return x - y; }
//int Mul(int x, int y) { return x * y; }
//int Div(int x, int y) { return x / y; }
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//
//		printf("������һ����������ѡ��:\n");
//		scanf("%d" ,&input);
//
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//	
//
//		switch (input) 
//		{
//		case 1:
//			printf("��������������:");
//			scanf("%d %d",&x,&y);
//			ret=Add(x,y);
//			printf("ret=%d\n",ret);
//			break;
//		case 2:
//			printf("��������������:");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 3:
//			printf("��������������:");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 4:
//			printf("��������������:");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret=%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("�����������������:\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}




//����ָ������ʵ��
//void menu()
//{
//	printf("***** 1.Add�ӷ� ***** 2.Sub���� *****\n");
//	printf("                                     \n");
//	printf("***** 3.Mul�˷� ***** 4.Div���� *****\n");
//	printf("                                     \n");
//	printf("*****         0.�˳�����        *****\n");
//	
//	
//}
//
//int Add(int x, int y) { return x + y; }
//int Sub(int x, int y) { return x - y; }
//int Mul(int x, int y) { return x * y; }
//int Div(int x, int y) { return x / y; }
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//
//		menu();
//
//		//ת�Ʊ�
//		int(*pf[5])(int, int) = { NULL,Add,Sub,Mul,Div };
//
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//
//		printf("������һ������ѡ��:\n");
//		scanf("%d",&input);
//
//		if (input >= 1 && input <= 4)
//		{
//			printf("��������������:\n");
//			scanf("%d %d", &x, &y);
//
//			ret = (pf[input])(x, y);
//			printf("ret=%d\n", ret);
//
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else
//			printf("�����������������\n");
//
//
//	} while (input);
//
//	return 0;
//}


//�ص�������ʽ
void menu()
{
	printf("***** 1.Add ***** 2.Sub *****\n");
	printf("                             \n");
	printf("***** 3.Mul ***** 4.Div *****\n");
	printf("                             \n");
	printf("*****     0.�˳�����    *****\n");
	
	
}
int Add(int x, int y) { return x + y; }
int Sub(int x, int y) { return x - y; }
int Mul(int x, int y) { return x * y; }
int Div(int x, int y) { return x / y; }

int cacl (int (*p)(int, int))
{
	int x = 0;
	int y = 0;
	printf("��������������:\n");
	scanf("%d %d",&x,&y);
	return p(x,y);
}

int main()
{
	int input = 0;
	
	do
	{
		menu();

		printf("������һ����������ѡ��:\n");
		scanf("%d" ,&input);

		int ret = 0;
	
		switch (input) 
		{
		case 1:
			ret=cacl(Add);
			printf("ret=%d\n",ret);
			break;
		case 2:
			
			ret = cacl(Sub);
			printf("ret=%d\n", ret);
			break;
		case 3:
			ret=cacl(Mul);
			printf("ret=%d\n", ret);
			break;
		case 4:
			ret=cacl(Div);
			printf("ret=%d\n", ret);
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("�����������������:\n");
			break;
		}
	} while (input);

	return 0;
}
