#define _CRT_SECURE_NO_WARNINGS 1

//1.
//�ж�һ�������Ƿ�������
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//
//	printf("������һ��������");
//		scanf("%d",&i);
//
//		if (i % 2 == 1)
//			printf("%d������",i);
//		else
//			printf("%d��ż��",i);
//
//	return 0;
//}




//2.
//���1��100֮�������
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
//����n�Ľ׳�n!
//����
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

//�ݹ�
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
//����1��+2��+3��+...+10��
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
//		ret = 1;//ÿ�μ���n�Ľ׳�֮ǰ��ret��ֵ��1
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
//��д���룬��ʾ����ַ��������ƶ������м���
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
//�۰���ң����ֲ���
//���磬��һ����������arr[10]={,1,2,3,4,5,6,7,8,9,10}�в���7
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
//		//һ�ζ��ֲ���
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//���鳤��/������Ԫ�س���=����Ԫ�صĸ�����
//
//	printf("��һ����������1, 2, 3, 4, 5, 6, 7, 8, 9, 10\n");
//	printf("�����е��±���0, 1, 2, 3, 4, 5, 6, 7, 8, 9\n");
//	printf("�ó�����԰����ҵ�1��10֮���������±�\n");
//	printf("��������һ��0��10֮���һ������:");
//	
//	scanf("%d",&key);
//
//	//�ҵ��˷����±꣬�Ҳ�������-1
//	int set = binary_search(arr, sz, key);//���ص��±����set��
//
//
//	if (-1==set)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��� %d\n",set);
//	}
//
//	return 0;
//}






//7.
//��������Ϸ
//�Զ�����һ��1��100֮�������
//�����֣�
//	����¶��ˣ���ϲ����Ϸ����
//	����´��ˣ�������´��˻��ǲ�С�ˣ������£�ֱ���¶�Ϊֹ��
//��Ϸһֱ�棬�����˳���Ϸ
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("*****************************\n");
//	printf("                             \n");
//	printf("***   ��0��100֮�������  ***\n");
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
//	//��������Ϸ�Ĺ���ʵ��
//	//1.���������
//	//rand����������һ��0-32767֮�������
//	//ʱ��һֱ�ڱ仯����ʱ���
//
//	int ret = rand() % 100;//%100��������0-99��Ȼ���1���õ��ķ�Χ����1-100
//
//	//2.������
//	int guess = 0;
//
//	while (1)
//	{
//		printf("�������:");
//		scanf("%d", &guess);
//
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		menu();//��ӡ�˵�
//		printf("��ѡ��1/0����");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}







//8.
//д���뽫������������С�������
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
//���1��100֮��3�ı���
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
//�����������������Լ��
//���Լ��һ��С������������С��
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
//			printf("���Լ����%d\n", max);
//			break;
//		}
//		max--;
//	}
//
//	return 0;
//	}

//շת�����
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
//	printf("���Լ����%d\n", b);
//
//
//	return 0;
//}






//11.
//��ӡ100��200֮�������
//#include<stdio.h>
//#include<math.h>

//�Գ���
//int main()
//{
//	int i = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж��ǲ�������
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


//�Ż�1
//int main()
//{
//	int i = 0;
//
//	//ѭ������100��200
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж��ǲ�������
//		int m = 0;
//		for (m = 2; m <=sqrt(i); m++)
//		{
//			if (i % m == 0)
//			{
//				break;//��������������ѭ��
//			}
//		}
//
//		//�ж����������Լ�����֮ǰ����������������ӡ�������
//		if (m>sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//�Ż�2
//int main()
//{
//	int i = 0;
//
//	//ѭ������100��200
//	for (i = 101; i <= 200; i += 2)
//	{
//		//�ж��ǲ�������
//		int m = 0;
//		for (m = 2; m <= sqrt(i); m++)
//		{
//			if (i % m == 0)
//			{
//				break;//��������������ѭ��
//			}
//		}
//
//		//�ж����������Լ�����֮ǰ����������������ӡ�������
//		if (m > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//������ʽ
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
//дһ�������ж�һ���ǲ�������
// �ܱ�4�����Ҳ��ܱ�100����
// �����ܱ�400����
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
//	printf("�����һ��������");
//	scanf("%d", &n);
//
//	
//	if (year(n) == 1)
//	{
//		printf("%d������\n",n);
//	}
//	else
//	{
//		printf("%d��������\n", n);
//	}
//
//
//	return 0;
//}






//13.
//���1000��2000֮�������
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
//			printf("%d������\n", n);
//		}
//		else
//		{
//			printf("%d��������\n", n);
//		}
//	}
//	
//
//	printf("%d", count);
//	return 0;
//}







//14.
//����һ���޷������ͣ���˳���ӡ����ÿһλ����������1234����ӡ1 2 3 4
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
//ģ��strlen������ʵ��
//��д������������ʱ���������ַ����ĳ���
//������ʱ����
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


//�ݹ�ʵ��
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



//ָ��
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
//���n��쳲�������
//�ݹ�(Ч��̫��)
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


//����
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
//��д������һ��1��100�����˶��ٴ�����9
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
//��дһ��reverse_string������char * string��
//�������ַ������ַ��������У�����˳���ˣ����������ӡ������ʹ��c�������е��ַ�����������
//char arr[]="abcdef"(a,b,c,d,e,f,\0),�������ú�,arr���char arr="fedcba"(f,e,d,c,b,a,\0)
//�ǵݹ�
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


//�ݹ�
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
//����һ���Ǹ����������������������֮�ͣ��ݹ�ʵ�֣�
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
//	printf("������һ��������");
//	scanf("%d",&n);
//
//	int sum=digitsum(n);
//
//	printf("%d\n",sum);
//
//	return 0;
//}






//20.
//��n��k�η����ݹ�ʵ�֣�
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
//	printf("����������������");
//	scanf("%d %d",&n,&k);
//
//	double ret=Pow(n,k);
//	printf("%lf\n",ret);
//	
//	return 0;
//}