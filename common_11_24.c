#define  _CRT_SECURE_NO_WARNINGS
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int cmp(const void*e1, const void*e2)
//{
//	if (*(int*)e1 >= *(int*)e2)
//		return 1;
//	else
//		return 0;
//}
//int triangleNumber(int* nums, int numsSize)
//{
//	if (numsSize<3)
//		return 0;
//	int count = 0;
//	qsort(nums, numsSize, sizeof(int), cmp);
//	int i = 0;
//	for (i = 0; i<numsSize - 2; i++)
//	{
//		int j = 0;
//		int max = numsSize - 1;
//		for (j = i + 1; j<numsSize; j++)
//		{
//			while (nums[j] + nums[i]<=nums[max])
//				max--;
//			count += max - j;
//
//		}
//	}
//	return count;
//}
//第二次改进后
//int cmp(const void*e1, const void*e2)
//{
//	if (*(int*)e1 >= *(int*)e2)
//		return 1;
//	else
//		return 0;
//}
//int triangleNumber(int* nums, int numsSize)
//{
//	if (numsSize<3)
//		return 0;
//	int count = 0;
//	qsort(nums, numsSize, sizeof(int), cmp);
//	if (numsSize == 3)
//	{
//		if (nums[0] + nums[1]>nums[2])
//			return 1;
//		else
//			return 0;
//	}
//	int i = 0;
//	int flag = 0;
//	int max = numsSize - 1;
//	for (i = 0; i<numsSize - 2; i++)
//	{
//		int j = i + 1;
//		//int max=numsSize-1;
//		max = numsSize - 1;
//		int flag = 0;
//		for (j = i + 1; j<numsSize - 1; j++)
//		{
//			//max=numsSize-1;
//			if (flag == 0)
//			{
//				while (nums[j] + nums[i] <= nums[max] && max != j)
//				{
//					max--;
//				}
//				flag++;
//			}
//			else
//			{
//				while (nums[j] + nums[i] >= nums[max] && max >= j&&max<numsSize - 1)
//				{
//					max++;
//				}
//			}
//			count += max - j;
//
//		}
//
//	}
//	return count;
//}

//第三次改进
//int cmp(const void*e1, const void*e2)
//{
//	if (*(int*)e1 >= *(int*)e2)
//		return 1;
//	else
//		return 0;
//}
//int triangleNumber(int* nums, int numsSize)
//{
//	if (numsSize<3)
//		return 0;
//	int count = 0;
//	qsort(nums, numsSize, sizeof(int), cmp);
//	if (numsSize == 3)
//	{
//		if (nums[0] + nums[1]>nums[2])
//			return 1;
//		else
//			return 0;
//	}
//	int i = 0;
//	int flag = 0;
//	int max = numsSize - 1;
//	for (i = 0; i<numsSize - 2; i++)
//	{
//		int j = i + 1;
//		//int max=numsSize-1;
//		max = numsSize - 1;
//		int flag = 0;
//		for (j = i + 1; j<numsSize - 1; j++)
//		{
//			//max=numsSize-1;
//
//			if (flag == 0)
//			{
//				while (nums[j] + nums[i] <= nums[max] && max>j)
//				{
//					max--;
//				}
//				//flag++;
//			}
//			else
//			{
//				while (nums[j] + nums[i]>nums[max] && max<numsSize - 1)
//				{
//					max++;
//				}
//				if (nums[j] + nums[i]>nums[numsSize - 1])
//					max = numsSize - 1;
//			}
//			if (flag == 0)
//			{
//				count += max - j;
//				flag++;
//			}
//			else
//			{
//				if (nums[j] + nums[i]>nums[numsSize - 1])
//					count += max - j;
//				else
//					count += max - j - 1;
//			}
//
//			if (flag == 1)
//			{
//				if (max == j)
//					max++;
//				flag++;
//			}
//		}
//
//	}
//	return count;
//}

//第四次改进
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
	if (numsSize == 3)
	{
		if (nums[0] + nums[1]>nums[2])
			return 1;
		else
			return 0;
	}
	int i = 0;
	int flag = 0;
	int max = numsSize - 1;
	for (i = 0; i<numsSize - 2; i++)
	{
		if (nums[i] == 0)
			continue;
		int j = i + 1;
		//int max=numsSize-1;
		max = numsSize - 1;
		int flag = 0;
		for (j = i + 1; j<numsSize - 1; j++)
		{
			//max=numsSize-1;

			if (flag == 0)
			{
				while (nums[j] + nums[i] <= nums[max] && max>j)
				{
					max--;
				}
				//flag++;
			}
			else
			{
				while (nums[j] + nums[i]>nums[max] && max<numsSize - 1)
				{
					max++;
				}
				if (nums[j] + nums[i]>nums[numsSize - 1])
					max = numsSize - 1;
			}
			if (flag == 0)
			{
				count += max - j;
				flag++;
			}
			else
			{
				if (nums[j] + nums[i]>nums[numsSize - 1])
					count += max - j;
				else
				{
					if (max == j)
						count += 0;
					else
						count += max - j - 1;
				}
			}

			if (flag == 1)
			{
				if (max == j)
					max++;
				flag++;
			}
		}

	}
	return count;
}
int main()
{
	int arr[] = { 7, 0, 0, 0 };
	triangleNumber(arr, 4);
	return 0;
}