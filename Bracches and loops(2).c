#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>

//输密码，最多输三次
int main()
{
	int i = 0;
	char password[20] = { 0 };
	/*printf("请输入密码：");
	scanf("%s",password );*/
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("密码正确\n");
			break;
		}
		else
		{
			printf("密码错误\n");
			system("cls");
		}
	}
	if (3==i)
		printf("连续三次输入错误，退出程序");
	return 0;
}


//使welcome wo china从两边到中间渐出
//int main()
//{
//	char arr1[] = "welcome to China!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");
//		left++;
//		right--;
//	}
//
//	return 0;
//}


//利用二分法求所找元素,针对有序数列
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 2;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz-1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
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
//			printf("找到了，下标为%d", mid);
//			break;
//		}
//	}
//	if (left > right)//若不判断，则会出现即找到了由找不到的情况
//	{
//		printf("找不到");
//	}
//	return 0;
//}







//计算1！+2！+……+10！优化
//int main()
//{
//	int n = 0;
//	int a = 1;
//	int sum = 0;
//	for (n=1;n<=4;n++)
//	{
//		a = a * n;
//		sum += a;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


//计算1！+2！+……+10！
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int a = 1;
//	int sum = 0;
//	for (n=1;n<=4;n++)
//	{
//		a = 1;
//		for (i = 1; i <= n; i++)//这里的i=1使得进入下次循环时i由10初始化为1；
//		{
//			a *= i;
//		}
//		sum = sum + a;
//	}
//	printf("%d\n",sum);
//	return 0;
//}


//计算n的阶乘
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int a = 1;
//	scanf("%d", &n);
//	for (i=1;i<=n;i++)
//	{
//		a *=i;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//for中带continue
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			continue;//for循环中continue结束后会继续i++
//		printf("%d ", i);
//	}
//	return 0;
//}


//for中带break
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//	}	
//	return 0;
//}



//for结构
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//		printf("%d ", i);
//	return 0;
//}



//应用2
//int main()
//{
//	int ch = '0';
//	while ((ch=getchar())!=EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		printf("%c\n", ch);
//	}
//	return 0;
//}

//应用1
//int main()
//{
//	int ch = 0;
//	int password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（Y/N）：");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认密码");
//	}
//	else
//	{
//		printf("密码错误");
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch=getchar())!=EOF)
//	{
//		printf("%c", ch);
//	}
//	return 0;
//}