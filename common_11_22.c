#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void judge(char* ret, int*sum)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<8; i++)
//	{
//		if (i<10)
//			ret[j++] = sum[i] + '0';
//		else
//		{
//			switch (sum[i])
//			{
//			case 10:
//				ret[j++] = 'a';
//				break;
//			case 11:
//				ret[j++] = 'b';
//				break;
//			case 12:
//				ret[j++] = 'c';
//				break;
//			case 13:
//				ret[j++] = 'd';
//				break;
//			case 14:
//				ret[j++] = 'e';
//				break;
//			case 15:
//				ret[j++] = 'f';
//				break;
//			}
//		}
//	}
//}
//char * toHex(int num)
//{
//	char* ret = (char*)malloc(sizeof(char)* 9);
//	int arr[33] = { 0 };
//	int i = 0;
//	for (i = 0; i<32; i++)
//	{
//		arr[i] = (num >> 1 & 1);
//	}
//	int sum[8] = { 0 };
//	i = 0;
//	int j = 0;
//	for (i = 0; i<28; i += 4)
//	{
//		sum[j] = arr[i] + arr[i + 1] * 2 + arr[i + 1] * 4 + arr[i + 2] * 8;
//		j++;
//	}
//	judge(ret, sum);
//	ret[8] = '\0';
//	return ret;
//}

//void judge(char* ret, int*sum)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<8; i++)
//	{
//		if (sum[i]<10)
//			ret[j++] = sum[i] + '0';
//		else
//		{
//			switch (sum[i])
//			{
//			case 10:
//				ret[j++] = 'a';
//				break;
//			case 11:
//				ret[j++] = 'b';
//				break;
//			case 12:
//				ret[j++] = 'c';
//				break;
//			case 13:
//				ret[j++] = 'd';
//				break;
//			case 14:
//				ret[j++] = 'e';
//				break;
//			case 15:
//				ret[j++] = 'f';
//				break;
//			}
//		}
//	}
//}
//char * toHex(int num)
//{
//	char* ret = (char*)malloc(sizeof(char)* 9);
//	int arr[33] = { 0 };
//	int i = 0;
//	for (i = 0; i<32; i++)
//	{
//		arr[i] = (num & 1);
//		num = num >> 1;
//	}
//	int sum[8] = { 0 };
//	i = 0;
//	int j = 0;
//	for (i = 0; i <= 28; i += 4)
//	{
//		sum[j] = arr[i] + arr[i + 1] * 2 + arr[i + 2] * 4 + arr[i + 3] * 8;
//		j++;
//	}
//	judge(ret, sum);
//	ret[8] = '\0';
//	return ret;
//}

int dominantIndex(int* nums, int numsSize)
{
	int i = 0;
	int max = 0;
	for (i = 0; i<numsSize; i++)
	{
		if (nums[max]<nums[i])
			max = i;
	}
	int max2 = max - 1;
	if (max == 0)
		max2 = max + 1;
	for (i = 0; i<numsSize; i++)
	{
		if (i == max)
			continue;
		if (nums[max]<nums[i])
			max2 = i;
	}
	if (nums[max] >= 2 * nums[max2])
		return max;
	else
		return -1;
}
int main()
{
	int nums[] = { 0, 0, 3, 2 };
	dominantIndex(nums,4);
	return 0;
}