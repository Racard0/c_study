#define _CRT_SECURE_NO_WARNINGS 1
//14
//#include <stdio.h>
//int main()
//{
//	int i;
//	float sum = 0;
//	int flag = -1;
//	for (i = 1; i < 101; i++)
//	{
//		flag = flag * (-1);
//		sum = sum + (flag * 1.0 / i);
//	}
//	printf("%lf", sum);
//	return 0;
//}

//13
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int max = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max=%d", max);
//	return 0;
//}

//12
//#include <stdio.h>
//
//int main()
//{
//	int i, j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//11
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	int max = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		max = a;
//		a = b;
//		b = max;
//	}
//	//前提a<b
//	for (a; a > 0; a--)
//	{
//		if (b % a == 0)
//		{
//			printf("%d", a);
//			break;
//		}
//	}
//	return 0;
//}

//10
//#include <stdio.h>
//int main()
//{
//	int year = 1000;
//	int i = 0;
//	for (year = 1000; year < 2001; year++)
//	{
//		if (year % 100 == 0)//世纪年
//		{
//			if (year % 400 == 0)
//				printf("%d ", year);
//		}
//		else//普通年
//		{
//			if (year % 4 == 0)
//				if (year % 100 != 0)
//					printf("%d ", year);
//		}
//	}
//	return 0;
//}

//9
//#include <stdio.h>
//int main()
//{
//	int n = 100;
//	int i = 0;
//	int flag = 0;
//	for (n = 100; n < 201; n++)
//	{
//		for (i = 2; i < n; i++)
//		{
//			flag = 0;
//			if (n % i == 0)
//			{
//				flag = 1;//素数为0，非素数为1
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}


//8
//#include <stdio.h>
//void bubble_sort(int arr[], int len) {
//	int i, j, temp;
//	for (i = 0; i < len - 1; i++)
//		for (j = 0; j < len - 1 - i; j++)
//			if (arr[j] < arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//}
//int main()
//{
//	int arr[3] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	bubble_sort(arr, 3);
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//7
#include <stdio.h>
int main()
{
	int n = 1;
	for (n = 1; n < 101; n++)
	{
		if (n % 3 == 0)
		{
			printf("%d ", n);
		}
	}

	return 0;
}
