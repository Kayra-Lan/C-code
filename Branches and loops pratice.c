#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>



//求1/1-1/2+1/3-……-1/100;（正负号的转换、小数）

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int j = 1;
//	for (i=1;i<=100;i++)
//	{
//		sum += j*(1.0 / i);
//		j = -j;
//	}
//	printf("sum=%lf", sum);
//	return 0;
//}



//1-100之间含9的数字有多少个
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 10 == 9) || (i / 10 == 9))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}



//打印100-200之间的素数(试除法)（通过调整试除范围进行优化）
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i=101;i<=200;i+=2)//优化，偶数不可能使素数
//	{
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)//优化，只需将小于平方根的数字遍历
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j >sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}



//打印1000-2000年之间的闰年

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year < 2025; year++)
//	{
//		//判断year是否为闰年
//		//法一：被4整除且不被100整除；法二：被400整除
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n总计%d个", count);
//		return 0;
//}


//找任意两个数直接的最大公约数（高代：辗转相除法）

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m % n )
//	{
//		/*r = m % n;*/
//		m = n;
//		n = r;
//	}
//	printf("最大公约数为%d", n);
//	return 0;
//}

//错误
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	while(m % n!=0)
//	{
//		m = n;
//		n = m % n;//此时m已经变成n
//	}
//	printf("最大公约数为%d", n);
//	return 0;
//}



//打印1-100之间3的倍数的数

//int main()
//{
//	int i = 0;
//	for (i=1;i<101;i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}



//将三个数从大到小输出

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
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
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("从大到小为%d,%d,%d", a, b, c);
//	return 0;
//}



//int main() 
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a >= b)
//	{
//		if (c >= a)
//			printf("从大到小为%d,%d,%d",c,a,b);
//		else
//		{
//			if (b < c)
//				printf("从大到小为%d,%d,%d", a,c,b);
//			else
//				printf("从大到小为%d,%d,%d",a,b,c);
//		}
//	}
//	else
//	{
//		if (c >= b)
//			printf("从大到小为%d,%d,%d",c,b,a);
//		else
//		{
//			if (a < c)
//				printf("从大到小为%d,%d,%d",b,c,a);
//			else
//				printf("从大到小为%d,%d,%d", b,a,c);
//		}
//	}
//	return 0;
//}
