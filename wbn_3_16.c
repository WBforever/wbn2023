#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//递归方式实现打印一个整数的每一位
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}





//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

//非递归
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//	return 0;
//}

////递归
//int jc(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return n* jc(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=jc(n);
//	printf("%d", ret);
//	return 0;
//}


//strlen函数的实现（非递归）
#include<string.h>
//int Mystrlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//strlen函数的实现（递归）
int Mystrlen(char* str)
{
	if (*str != '\0')
	{
		return Mystrlen(str + 1) + 1;
	}
	return 0;
}

int main()
{
	char arr[] = "abcdef";
	char* str = arr;
	int len = Mystrlen(arr);
	printf("%d", len);
	return 0;
}
