#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf_s("%d", &n);
//	for (i = 1;i <= n;i++)
//	{
//
//		ret = ret * i;
//		sum = sum + ret;
//		printf("%d\n", sum);
//		Sleep(200);
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 5;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		int mid = (left + right)/2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//		
//
//		}
//	if (left > right)
//		printf("�Ҳ���");
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int ret = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf ("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0;i < 3;i++)
//	{
//		printf("��������������");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("�� �� �� ��");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//		if (3 ==i )
//		{
//			printf("���������������,�˳�����-->�������");
//		}
//		
//	return 0;
//}
// �ų�δ֪��xyz��˳��
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	scanf_s("%d%d%d", &x, &y, &z);
//	//�㷨ʵ��
//	//a�з����ֵ
//	//b��֮
//	//c�з���Сֵ
//	if (x < y)
//	{
//		int i = x;
//			x = y;
//			y = i;
//
//	}
//	if (x < z)
//	{
//		int i = x;
//		x = z;
//		z = i;
//	}
//	if (y < z)
//	{
//		int i = y;
//		y = z;
//		z = i;
//	}
//	printf("%d %d %d\n", x,y,z);
//	return 0;
//}
//���1��100�����ı���
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//	}
//	}
//
//	return 0;
//}
//�����������������
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf_s("%d%d", &m, &n);
//	while (m%n != 0)//��(m%n) ��0Ϊ�� ��(r=m%n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d ", n);
//	return 0;
//}
//�ж�1000��2000�������
//int main()
//{
//	int count = 0;
//	int i = 1000;
//	for (i = 1000;i <= 2000;i++)
////		//�ܱ�4�������ܱ�100������ �ܱ�400����Ϊ����
////	{ if(i%4==0&&i%100!=0)
////	{
////		printf("%d ", i);
////		count++;
////	}
////	else if(i % 400 == 0)
////	{
////		printf("%d ", i);
////		count++;
////	}
////ifҲ���Ըĳ�
//	{if(((i%4==0)&&(i%100!=0))||(i%400==0))
//{
//	printf("%d ", i);
//	count++;
//}
//     }
//	printf("\ncount =%d\n", count);
//	return 0;
//}
// 
//����100��200������
//int main()
//{
//	int count = 0;
//	int i = 0;
//for (i = 100;i <= 200;i++)
//{  //�������жϹ���
//	//1.�Գ��� i������2��i-1����
//	int j = 0;
//	for (j = 2;j < i;j++)
//	{
//		if (i % j == 0)
//		{
//			break;
//		}
//	}
//	if (j == i)
//	{
//		count++;
//		printf("%d ", i);
//	}
//}
//printf("\ncount= %d ", count);
//	return 0;
//}
//#include<math.h>
//int main()
// 
//{ //���i=a*b ��ôa��b�бض���һ����<=i�Ŀ�ƽ�� ������ϵ���ֻ��1��ô��������
//	int count = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 101;i <= 200;i+=2)
//	{
//		for (j = 2;j <= sqrt(i);j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
////   ע�������ж�j>sqrt(i)�Ƿ���if�������������
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount= %d ", count);
//	return 0;
//}
//����������n�־��硷�����Ž�->����
//��1��100����������n��9������ ��n��9���ĸ���
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i%10==9)
//		{
//			count++;
//			printf("%d ", i);
//		}
//		 if (i / 10 == 9)   //  91/10=9 92/10=9  
//		{
//			count++;
//			printf(" %d ", i);
//
//		}
//		
//	}
//	printf(" count = %d ", count);
//	return 0;
//}
//����1-1/2+1/3-1/4+1/5...-1//100
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int k = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		sum += k * 1.0 / i;
//		k = -k;
//	}
//	printf("%lf ",sum);
//
//
//	return 0;
//}
//��ʮ���������ֵ
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1;i < sz;i--)
//	{
//		if (max < arr[i]);
//		{
//			max = arr [i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}
//99�˷��� 
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		for (j = 1;j <=i ;j++)
//		{
//			printf("%d*%d=%-2d  ", i, j, i * j);//����д��i*j=i*j Ӧ��i,j,i*j
//		}                                     //%-2��������ӡ2λ��ģʽ %2���Ҷ����ӡ2λ��ģʽ
//		printf("\n");
//	}
//	return 0;
//}
//��������Ϸ
//1.���Ի�����һ�������
//2.������ 
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("###############################\n");
//	printf("########1.play     0.exit######\n");
//	printf("###############################\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = 0;
//	            //������ ����һ�ξ͹���
//          // ��ʱ����������������������ʼ��
//	         //time_t time(time_t timer)
//	                       //srand����rand����
//	                       //ʱ��� ��ǰ�������ʱ��-�������ʼʱ�䣨1970.1.1.0:0:0��=��xxx����
//		ret = rand()%100+1;
//		while (1)
//		{
//			printf("�������:>");
//			scanf_s("%d", &guess);
//			if (guess > ret)
//			{
//				printf("�´���\n");
//			}
//			else if (guess < ret)
//			{
//				printf("��С��\n");
//			}
//			else
//			{
//				printf("��ϲ�㣬�¶���\n");
//				break;
//			}
//		}
//	//printf("%d\n", ret);   // rand����һ�������
//}
//int main()
//{
//	srand((unsigned int)time(NULL));//���� NULL��ָ��
//	int input = 0;
//	do {
//		menu();
//		printf("��ѡ��>:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}
//goto�������Ƕ��ѭ��

