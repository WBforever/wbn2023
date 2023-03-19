#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//递归实现求第n个斐波那契数
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else if (n > 2)
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}

//非递归实现求第n个斐波那契数
int fib(int n)
{
	int num1 = 1;
	int num2 = 1;
	int num3 = 0;
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		while (n > 2)
		{
			num3 = num1 + num2;
			num1 = num2;
			num2 = num3;
			n--;
		}
	}
	return num3;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d", ret);
	return 0;
}

