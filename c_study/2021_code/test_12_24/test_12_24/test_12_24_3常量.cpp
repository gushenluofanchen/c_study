#include <stdio.h>

#define MAX 1000

enum SEX
{
	MALE=3,
	FEMALE,
	SECRET
};

int main ()
{
	//���泣��
	10;
	3.14;
	'a';
	"abcde";

	
	//const���εĳ�����
	const int num = 10;
	printf("num=%d\n", num);


	//#define����ı�ʶ������
	int n = MAX;
	printf("n=%d\n", MAX);

	
	//ö�ٳ���������һһ�оٵĳ���
	enum SEX s= MALE;
	printf("%d\n", MALE);


	return 0;
}