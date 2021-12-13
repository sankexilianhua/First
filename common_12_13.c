#define  _CRT_SECURE_NO_WARNINGS

/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* shuffle(int* nums, int numsSize, int n, int* returnSize)
{
	int i = 1;
	int j = numsSize;
	for (i = 1, j = n; i<numsSize; i += 2, j++)
	{
		int tmp = *(nums + j);
		int k = j - 1;
		for (; k >= i; k--)
		{
			*(nums + k + 1) = *(nums + k);
		}
		nums[i] = tmp;
	}
	*returnSize = numsSize;
	return nums;
}

/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* getConcatenation(int* nums, int numsSize, int* returnSize)
{
	int* ans = (int*)malloc(sizeof(int)* 2 * numsSize);
	int i = 0;
	for (i = 0; i<numsSize; i++)
	{
		*(ans + i) = *(nums + i);
	}
	int j = 0;
	for (; i<2 * numsSize; i++)
	{
		*(ans + i) = *(nums + j);
		j++;
	}
	*returnSize = 2 * numsSize;
	return ans;
}

/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* buildArray(int* nums, int numsSize, int* returnSize)
{
	int* ans = (int*)malloc(sizeof(int)*numsSize);
	int i = 0;
	for (i = 0; i<numsSize; i++)
	{
		*(ans + i) = *(nums + *(nums + i));
	}
	*returnSize = numsSize;
	return ans;
}

/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* runningSum(int* nums, int numsSize, int* returnSize)
{
	int* ans = (int*)malloc(sizeof(int)*numsSize);
	int i = 0;
	for (i = 0; i<numsSize; i++)
	{
		int sum = 0;
		int k = 0;
		for (k = 0; k <= i; k++)
		{
			sum += nums[k];
		}
		*(ans + i) = sum;
	}
	*returnSize = numsSize;
	return ans;
}

char* reverseLeftWords(char* s, int n)
{
	int len = strlen(s);
	char*ans = (char*)malloc(sizeof(char)*(len + 1));
	char* stop = &s[n];
	char*start = stop;
	char* left = s;
	int i = 0;
	for (; *start != '\0'; start++)
	{
		ans[i++] = *(start);
	}
	while (left<stop)
	{
		ans[i++] = *left;
		left++;
	}
	ans[i] = '\0';
	return ans;
}