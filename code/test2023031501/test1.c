#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    int key1 = m - 1;
    int key2 = n - 1;
    int end = nums1Size - 1;
    while (key1 * key2 * end >= 0)
    {
        if (nums2[key2] >= nums1[key1])
        {
            nums1[end] = nums2[key2];
            key2--;
        }
        else
        {
            nums1[end] = nums1[key1];
            key1--;
        }
        end--;
    }

}
int main()
{
	int num1[2] = { 1,0 };
	int num2[1] = {2};
    merge(num1, 2, 1, num2, 1, 1);
}
