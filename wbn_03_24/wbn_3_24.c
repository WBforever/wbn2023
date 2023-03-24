#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    char arr[100] = { 0 };
 
    gets(arr);

    int len = strlen(arr);
    int left = 0;
    int right = len - 1;

    while (left < right)
    {
        char temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }

    printf("%s\n", arr);

    return 0;
}