#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//whileѭ��������continue
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			continue;//������ѭ��
		printf("%d\n", i);
		i++;
	}
	return 0;
}


//whileѭ��������break
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



//whileѭ��
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
//		printf("������");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//	default:
//		printf("�������");
//		break;
//	}
//	return 0;
//}

//switch�޷�ʵ��������֧������break�ſ��Դﵽ��֧Ŀ��
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
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
//			printf("������");
//		else if (a >= 15 && a < 18)
//			printf("������");
//		else
//			printf("��ѧ��");
//	}
//	else
//		printf("С����");
//	return 0;
//}


////100�ڵ�����
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

//�ж�һ�����Ƿ�Ϊ����
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
//		printf("����������");
//	else
//		printf("������������");
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
//	    else//����else
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
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//		//printf("δ����");
//	else
//	{
//		 if (a >= 18 && a < 28)
//			printf("����");
//			else
//			printf("������");
//
//	}
////
////	//else if (a >= 18 && a < 28)
////	//	printf("����");
////	//else
////	//	printf("������");
////
//	return 0;
//}

