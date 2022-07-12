#define _CRT_SECURE_NO_WARNINGS 1

//1.
//判断一个数字是否是奇数
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//
//	printf("请输入一个整数：");
//		scanf("%d",&i);
//
//		if (i % 2 == 1)
//			printf("%d是奇数",i);
//		else
//			printf("%d是偶数",i);
//
//	return 0;
//}




//2.
//输出1到100之间的奇数
//#include<stdio.h>
//
//int main()
//{
//	int i = 1;
//	
//	for (i; i < 100;i++)
//	{
//		if (i % 2==1)
//			printf("%d\n", i);
//	}
//
//
//	return 0;
//}





//3.
//计算n的阶乘n!
//迭代
// #include<stdio.h>
//
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//
//	scanf("%d", &n);
//
//	while (i<=n)
//	{
//		ret = ret * i;
//		i++;
//	}
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//递归
//#include<stdio.h>
//
//int fac(int n)
//{
//	if (n > 1)
//	{
//		return n * fac(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n = 0;
//
//	scanf("%d",&n);
//
//	printf("%d",fac(n));
//
//	return 0;
//}







//4.
//计算1！+2！+3！+...+10！
//#include<stdio.h>
//
//
//int main()
//{
//	int i = 1;
//	int n = 10;
//	int ret = 1;
//	int sum = 0;
//	
//	for(n=1;n<=3;n++)
//	{
//		ret = 1;//每次计算n的阶乘之前把ret赋值成1
//
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//
//		sum += ret;
//	}
//	
//	
//	printf("%d", sum);
//
//	return 0;
//}

//#include<stdio.h>
//
//
//int main()
//{
//	int i = 1;
//	int n = 10;
//	int ret = 1;
//	int sum = 0;
//	
//	for(n=1;n<=3;n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	
//	
//	printf("%d", sum);
//
//	return 0;
//}





//5.
//编写代码，演示多个字符从两端移动，向中间汇聚
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//
//int main()
//{
//	char arr1[] = "welcome to bit!";
//	char arr2[] = "####### ## ####";
//
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//
//	while (left <= right)
//	{
//		printf("%s\n", arr2);
//
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//
//		left ++;
//		right --;
//
//		Sleep(1000);
//		system("cls");
//
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}




//6.
//折半查找，二分查找
//例如，在一个有序数组arr[10]={,1,2,3,4,5,6,7,8,9,10}中查找7
//#include<stdio.h>
//
//int binary_search(int a[], int s, int k)
//{
//	int left = 0;
//	int right = s - 1;
//
//
//	while (left <= right)
//	{
//		//一次二分查找
//		int mid = (left + right) / 2;
//		if(a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if(a[mid] <k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	
//	return -1;
//}
//
//
//
//int main()
//{
//	int arr[ ] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组长度/数组首元素长度=数组元素的个数；
//
//	printf("有一串有序数列1, 2, 3, 4, 5, 6, 7, 8, 9, 10\n");
//	printf("该数列的下标是0, 1, 2, 3, 4, 5, 6, 7, 8, 9\n");
//	printf("该程序可以帮你找到1到10之间整数的下标\n");
//	printf("请你输入一个0到10之间的一个整数:");
//	
//	scanf("%d",&key);
//
//	//找到了返回下标，找不到返回-1
//	int set = binary_search(arr, sz, key);//返回的下标放在set；
//
//
//	if (-1==set)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了，下标是 %d\n",set);
//	}
//
//	return 0;
//}






//7.
//猜数字游戏
//自动产生一个1到100之间的数字
//猜数字：
//	如果猜对了，恭喜你游戏结束
//	如果猜错了，告诉你猜大了还是猜小了，继续猜，直到猜对为止。
//游戏一直玩，除非退出游戏
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("*****************************\n");
//	printf("                             \n");
//	printf("***   猜0到100之间的数字  ***\n");
//	printf("                             \n");
//	printf("*****************************\n");
//	printf("*****************************\n");
//	printf("                             \n");
//	printf("****      1.play          ***\n");
//	printf("                             \n");
//	printf("*****************************\n");
//	printf("*****************************\n");
//	printf("                             \n");
//	printf("***       0.exit          ***\n");
//	printf("                             \n");
//	printf("*****************************\n");
//	printf("*****************************\n");
//}
//
//void game()
//{
//	//猜数字游戏的过程实现
//	//1.生成随机数
//	//rand函数返回了一个0-32767之间的数字
//	//时间一直在变化——时间戳
//
//	int ret = rand() % 100;//%100的余数是0-99，然后加1，得到的范围就是1-100
//
//	//2.猜数字
//	int guess = 0;
//
//	while (1)
//	{
//		printf("请猜数字:");
//		scanf("%d", &guess);
//
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();//打印菜单
//		printf("请选择（1/0）：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}







