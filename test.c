#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

struct people
{
	char name[20];
	int age;
	int weight;
};
int main()
{
	struct people p1 = { "兰凯惠",20,57 };
	struct people* person = &p1;
	strcpy(p1.name, "舟舟");
	printf("姓名:%s\n",  (*person).name);
	//printf("年龄:%d\n", person->age);
	//printf("姓名：%s  年龄：%d  体重:%d", p1.name, p1.age, p1.weight);
	return 0;
}


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a); 
//	//printf("%d\n", sizeof(p));
//	return 0;
//}

//#define MAX(x,y) (x>y?x:y)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//void test()
//{
//	int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = {6};
//	printf("%d\n", arr[1]);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//    int b = 5;
//	int max = 0;
//	scanf("%d%d", &a, &b);
//	max = a > b ? a : b;
//	printf("%d\n", max);
//
//	return 0;
//}



//int Max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}

//int main()
//{
//	//int num1 = 0;
//	//int num2 = 0;
//	//int max = 0;
//	//scanf("%d%d", &num1, &num2);
//	//max = Max(num1, num2);
//	//printf("较大值为：%d\n", max);
//
//	/*int a = 10;
//	int b = a--;
//	printf("a=%d,b=%d", a, b);*/
//
//	//int a =(int) 3.14;
//
//	int a = 0;
//	int b = 2;
//	//int c = a && b;
//	printf("%d\n", a || b);
//
//	return 0;
//}