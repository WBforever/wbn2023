#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr[200] = { 1,2,3,4,5 };
//	printf("%d", sizeof(arr));
//	return 0;
//}


//ц╟ещеепР
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 0;
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}

}

int main()
{
	int arr[10] = { 7,8,4,5,9,6,1,2,3,0 };
	int n = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (n = 0; n < sz ; n++)
	{
		printf("%d ", arr[n]);
	}
	return 0;
}