#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);
		if (strcmp(password, "abcdef") == 0)
		{
			printf("������ȷ\n");
			break;
		}
		else
		{
			printf("���������������\n");
		}
	}
	if (i == 3)
	{
		printf("�����������������˳�����\n");
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