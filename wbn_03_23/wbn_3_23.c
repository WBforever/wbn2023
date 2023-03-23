#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//多组输入，每一行输入大写字母。
//输出描述：
//针对每组输入输出对应的小写字母。
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		getchar();
		putchar(ch + 32);
		printf("\n");
	}
	return 0;
}
//
//小乐乐学校教学楼的电梯前排了很多人，他的前面有n个人在等电梯。电梯每次可以乘坐12人，每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）。
// 请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。（假设最初电梯在1层）
//
//输入描述：
//输入包含一个整数n(0 ≤ n ≤ 109)
//
//输出描述：
//输出一个整数，即小乐乐到达楼上需要的时间。
int main()
{
	int n = 0;
	int t = 0;
	scanf("%d", &n);
	t = (n / 12 ) * 4+2;
	printf("%d", t);
	return 0;
}

//BoBo教KiKi字符常量或字符变量表示的字符在内存中以ASCII码形式存储。
// BoBo出了一个问题给KiKi，转换以下ASCII码为对应字符并输出他们。
//73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33
int main()
{
	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}
