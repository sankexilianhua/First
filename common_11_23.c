#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int cmp(const void*e1, const void*e2)
{
	if (*(int*)e1 >= *(int*)e2)
		return 1;
	else
		return 0;
}
int triangleNumber(int* nums, int numsSize)
{
	if (numsSize<3)
		return 0;
	int count = 0;
	qsort(nums, numsSize, sizeof(int), cmp);
	int i = 0;
	for (i = 0; i<numsSize - 2; i++)
	{
		int j = 0;
		int max = numsSize - 1;
		for (j = i + 1; j<numsSize; j++)
		{
			while (nums[j] + nums[i]<=nums[max])
				max--;
			count += max - j;

		}
	}
	return count;
}
int main()
{
	int arr[] = { 2, 2, 3, 4 };
	triangleNumber(arr, 4);
	return 0;
}