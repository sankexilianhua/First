#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int findMaxConsecutiveOnes(int* nums, int numsSize)
//{
//	int i = 0;
//	int count = 0;
//	int count1 = 0;
//	for (i = 0; i<numsSize - 1; i++)
//	{
//		if ((nums[i] == 1) && (nums[i + 1] == 1))
//			count1++;
//		else if ((nums[i] == 1) && (nums[i + 1] != 1))
//			count1++;
//		else
//		{
//			if (count1>count)
//			{
//				count = count1;
//				count1 = 0;
//			}
//		}
//	}
//	return count;
//}
//int findMaxConsecutiveOnes(int* nums, int numsSize)
//{
//	int i = 0;
//	int count = 0;
//	int count1 = 0;
//	for (i = 0; i<numsSize; i++)
//	{
//		if (nums[i] == 1)
//			count1++;
//		else if (nums[i] == 0 || i == numsSize - 1)
//		{
//			if (count1>count)
//			{
//				count = count1;
//			}
//			count1 = 0;
//		}
//	}
//	return count;
//}

int maxProduct(int* nums, int numsSize)
{
	int i = 0;
	int mul = 0, mul1 = 0;
	for (i = 0; i<numsSize - 1; i++)
	{
		int j = 0;
		for (j = i + 1; j<numsSize - 1; j++)
		{
			mul1 = (nums[i] - 1)*(nums[j] - 1);
		}
		if (mul<mul1)
			mul = mul1;
	}
	return mul;
}
int main()
{
	int nums[] = {1,1,0,1,1,1,1};
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int ret=findMaxConsecutiveOnes(nums, numsSize);
	printf("%d",ret);
	return 0;
}