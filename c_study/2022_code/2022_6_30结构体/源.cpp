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
//	char name[20];//姓名
//	int age;//年龄
//	char id[20];//学号
//};
//
//void print1(struct stu t)
//{
//	printf("%c %lf %d %s %d %s\n",t.sb.c,t.sb.d,t.sb.s,t.name,t.age,t.id);
//}

//int main()
//{
//	struct stu s = { {'w',3.14,4},"张三",18,"1001"};
//	
//	////printf("%c\n",s.sb.c);
//	////printf("%s\n",s.id);
//
//	////struct stu* p = &s;
//	////printf("%c\n",( * p).sb.c);
//	////printf("%c\n", p->sb.c);//sb不是指针类型
//
//	return 0;
//}


//结构作为参数和返回值
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
	char name[20];//姓名
	int age;//年龄
	char id[20];//学号
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
	struct stu s = { {'w',3.14,4},"张三",18,"1001" };

	//写一个函数打印s的内容,结构作为参数
	print1(s);//传值调用
	print2(&s);//传址调用

	return 0;
}




