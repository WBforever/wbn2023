#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//��������Ϸ
//1. �����������һ�����֣�1~100��
//2. ��Ҳ�����
//   ��Ҳ�С�ˣ��͸�֪��С��
//   ��Ҳ´��ˣ��͸�֪�´���
//   ֱ���¶�Ϊֹ
//3. ��Ϸ����һֱ��
void menu()
{
	printf("*******************\n");
	printf("****** 1.play *****\n");
	printf("****** 0.exit *****\n");
	printf("*******************\n");
}
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("������µ�����:>");
		scanf("%d", &guess);

		if (guess < ret)
		{
			printf("��С�ˣ������\n");
		}
		else if (guess > ret)
		{
			printf("�´��ˣ������\n");
		}
		else
		{
			printf("�¶���\n");
				break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}

	} while (input);
	return 0;
}



//��д������һ���������������в��Ҿ����ĳ����
//
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int n = 0;
	int left = 0;
	int right = sz - 1;
	scanf("%d", &n);
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > n)
		{
			right = mid - 1;
		}
		else if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±�Ϊ��%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}


