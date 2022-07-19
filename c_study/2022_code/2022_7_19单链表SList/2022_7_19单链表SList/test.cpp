#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

void test1( )
{
	SListNode* s1;

	SListPushBack(&s1, 1);
	SListPushBack(&s1, 2);
	SListPushBack(&s1, 3);
	SListPushBack(&s1, 4);
	
	SListPrint(s1);

}


int main()
{

	test1();


	return 0;
}