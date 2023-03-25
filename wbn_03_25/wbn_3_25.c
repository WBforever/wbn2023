#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int a = 5;
	int b = a << 1;//左移操作符
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}

int main()
{
	int a = -5;
	int b = a >> 1;
	//a的原码00000000000000000000000000000101
	//a的反码11111111111111111111111111111010
	//a的补码11111111111111111111111111111101
	//a>>1的补码11111111111111111111111111111101
	//a>>1的原码10000000000000000000000000000011
	printf("a=%d b=%d\n", a, b);
	return 0;
}


//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = (a = b + 10, b = a + 1, c = b + 2);//逗号表达式
//	printf("%d", d);
//	return 0;
//}

struct Stu
{
	char name[20];
	int age;
	float score;
};
void print1(struct Stu N)
{
	printf("%s %d %f\n", N.name, N.age, N.score);//结构体变量.成员名
}
void print2(struct Stu* ps)
{
	printf("%s %d %f\n", (*ps).name, (*ps).age, (*ps).score);
	printf("%s %d %f\n", ps->name, ps->age, ps->score);//结构体指针->成员名
}
int main()
{
	struct Stu s = { "lzy",20,87.5f };
	print1(s);
	print2(&s);
	return 0;
}