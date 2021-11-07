#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#inlcude<stdlib.h>
//bool isPowerOfThree(int n){
//	int i = n;
//	while (i >= 3)
//	{
//		i = i / 3;
//	}
//	if (n == 0)
//		return false;
//	if (i == 0)
//		return true;
//	else
//		return false;
//}
int findMiddleIndex(int* nums, int numsSize)
{
	int midleft = 0;
	int i = 0, j = numsSize;
	int rightsum = 0, leftsum = 0;
	for (midleft = 0; midleft<numsSize; midleft++)
	{
		rightsum = 0;
		leftsum = 0;
		for (j = numsSize - 1; j>midleft; j--)
		{
			if (midleft == numsSize - 1)
			{
				leftsum = 0;
			}
			else
				rightsum += nums[j];
		}
		for (i = 0; i <= midleft; i++)
		{
			if (midleft == 0)
			{
				leftsum = 0;
			}
			else
				leftsum += nums[i];
		}
		if (leftsum == rightsum)
		{
			break;
		}
	}
	if (midleft<numsSize)
		return midleft;
	else
		return -1;
}
int main()
{
	int nums[] = { 2, 3, -1, 8, 4 };
	int sz = sizeof(nums) / sizeof(nums[0]);
	int ret =   findMiddleIndex(nums, sz);
	printf("%d",ret);
	return 0;
}