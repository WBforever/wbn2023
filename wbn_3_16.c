#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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





//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

//�ǵݹ�
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

////�ݹ�
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


//strlen������ʵ�֣��ǵݹ飩
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

//strlen������ʵ�֣��ݹ飩
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
