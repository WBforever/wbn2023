#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
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



//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//
//���� :
//
//char arr[] = "abcdef";
//
//����֮����������ݱ�ɣ�fedcba

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

