#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
int DigitSum(int n)
{
	if (n <= 9)
	{
		return n;
	}
	if (n > 9)
	{
		return n % 10 + DigitSum(n / 10);
	}
	return 0;
}

int main()
{
	int num;
	scanf("%d", &num);
	int ret = DigitSum(num);
	printf("%d", ret);
	return 0;
}



//编写一个函数 reverse_string(char* string)（递归实现）
//
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//
//要求：不能使用C函数库中的字符串操作函数。
//
//比如 :
//
//char arr[] = "abcdef";
//
//逆序之后数组的内容变成：fedcba

int Mystrlen(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}

char reverse_string(char* str)
{
	char temp = 0;
	int len = Mystrlen(str);
	temp = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';

	if (Mystrlen(str + 1) > 1)
	{
		reverse_string(str + 1);
	}
		*(str + len - 1) = temp;
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}

