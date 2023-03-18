#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//编写一个函数实现n的k次方，使用递归实现
double pow(int n, int k)
{
	if (k > 0)
	{
		return n * pow(n, k - 1);
	}
	else if(k < 0)
	{
		return 1 / (n * pow(n, k - 1));
	}
	else 
		return 1;
	
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = pow(n, k);
	printf("%lf", ret);
	return 0;
}