#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
//½âÌâ¼ÇÂ¼
/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int cmp_int(const void*e1, const void*e2)
{
	if (*(int*)e1 >= *(int*)e2)
		return 1;
	else
		return 0;
}
int* sortArray(int* nums, int numsSize, int* returnSize)
{
	qsort(nums, numsSize, sizeof(int), cmp_int);
	*returnSize = numsSize;
	return nums;
}

int cmp(const void*e1, const void*e2)
{
	if (*(int*)e1 >= *(int*)e2)
		return 1;
	else
		return 0;
}
int majorityElement(int* nums, int numsSize)
{
	if (numsSize == 1)
		return nums[0];
	qsort(nums, numsSize, sizeof(int), cmp);
	printf("%d", nums[0]);
	int i = 0;
	int max = 1;
	for (i = 1; i<numsSize; i++)
	{
		if (nums[i] != nums[i - 1])
			max = 1;
		if (nums[i] == nums[i - 1])
			max++;
		if (max>numsSize / 2)
		{
			return nums[i];
		}
	}
	return 0;
}

int cmp(const void*e1, const void*e2)
{
	if (*(int*)e1 >= *(int*)e2)
		return 1;
	else
		return 0;
}
bool containsDuplicate(int* nums, int numsSize)
{
	if (numsSize == 1)
		return false;
	qsort(nums, numsSize, sizeof(int), cmp);
	int i = 0;
	for (i = 0; i<numsSize - 1; i++)
	{
		if (nums[i] == nums[i + 1])
			return true;
	}
	return false;
}

int cmp(const void*e1, const void*e2)
{
	if (*(int*)e1 >= *(int*)e2)
		return 1;
	else
		return 0;
}
int maximumGap(int* nums, int numsSize)
{
	if (numsSize<2)
		return 0;
	qsort(nums, numsSize, sizeof(int), cmp);
	int max = nums[1] - nums[0];
	int i = 0;
	for (i = 1; i<numsSize - 1; i++)
	{
		if (nums[i + 1] - nums[i]>max)
			max = nums[i + 1] - nums[i];
	}
	return max;
}

/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* sortArrayByParity(int* nums, int numsSize, int* returnSize)
{
	int* ret = (int*)malloc(sizeof(int)*numsSize);
	int k = 0;
	int j = numsSize - 1;
	int i = 0;
	for (i = 0; i<numsSize; i++)
	{
		if (nums[i] % 2 == 0)
		{
			ret[k] = nums[i];
			k++;
		}
		else
		{
			ret[j] = nums[i];
			j--;
		}
	}
	*returnSize = numsSize;
	return ret;
}


int cmp(const void*e1, const void*e2)
{
	if (*(int*)e1 >= *(int*)e2)
		return 1;
	else
		return 0;
}
int singleNumber(int* nums, int numsSize)
{
	if (numsSize == 1)
		return nums[0];
	qsort(nums, numsSize, sizeof(int), cmp);
	int i = 0;
	for (i = 1; i<numsSize - 1; i++)
	{
		if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1])
			return nums[i];
	}
	if (nums[i] != nums[i - 1])
		return nums[i];
	if (nums[0] != nums[1])
		return nums[0];
	return 0;
}