#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//
//	i = a++ && ++b && d++;
//
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);//1,2,3,4
//
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//
//	i = a++ && ++b && d++;
//
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);//2,3,3,5
//
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//
//	i = a++ || ++b || d++;
//
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);//2,3,3,4
//
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	printf("%d",arr[4]);//[ ]�����±����ò�����
//	[ ]�Ĳ�������������arr��4
//
//	return 0;
//}



//#include<stdio.h>
//
////����һ���Զ������ͣ��ṹ��book
//struct book
//{
//	//�ṹ��ĳ�Ա��������
//	char name[20];
//	char id[20];
//	int price;
//};
//
//int main()
//{
//	//�ṹ���ʼ��
//	struct book b = {"c����","20220627",50};
//
//	printf("������ %s\n",b.name);
//	printf("����� %s\n",b.id );
//	printf("�۸��� %d\n",b.price );
//
//	return 0;
//}



//#include<stdio.h>
//
////����һ���Զ������ͣ��ṹ��book
//struct book
//{
//	//�ṹ��ĳ�Ա��������
//	char name[20];
//	char id[20];
//	int price;
//};
//
//int main()
//{
//	//�ṹ���ʼ��
//	struct book b = { "c����","20220627",50 };
//	struct book* pb = &b;
//
//	printf("������ %s\n", pb->name);
//	printf("����� %s\n", pb->id);
//	printf("�۸��� %d\n", pb->price);
//
//	return 0;
//}


#include<stdio.h>

int main()
{
	//a��b�����ַ����ͣ�����һ��int���ͣ�����ʱ������������

	char a = 3;
	//������    Ϊ00000000 00000000 00000000 00000011
	//ʵ��a�з����ضϣ��洢������͵�һ���ֽ�
	//a = 00000011
	char b = 127;
	//b = 01111111

	//�����ʱ���������������з���char�����������λ
	//a������0  Ϊ00000000 00000000 00000000 00000011
	//b������0  Ϊ00000000 00000000 00000000 01111111
	//��ӵõ�    00000000 00000000 00000000 10000010

	//c��char���ͣ������ضϣ�c = 10000010

	char c = a + b;

	//%d��ӡc��c�ᷢ����������
	//c������1  Ϊ11111111 11111111 11111111 10000010
	//��c�Ĳ���ת����ԭ��
	//c�����1  Ϊ11111111 11111111 11111111 10000001
	//��c�ķ���ת����ԭ��
	//cԭ��ȡ�� Ϊ10000000 00000000 00000000 01111110
	//�õ�c = -126
	printf("%d",c);

	return 0;
}
