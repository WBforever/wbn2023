#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
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