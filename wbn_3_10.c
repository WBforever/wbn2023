#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    if (n < 12)
//        printf("%d\n", 2);
//    if (n >= 12)
//    {
//        printf("%d\n", 4 * (n / 12) + 2);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        getchar();
//        putchar(ch + 32);
//        printf("\n");
//    }
//    return 0;
//}

int main()
{
    int a[12] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
    int i = 0;
    while (i < 12)
    {
        printf("%c", a[i]);
        i++;
    }
    return 0;
}