#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//while循环中遇到continue
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			continue;//陷入死循环
		printf("%d\n", i);
		i++;
	}
	return 0;
}


//while循环中遇到break
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}



//while循环
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default:
//		printf("输入错误");
//		break;
//	}
//	return 0;
//}

//switch无法实现真正分支，搭配break才可以达到分支目的
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int a = 17;
//	scanf("%d", &a);
//	if (a > 10)
//	{
//		if (a < 15)
//			printf("初中生");
//		else if (a >= 15 && a < 18)
//			printf("高中生");
//		else
//			printf("大学生");
//	}
//	else
//		printf("小孩子");
//	return 0;
//}


////100内的奇数
//int main()
//{
//	/*int a = 0;*/
//	int i = 1;
//	while (i <= 100)
//	{
//		/*a = i % 2;*/
//		if (1 == i%2)
//			printf("%d\n", i);
//		i++;
//
//	}
//	return 0;
//}

//判断一个数是否为奇数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	/*int i = 1;*/
//	scanf("%d", &a);
//	 b = a % 2;
//	/*while (i <= 100)
//	{
//		b = i % 2;
//		if (1 == b)
//			printf("%d\n",i);
//		i++;
//	} */
//	if (1 == b)
//		printf("该数是奇数");
//	else
//		printf("该数不是奇数");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//
//	return 0;
//}


//int main()
//{   
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	    else//悬空else
//			printf("haha\n");
//
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a < 18)
//	{
//		printf("未成年\n");
//		printf("不许谈恋爱\n");
//	}
//		//printf("未成年");
//	else
//	{
//		 if (a >= 18 && a < 28)
//			printf("青年");
//			else
//			printf("中老年");
//
//	}
////
////	//else if (a >= 18 && a < 28)
////	//	printf("青年");
////	//else
////	//	printf("中老年");
////
//	return 0;
//}

