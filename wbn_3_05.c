#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	float a, b, c, d, e;
//	float avg = 0;
//	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
//	avg = (a + b + c + d + e)/5;
//	printf("%.2f", avg);
//	return 0;
//}
//´ý¾À´í

//int max3(int(x), int(y), int(z))
//{
//    if (x >= y && x >= z)
//    {
//        return x;
//    }
//    else if (y > x && y > z)
//    {
//        return y;
//    }
//    else
//    {
//        return z;
//    }
//}
//
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int m = 0;
//    int ret1 = max3(a + b, b, c);
//    int ret2 = max3(a, b + c, c);
//    int ret3 = max3(a, b, b + c);
//    scanf("%d%d%d", &a, &b, &c);
//    int m = ret1 / (ret2 + ret3);
//    printf("%.2f", m);
//    return 0;
//}

//int max3(int a, int b, int c)
//{
//    int max = a;
//    if (max < b)
//    {
//        max = b;
//    }
//    if (max < c)
//    {
//        max = c;
//    }
//    return max;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    double sum = 0.0;
//    scanf("%d%d%d", &a, &b, &c);
//    int ret1 = max3(a + b, b, c);
//    int ret2 = max3(a, b + c, c);
//    int ret3 = max3(a, b, b + c);
//    sum = ret1 * 1.0 / (ret2 + ret3);
//    printf("%.2lf", sum);
//    return 0;
//}

//void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//    int i = nums1.size() - 1;
//    m--;
//    n--;
//    while (n >= 0) {
//        while (m >= 0 && nums1[m] > nums2[n]) {
//            swap(nums1[i--], nums1[m--]);
//        }
//        swap(nums1[i--], nums2[n--]);
//    }
//}
//int removeElement(int* nums, int numsSize, int val) {
//    int left = 0;
//    for (int right = 0; right < numsSize; right++) {
//        if (nums[right] != val) {
//            nums[left] = nums[right];
//            left++;
//        }
//    }
//    return left;
//}


