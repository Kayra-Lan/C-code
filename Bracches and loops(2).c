#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>

//�����룬���������
int main()
{
	int i = 0;
	char password[20] = { 0 };
	/*printf("���������룺");
	scanf("%s",password );*/
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("������ȷ\n");
			break;
		}
		else
		{
			printf("�������\n");
			system("cls");
		}
	}
	if (3==i)
		printf("����������������˳�����");
	return 0;
}


//ʹwelcome wo china�����ߵ��м佥��
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


//���ö��ַ�������Ԫ��,�����������
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
//			printf("�ҵ��ˣ��±�Ϊ%d", mid);
//			break;
//		}
//	}
//	if (left > right)//�����жϣ������ּ��ҵ������Ҳ��������
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}







//����1��+2��+����+10���Ż�
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


//����1��+2��+����+10��
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int a = 1;
//	int sum = 0;
//	for (n=1;n<=4;n++)
//	{
//		a = 1;
//		for (i = 1; i <= n; i++)//�����i=1ʹ�ý����´�ѭ��ʱi��10��ʼ��Ϊ1��
//		{
//			a *= i;
//		}
//		sum = sum + a;
//	}
//	printf("%d\n",sum);
//	return 0;
//}


//����n�Ľ׳�
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


//for�д�continue
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			continue;//forѭ����continue����������i++
//		printf("%d ", i);
//	}
//	return 0;
//}


//for�д�break
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



//for�ṹ
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//		printf("%d ", i);
//	return 0;
//}



//Ӧ��2
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

//Ӧ��1
//int main()
//{
//	int ch = 0;
//	int password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N����");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ������");
//	}
//	else
//	{
//		printf("�������");
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