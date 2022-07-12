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
	//字面常量
	10;
	3.14;
	'a';
	"abcde";

	
	//const修饰的常变量
	const int num = 10;
	printf("num=%d\n", num);


	//#define定义的标识符常量
	int n = MAX;
	printf("n=%d\n", MAX);

	
	//枚举常量，可以一一列举的常量
	enum SEX s= MALE;
	printf("%d\n", MALE);


	return 0;
}