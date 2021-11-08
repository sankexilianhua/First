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
//int findMiddleIndex(int* nums, int numsSize)
//{
//	int midleft = 0;
//	int i = 0, j = numsSize;
//	int rightsum = 0, leftsum = 0;
//	for (midleft = 0; midleft<numsSize; midleft++)
//	{
//		rightsum = 0;
//		leftsum = 0;
//		for (j = numsSize - 1; j>midleft; j--)
//		{
//			if (midleft == numsSize - 1)
//			{
//				leftsum = 0;
//			}
//			else
//				rightsum += nums[j];
//		}
//		for (i = 0; i <= midleft; i++)
//		{
//			if (midleft == 0)
//			{
//				leftsum = 0;
//			}
//			else
//				leftsum += nums[i];
//		}
//		if (leftsum == rightsum)
//		{
//			break;
//		}
//	}
//	if (midleft<numsSize)
//		return midleft;
//	else
//		return -1;
//}
//int main()
//{
//	int nums[] = { 2, 3, -1, 8, 4 };
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	int ret =   findMiddleIndex(nums, sz);
//	printf("%d",ret);
//	return 0;
//}

//int hammingWeight(uint32_t n)
//{
//	int count = 0;
//	int i = 1;
//	while (n != 0)
//	{
//		if (n^i == 0)
//		{
//			count++;
//		}
//		i << 1;
//	}
//	return count;
//}

//int addDigits(int num)
//{
//	int ret[10000] = { 0 };
//	int i, count = 1;
//	while (1)
//	{
//		i = 0;
//		while (num)
//		{
//			ret[i] = num % 10;
//			num /= 10;
//			i++;
//			count++;
//		}
//		for (i = 0; i<count; i++)
//			num += ret[i];
//		if (num<10)
//			break;
//	}
//	return num;
//
//}
/*
int sumBase(int n, int k)
{
	int ret[10000] = { 0 };
	int i = 0;
	int count = 0;
	int sum = 0;
	while (n)
	{
		ret[i] = n%k;
		n = n / k;
		i++;
	}
	for (; i + 1>0; i--, count++)
	{
		sum += (i * 10 * ret[count]);
	}
	//return sum;
}*/

//char ret[100] = { 0 };
//char * convertToBase7(int num)
//{
//	int i = 0;
//	if (num<0)
//	{
//		ret[0] = '-';
//		i++;
//	}
//	num = abs(num);
//	while (num)
//	{
//		if (num % 7 == 0 && num / 7 == 1)
//			ret[i] = '1';
//		else
//			ret[i] = num % 7 + '0';
//		num /= 7;
//		i++;
//	}
//	ret[i + 1] = '\0';
//	return ret;
//}

char ret[100] = { '0' };
void reverse(char* ret , int i)
{
	int left = 1;
	int right = i - 1;
	while (left <= right)
	{
		char tmp = ret[left];
		ret[left] = ret[right];
		ret[right] = tmp;
		left++;
		right--;
	}
}
char * convertToBase7(int num)
{
	int i = 0;
	int j = num;
	if (num<0)
	{
		ret[0] = '-';
		i++;
	}
	int count = 1;
	num = abs(num);
	while (num)
	{
		ret[i] = num % 7 + '0';
		num /= 7;
		i++;
	}
	if (j<0)
		reverse(ret, i);
	ret[i + 1] = '\0';
	return ret;
}
int main()
{
	int n = 2;
	convertToBase7(n);
	printf("%s",ret);
	return 0;
}

//char ret[100] = { 0 };
//char * convertToBase7(int num)
//{
//	int i = 0;
//	if (num<0)
//	{
//		ret[0] = '-';
//		i++;
//	}
//	num = abs(num);
//	while (num != 1)
//	{
//		ret[i] = num % 7 + '0';
//		num /= 7;
//		i++;
//	}
//	if (num == 1)
//		i++;
//	ret[i + 1] = '\0';
//	return ret;
//}