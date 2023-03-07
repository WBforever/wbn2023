#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		if (strcmp(password, "abcdef") == 0)
		{
			printf("密码正确\n");
			break;
		}
		else
		{
			printf("密码错误，重新输入\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码均输入错误，退出程序\n");
	}
	return 0;
#include <stdio.h>
	int main()
	{
		int a = 0, b = 0;
		for (a = 1, b = 1; a <= 100; a++)
		{
			if (b >= 20) break;
			if (b % 3 == 1)
			{
				b = b + 3;
				continue;
			}
			b = b - 5;
		}
		printf("%d\n", a);
		return 0;
	}