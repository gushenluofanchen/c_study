#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//struct B
//{
//	char c;
//	double d;
//	short s;
//};
//
//struct stu
//{
//	struct B sb;
//	char name[20];//����
//	int age;//����
//	char id[20];//ѧ��
//};
//
//void print1(struct stu t)
//{
//	printf("%c %lf %d %s %d %s\n",t.sb.c,t.sb.d,t.sb.s,t.name,t.age,t.id);
//}

//int main()
//{
//	struct stu s = { {'w',3.14,4},"����",18,"1001"};
//	
//	////printf("%c\n",s.sb.c);
//	////printf("%s\n",s.id);
//
//	////struct stu* p = &s;
//	////printf("%c\n",( * p).sb.c);
//	////printf("%c\n", p->sb.c);//sb����ָ������
//
//	return 0;
//}


//�ṹ��Ϊ�����ͷ���ֵ
#include<stdio.h>

struct B
{
	char c;
	double d;
	short s;
};

struct stu
{
	struct B sb;
	char name[20];//����
	int age;//����
	char id[20];//ѧ��
};

void print1(struct stu t)
{
	printf("%c %lf %d %s %d %s\n", t.sb.c, t.sb.d, t.sb.s, t.name, t.age, t.id);
}

void print2(struct stu* t)
{
	printf("%c %lf %d %s %d %s\n", t->sb.c, t->sb.d, t->sb.s, t->name, t->age, t->id);
}

int main()
{
	struct stu s = { {'w',3.14,4},"����",18,"1001" };

	//дһ��������ӡs������,�ṹ��Ϊ����
	print1(s);//��ֵ����
	print2(&s);//��ַ����

	return 0;
}