//�ػ�
//shutdown -s ���ùػ� -t 60 ����60��ػ�
//#include<string.h> 
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
  //system ִ��ϵͳ����
	/*char input[20] = { 0 };
	system ("shutdown -s -t 60");
	while (1)
	{
		printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺xxx����ȡ���ػ�\n������>:")��
			sacnf("%s", input);
		if (strcmp(input, "xxx") == 0)
		{
			system("shutdown -a");
			printf("ȡ���ػ��ɹ�");
		}
	}*/
	/*again:
	printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺xxx����ȡ���ػ�\n������>:")��
		sacnf("%s", input);
	if (strcmp(input, "xxx") == 0)
	{
		system("shutdown -a");
		printf("ȡ���ػ��ɹ�");
	}
	else {
		goto again;
	}*/
	/*return 0;
}*/
#include<string.h> 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
//����
//int main()
//{  //strcpy-string copy�ַ������� 
//	char arr1[]="bit";
//	char arr2[20] = "########";
//	strcpy(arr2, arr1);//arr1��ӡ��arr2
//	printf("%s\n", arr2);
//	return 0;
//}
//memset- memory�ڴ� set����
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5); //��arrǰ5λ��Ϊ*
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%-2d  ", i, j,i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//д����������a��b�������н���
//ʵ�δ����βε�ʱ�� �β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ�ε� ����swap1û��ʵ��
//swap2�����ǵ�ַ���Կ���ʵ��
//void Swap(int x, int y)//voidû�÷���ֵ
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//
// }
//void Swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;//   �� ��
//	*pa = *pb;//    ���� ---�β�-��ʽ�ϵĲ���
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
// ����swap����
//	//Swap(a, b);
// ����swap2����
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);//x y�ж����ռ䲻��Ӱ��a b
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//paָ�����
//	*pa = 20;//�����ò���
//	printf("%d\n", a);
//	return 0;
//}
#include<string.h> 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2;j <= sqrt(n);j++)//sqrt Ҫ����math.h�⺯����Ȼ�ò��ˣ�
//	{
//		if (n % j == 0)
//			return 0;
//	} //����Ѿ��ж�j<=? ������Ͳ������ж�j>?
//	return 1;
//}
//int main()
//{ 
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		if(is_prime(i)== 1)
//		
//			printf("%d ", i);
//		
//	}
//	return 0;
//}
//int is_leap_year(int y)
//{
//	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000;year <= 2000;year++)
//	{   //����
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}              //������arr��һ��ָ��
//int binart_search(int arr[], int k,int sz)
//{   // int sz= sizeof(arr) / sizeof (arr[0]);//4��4��1 sizeof(arr)��ָ���СΪ4  sizeof (arr[0])������arr��һ�����Ĵ�СҲΪ4 ���Լ��㲻����ȷ��
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//<---����������ѭ����
//
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else {
//			return mid; // ��Ҫ�����ҵ�ҲҪ�����Ҳ���������
//		}
//	}return -1;
//}
//int main()
//{
//	
//	//���ֲ��� ��һ�����������в��Ҿ����ĳ���� ����ҵ��˷����±� ���򷵻�-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//���ⲿ��� �������������
//	int ret =binart_search(arr, k,sz); //��������������arr��Ԫ�صĵ�ַ
//	if (-1 == ret)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
//ÿʹ��һ�κ���num+1
//void Add(int* num)
//{
//	(*num)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//
//	return 0;
//} 
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf������ֵΪ��ӡ�ĸ��� 4321
//	return 0;
//}
//�����������Ͷ���
//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b); //��������
//	printf("%d", sum);
//}
//�����ݹ� ֱ�ӻ��ӵ������� �Ѵ��»�С
// �ݹ��������������� ÿ�εݹ����Խ��Խ�ӽ������������
//��ӡ�������� 1234 Ϊ 1 2 3 4
//void print(n)
//{
//	if (n>2)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//int my_strlen(char* arr)
//{
//	 int count = 0;
//		while (*arr != '\0')
//		{
//			arr++;		
//			count++;
//		}
//		return count;
//}
//��������ʱ������

//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	else
//		return 0;
//
//}
//int main()
//{
//	char arr[] = "city";
//	int len = my_strlen(arr);
//	printf("len=%d ", len);
//
//	return 0;
//}
//��n�Ľ׳�
//int jc1(i)
//{
//	int j = 0;
//	int m = 1;
//	for (j = 1;j <= i;j++) {
//		m *= j;
//	}return m;
//}
//int jc2(i)//�ݹ�
//{
//	if (i <= 1)
//		return 1;
//	else
//		return i * jc2(i - 1);
//}
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	scanf_s("%d", &i);
//	ret = jc2(i);
//	printf("%d", ret);
//	return 0;
//}