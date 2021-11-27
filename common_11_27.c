#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
//快速排序
//void Swap(int *a, int *b) {
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//int Partition(int a[], int l, int r){
//	int i, j, pivox;
//	int idx = l + rand() % (r - l + 1);        // (1) 
//	pivox = a[idx];                            // (2) 
//	Swap(&a[l], &a[idx]);                      // (3) 
//	i = j = l + 1;                             // (4) 
//	// 
//	while (i <= r) {                          // (5) 
//		if (a[i] < pivox) {                     // (6) 
//			Swap(&a[i], &a[j]);
//			++j;
//		}
//		++i;                                   // (7) 
//	}
//	Swap(&a[l], &a[j - 1]);                      // (8) 
//	return j - 1;
//}
//
//
////递归进行划分
//void QuickSort(int a[], int l, int r){
//	if (l < r){
//		int mid = Partition(a, l, r);
//		QuickSort(a, l, mid - 1);
//		QuickSort(a, mid + 1, r);
//	}
//}
//
//int* sortArray(int* nums, int numsSize, int* returnSize){
//	QuickSort(nums, 0, numsSize - 1);
//	*returnSize = numsSize;
//	return nums;
//}
//int main()
//{
//	int returnSize1 = 0;
//	int nums[10] = { 2, 3, 5, 1, 6, 7, 0, 4, 9, 8 };
//	int*returnSize = &returnSize1;
//	sortArray(nums,10,returnSize);
//		return 0;
//}


//做题
int findMinDifference(char ** timePoints, int timePointsSize)
{
	int i = 0;
	for (i = 0; i<timePointsSize; i++)
	{
		int j = 0;
		for (j = 0; j<2; j++)
		{
			if ((timePoints[i][0] - '0') * 10 + (timePoints[i][1] - '0') <= 12)
			{
				timePoints[i][0] += 2;
				timePoints[i][1] += 4;
			}
		}
	}
	int min = abs((((timePoints[0][0] - '0') * 10) + (timePoints[0][1] - '0')) * 60 + (timePoints[0][3] - '0') * 10 + (timePoints[0][4] - '0') - (((timePoints[1][0] - '0') * 10) + (timePoints[1][1] - '0')) * 60 + (timePoints[1][3] - '0') * 10 + (timePoints[1][4] - '0'));
	printf("%d", min);
	for (i = 0; i<timePointsSize; i++)
	{
		int j = 0;
		for (j = 0; j<timePointsSize; j++)
		{
			if (j == i)
				continue;
			int dic = abs((((timePoints[i][0] - '0') * 10) + (timePoints[i][1] - '0')) * 60 + (timePoints[i][3] - '0') * 10 + (timePoints[i][4] - '0') - (((timePoints[j][0] - '0') * 10) + (timePoints[j][1] - '0')) * 60 + (timePoints[j][3] - '0') * 10 + (timePoints[j][4] - '0'));
			if (min>dic)
				min = dic;
		}

	}
	return min;
}

int main()
{
	int arr[][1] = {"12:01","23:59"};

	 findMinDifference(arr,2 );

		return 0;
}