//8.
//写代码将三个整数按从小到大输出
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//		
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}


//9.
//输出1到100之间3的倍数
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//
//	for (i = 1; i<=100; i++)
//	{
//		if (i % 3 == 0) 
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//10.
//给定两个数，求最大公约数
//最大公约数一定小于两个数中最小的
//#include<stdio.h>
//
//int main()
//	{
//	int a = 0;
//	int b = 0;
//
//	scanf("%d %d", &a, &b);
//
//	int max = 0;
//	if (a < b)
//	{
//		max = b;
//	}
//	else
//	{
//		max = a;
//	}
//
//	while (1)
//	{
//		if (a % max == 0 && b % max == 0)
//		{
//			printf("最大公约数是%d\n", max);
//			break;
//		}
//		max--;
//	}
//
//	return 0;
//	}

//辗转相除法
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	
//	scanf("%d %d", &a, &b);
//	
//	int t = a % b;
//
//	while (t)
//	{
//		a = b;
//		b = t;
//	}
//	printf("最大公约数是%d\n", b);
//
//
//	return 0;
//}






//11.
//打印100到200之间的素数
//#include<stdio.h>
//#include<math.h>

//试除法
//int main()
//{
//	int i = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		//判断是不是素数
//		int m = 0;
//		for (m = 2; m < i; m++)
//		{
//			if (i % m == 0)
//			{
//				break;
//			}
//		}
//
//		if (i == m)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//优化1
//int main()
//{
//	int i = 0;
//
//	//循环输入100到200
//	for (i = 100; i <= 200; i++)
//	{
//		//判断是不是素数
//		int m = 0;
//		for (m = 2; m <=sqrt(i); m++)
//		{
//			if (i % m == 0)
//			{
//				break;//不是素数，跳出循环
//			}
//		}
//
//		//判断是素数，自己本身之前的数不能整除，打印这个素数
//		if (m>sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//优化2
//int main()
//{
//	int i = 0;
//
//	//循环输入100到200
//	for (i = 101; i <= 200; i += 2)
//	{
//		//判断是不是素数
//		int m = 0;
//		for (m = 2; m <= sqrt(i); m++)
//		{
//			if (i % m == 0)
//			{
//				break;//不是素数，跳出循环
//			}
//		}
//
//		//判断是素数，自己本身之前的数不能整除，打印这个素数
//		if (m > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//函数方式
//#include<stdio.h>
//#include<math.h>
//
//int is(int n)
//{
//	int m = 0;
//
//	for (m = 2; m <= sqrt(n); m++)
//	{
//		if (n % m == 0)
//			return 0;
//	}
//	return 1;
//}
//
//
//
//
//int main()
//{
//	int n = 0;
//
//	for (n = 101; n < 200; n += 2)
//	{
//
//		if (is(n) == 1)
//		{
//			printf("%d ", n);
//		}
//
//	}
//
//	return 0;
//}







//12.
//写一个函数判断一年是不是闰年
// 能被4整除且不能被100整除
// 或者能被400整除
//#include<stdio.h>
//
//int year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0)||n % 400==0)
//	{
//		return 1;
//	}
// else
// {
//		return 0;
// }
// }
//
//
//
//int main()
//{
//	int n = 0;
//	
//
//	printf("请出入一个整数：");
//	scanf("%d", &n);
//
//	
//	if (year(n) == 1)
//	{
//		printf("%d是闰年\n",n);
//	}
//	else
//	{
//		printf("%d不是闰年\n", n);
//	}
//
//
//	return 0;
//}






//13.
//输出1000到2000之间的闰年
//#include<stdio.h>
//
//int year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int count = 0;
//
//	
//	for (n = 1000; n <= 2000; n++)
//	{
//		if (year(n) == 1)
//		{
//			count++;
//			printf("%d是闰年\n", n);
//		}
//		else
//		{
//			printf("%d不是闰年\n", n);
//		}
//	}
//	
//
//	printf("%d", count);
//	return 0;
//}







