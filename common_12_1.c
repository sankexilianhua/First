#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
leetcode 191
//解法一：
int hammingWeight(uint32_t n)
{
	int count = 0;
	int i = 1;
	while (n)
	{
		count += n & 1;
		n = n >> 1;
	}
	return count;
}
// //解法二：
// int hammingWeight(uint32_t n) 
// {
//     int count=0;
//     while(n)
//     {
//         n&=n-1;
//         count++;
//     }    
//     return count;
// }
leetcode 剑指offer15
//解法一：
// int hammingWeight(uint32_t n) 
// {
//     int count=0;
//     int m=0;
//       while(n!=0)
//       {
//           m=n%2;
//           if(m==1)
//           count++;
//           n=n/2;

//       }
//       return count;
// }

//解法二：
int hammingWeight(uint32_t n)
{
	int count = 0;
	while (n)
	{
		n &= n - 1;
		count++;
	}
	return count;
}
leetcode 1356
/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int cmp(const void*e1, const void*e2)
{
	int count1 = 0;
	int count2 = 0;
	int i = *(int*)e1;
	int j = *(int*)e2;
	while (i)
	{
		i &= i - 1;
		count1++;
	}
	while (j)
	{
		j &= j - 1;
		count2++;
	}
	if (count1 == count2)
		return *(int*)e1 - *(int*)e2;
	if (count1 >= count2)
		return 1;
	else
		return 0;
}
int* sortByBits(int* arr, int arrSize, int* returnSize)
{
	qsort(arr, arrSize, sizeof(int), cmp);
	*returnSize = arrSize;
	return arr;
}

leetcode 762
bool Isprime(int n)
{
	if (n == 1)
		return false;
	int i = 2;
	for (; i <= sqrt(n); i++)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}
int countPrimeSetBits(int left, int right)
{
	int i = left;
	int countsum = 0;
	for (; i <= right; i++)
	{
		int count = 0;
		int j = i;
		while (j)
		{
			j &= j - 1;
			count++;
		}
		if (Isprime(count))
			countsum++;
	}
	return countsum;
}

leetcode231.2
//解法一：
// bool isPowerOfTwo(int n)
// {
//       double i=log2(n);
//       if(i==(int)i)
//       return true;
//       else
//       return false;
// }
//解法二：
bool isPowerOfTwo(int n)
{
	if (n <= 0)
		return false;
	if (n&(n - 1))
		return false;
	return true;
}