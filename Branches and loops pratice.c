#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>



//��1/1-1/2+1/3-����-1/100;�������ŵ�ת����С����

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



//1-100֮�京9�������ж��ٸ�
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



//��ӡ100-200֮�������(�Գ���)��ͨ�������Գ���Χ�����Ż���
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i=101;i<=200;i+=2)//�Ż���ż��������ʹ����
//	{
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)//�Ż���ֻ�轫С��ƽ���������ֱ���
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



//��ӡ1000-2000��֮�������

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year < 2025; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		//��һ����4�����Ҳ���100��������������400����
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
//	printf("\n�ܼ�%d��", count);
//		return 0;
//}


//������������ֱ�ӵ����Լ�����ߴ���շת�������

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
//	printf("���Լ��Ϊ%d", n);
//	return 0;
//}

//����
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	while(m % n!=0)
//	{
//		m = n;
//		n = m % n;//��ʱm�Ѿ����n
//	}
//	printf("���Լ��Ϊ%d", n);
//	return 0;
//}



//��ӡ1-100֮��3�ı�������

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



//���������Ӵ�С���

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
//	printf("�Ӵ�СΪ%d,%d,%d", a, b, c);
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
//			printf("�Ӵ�СΪ%d,%d,%d",c,a,b);
//		else
//		{
//			if (b < c)
//				printf("�Ӵ�СΪ%d,%d,%d", a,c,b);
//			else
//				printf("�Ӵ�СΪ%d,%d,%d",a,b,c);
//		}
//	}
//	else
//	{
//		if (c >= b)
//			printf("�Ӵ�СΪ%d,%d,%d",c,b,a);
//		else
//		{
//			if (a < c)
//				printf("�Ӵ�СΪ%d,%d,%d",b,c,a);
//			else
//				printf("�Ӵ�СΪ%d,%d,%d", b,a,c);
//		}
//	}
//	return 0;
//}