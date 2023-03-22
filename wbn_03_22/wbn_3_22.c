#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//猜数字游戏
//1. 电脑随机生成一个数字（1~100）
//2. 玩家猜数字
//   玩家猜小了，就告知猜小了
//   玩家猜大了，就告知猜大了
//   直到猜对为止
//3. 游戏可以一直玩
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
		printf("请输入猜的数字:>");
		scanf("%d", &guess);

		if (guess < ret)
		{
			printf("猜小了，请继续\n");
		}
		else if (guess > ret)
		{
			printf("猜大了，请继续\n");
		}
		else
		{
			printf("猜对了\n");
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
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}

	} while (input);
	return 0;
}



//编写代码在一个整形有序数组中查找具体的某个数
//
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。

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
			printf("找到了，下标为：%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}


