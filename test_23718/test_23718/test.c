#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//printf("hello world!");

	//printf("%d\n", sizeof(char));
	//printf("%d\n", sizeof(short));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(long));
	//printf("%d\n", sizeof(long long));
	//printf("%d\n", sizeof(float));
	//printf("%d\n", sizeof(double));

	int num1 = 0;
	int num2 = 0;
	printf("请输入num1的值");
	scanf("%d", &num1);
	printf("请输入num2的值");
	scanf("%d", &num2);
	printf("num1+num2=%d", num1 + num2);

	return 0;
}