//14.
//接受一个无符号整型，按顺序打印他的每一位，例如输入1234，打印1 2 3 4
//#include<stdio.h>
//
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d ",n%10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//
//	scanf("%u",&num);
//
//	print(num);
//
//	return 0;
//}







//15.
//模拟strlen函数的实现
//编写函数不创建临时变量，求字符串的长度
//创建临时变量
//#include<stdio.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	char arr[20] = { 0 };
//
//	scanf("%s",arr);
//
//	printf("%d",my_strlen(arr));
//
//	return 0;
//}


//递归实现
//#include<stdio.h>
//
//int my_strlen(char*str)
//{
//	if (*str != '\0')
//	{
//		return 1+my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[20] = { 0 };
//
//	scanf("%s",arr);
//
//	printf("%d",my_strlen(arr));
//
//	return 0;
//}



//指针
//#include<stdio.h>
//
//int my_strlen(char* arr)
//{
//	char* start = arr;
//	while (*arr != '\0')
//	{
//		arr++;
//	}
//	return arr - start;
//}
//
//int main()
//{
//	char arr[] = "abc";
//
//	printf("%d\n",my_strlen(arr));
//
//
//	return 0;
//}







//16.
//求第n个斐波那契数
//递归(效率太低)
//#include<stdio.h>
//
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//
//	printf("%d\n",fib(n));
//
//	return 0;
//}


//迭代
//#include<stdio.h>
//
//int fic(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while(n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//
//	scanf("%d",&n);
//
//	printf("%d",fic(n));
//
//	return 0;
//}








//17.
//编写程序数一下1到100出现了多少次数字9
//#include<stdio.h>
//
//int main()
//{
//	int n = 1;
//	int count = 0;
//
//	for (n = 1; n < 100; n++)
//	{
//		if (n % 10 == 9)
//		{
//			count++;
//		}
//		if (n / 10 == 9)
//		{
//			count++;
//		}
//	}
//
//	printf("%d\n",count);
//
//	return 0;
//}







//18.
//编写一个reverse_string函数（char * string）
//将参数字符串的字符反向排列，内容顺序反了，不是逆序打印，不能使用c函数库中的字符串操作函数
//char arr[]="abcdef"(a,b,c,d,e,f,\0),函数调用后,arr变成char arr="fedcba"(f,e,d,c,b,a,\0)
//非递归
//#include<stdio.h>
//#include<string.h>
//
//int my_strlen ( char* arr)
//{
//	int count = 0;
//
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//void reverse_string(char* arr)
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//
//	while (left <right)
//	{
//		char ret;
//		ret = arr[left];
//		arr[left] = arr[right];
//		arr[right] = ret;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	reverse_string(arr);
//	printf("%s\n",arr);
//
//	return 0;
//}


//递归
//#include<stdio.h>
//
//int my_strlen(char* arr)
//{
//	int count = 0;
//
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//void reverse_string(char* arr)
//{
//	char ret = *arr;
//
//	int len = my_strlen(arr);
//	* arr = * (arr + len - 1);
//
//	*(arr + len - 1) = '\0';
//
//	if (my_strlen(arr+1)>= 2)
//	{
//		reverse_string(arr + 1);
//	}
//
//	*(arr + len - 1) = ret;
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	reverse_string(arr);
//	printf("%s\n",arr);
//
//	return 0;
//}








//19.
//输入一个非负整数，返回组成他的数字之和（递归实现）
//#include<stdio.h>
//
//int digitsum(int n)
//{
//	if (n > 9)
//		return digitsum(n / 10) + n % 10;
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 0;
//
//	printf("请输入一个整数：");
//	scanf("%d",&n);
//
//	int sum=digitsum(n);
//
//	printf("%d\n",sum);
//
//	return 0;
//}






//20.
//求n的k次方（递归实现）
//#include<stdio.h>
//
//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k < 0)
//		return 1.0 / (Pow(n, -k));
//	else
//		return 1.0;
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//
//	printf("请输入两个整数：");
//	scanf("%d %d",&n,&k);
//
//	double ret=Pow(n,k);
//	printf("%lf\n",ret);
//	
//	return 0;
//}