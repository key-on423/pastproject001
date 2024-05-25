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
//			printf("找到了，下标为：%d\n", mid);
//			break;
//		}
//		
//
//		}
//	if (left > right)
//		printf("找不到");
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
//		printf("请输入您的密码");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登 入 成 功");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//		if (3 ==i )
//		{
//			printf("三次输入密码错误,退出程序-->按任意键");
//		}
//		
//	return 0;
//}
// 排出未知数xyz的顺序
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	scanf_s("%d%d%d", &x, &y, &z);
//	//算法实现
//	//a中放最大值
//	//b次之
//	//c中放最小值
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
//打出1到100的三的倍数
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
//求两个数的最大公因数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf_s("%d%d", &m, &n);
//	while (m%n != 0)//或(m%n) 非0为真 或(r=m%n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d ", n);
//	return 0;
//}
//判断1000到2000年的闰年
//int main()
//{
//	int count = 0;
//	int i = 1000;
//	for (i = 1000;i <= 2000;i++)
////		//能被4整除不能被100整除和 能被400整除为闰年
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
////if也可以改成
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
//计算100到200的素数
//int main()
//{
//	int count = 0;
//	int i = 0;
//for (i = 100;i <= 200;i++)
//{  //素数的判断规则
//	//1.试除法 i来除以2到i-1的数
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
//{ //如果i=a*b 那么a和b中必定有一个数<=i的开平方 如果符合的数只有1那么它是素数
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
////   注意下面判断j>sqrt(i)是放在if外面而不是里面
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount= %d ", count);
//	return 0;
//}
//《素数求解的n种境界》求最优解->境界
//求1到100的数字中有n（9）的数 和n（9）的个数
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
//计算1-1/2+1/3-1/4+1/5...-1//100
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
//求十个数的最大值
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
//99乘法表 
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		for (j = 1;j <=i ;j++)
//		{
//			printf("%d*%d=%-2d  ", i, j, i * j);//不能写成i*j=i*j 应该i,j,i*j
//		}                                     //%-2向左对齐打印2位的模式 %2向右对齐打印2位的模式
//		printf("\n");
//	}
//	return 0;
//}
//猜数字游戏
//1.电脑会生成一个随机数
//2.猜数字 
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
//	            //不放这 定义一次就够了
//          // 拿时间戳来设置随机数的生成起始点
//	         //time_t time(time_t timer)
//	                       //srand定义rand生成
//	                       //时间戳 当前计算机的时间-计算机起始时间（1970.1.1.0:0:0）=（xxx）秒
//		ret = rand()%100+1;
//		while (1)
//		{
//			printf("请猜数字:>");
//			scanf_s("%d", &guess);
//			if (guess > ret)
//			{
//				printf("猜大了\n");
//			}
//			else if (guess < ret)
//			{
//				printf("猜小了\n");
//			}
//			else
//			{
//				printf("恭喜你，猜对了\n");
//				break;
//			}
//		}
//	//printf("%d\n", ret);   // rand生成一个随机数
//}
//int main()
//{
//	srand((unsigned int)time(NULL));//放这 NULL空指针
//	int input = 0;
//	do {
//		menu();
//		printf("请选择>:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}
//goto语句跳出嵌套循环

//关机
//shutdown -s 设置关机 -t 60 设置60秒关机
//#include<string.h> 
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main()
  //system 执行系统命令
	/*char input[20] = { 0 };
	system ("shutdown -s -t 60");
	while (1)
	{
		printf("请注意，你的电脑在一分钟内关机，如果输入：xxx，就取消关机\n请输入>:")；
			sacnf("%s", input);
		if (strcmp(input, "xxx") == 0)
		{
			system("shutdown -a");
			printf("取消关机成功");
		}
	}*/
	/*again:
	printf("请注意，你的电脑在一分钟内关机，如果输入：xxx，就取消关机\n请输入>:")；
		sacnf("%s", input);
	if (strcmp(input, "xxx") == 0)
	{
		system("shutdown -a");
		printf("取消关机成功");
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
//函数
//int main()
//{  //strcpy-string copy字符串拷贝 
//	char arr1[]="bit";
//	char arr2[20] = "########";
//	strcpy(arr2, arr1);//arr1打印到arr2
//	printf("%s\n", arr2);
//	return 0;
//}
//memset- memory内存 set设置
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5); //把arr前5位打换为*
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
//写个函数来把a和b的量进行交换
//实参传给形参的时候 形参其实是实参的一份临时拷贝
//对形参的修改是不会改变实参的 所以swap1没能实现
//swap2传的是地址所以可以实现
//void Swap(int x, int y)//void没用返还值
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
//	tmp = *pa;//   ↑ ↑
//	*pa = *pb;//    ↑↑ ---形参-形式上的参数
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
// 调用swap函数
//	//Swap(a, b);
// 调用swap2函数
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);//x y有独立空间不会影响a b
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa指针变量
//	*pa = 20;//解引用操作
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
//	for (j = 2;j <= sqrt(n);j++)//sqrt 要引用math.h库函数不然用不了！
//	{
//		if (n % j == 0)
//			return 0;
//	} //如果已经判断j<=? 条件里就不能再判断j>?
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
//	{   //闰年
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}              //本质上arr是一个指针
//int binart_search(int arr[], int k,int sz)
//{   // int sz= sizeof(arr) / sizeof (arr[0]);//4除4得1 sizeof(arr)是指针大小为4  sizeof (arr[0])是数组arr第一个数的大小也为4 所以计算不出正确答案
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//<---此语句必须在循环内
//
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else {
//			return mid; // 既要处理找到也要处理找不到的条件
//		}
//	}return -1;
//}
//int main()
//{
//	
//	//二分查找 在一个有序数组中查找具体的某个数 如果找到了返还下标 否则返还-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//在外部求出 函数内难以求出
//	int ret =binart_search(arr, k,sz); //仅仅传的书数组arr首元素的地址
//	if (-1 == ret)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}
//每使用一次函数num+1
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
//	printf("%d", printf("%d", printf("%d", 43)));//printf返还的值为打印的个数 4321
//	return 0;
//}
//函数的声明和定义
//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b); //函数调用
//	printf("%d", sum);
//}
//函数递归 直接或间接调用自身 把大事化小
// 递归必须存在限制条件 每次递归必须越来越接近这个限制条件
//打印输入数字 1234 为 1 2 3 4
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
//不创造临时变量↓

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
//求n的阶乘
//int jc1(i)
//{
//	int j = 0;
//	int m = 1;
//	for (j = 1;j <= i;j++) {
//		m *= j;
//	}return m;
//}
//int jc2(i)//递归
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