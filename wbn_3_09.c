#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void swap(int x, int y)
{
	int tmp = 0;
	tmp = x;
	x = y; 
	y = tmp;
}
void swap2(int* pa, int* pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;

}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("交换前：a=%d,b=%d\n", a, b);
	swap2(&a,&b);
	printf("交换后：a=%d,b=%d\n", a, b);
	return 0;
}