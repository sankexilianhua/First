#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
bool num(int** arr, int i, int j, int row, int col)
{
	int m = 0;
	for (m = 0; m<row; m++)
	{
		if (m == i)
			continue;
		if (arr[i][j]<arr[m][j])
			return false;
	}
	for (m = 0; m<col; m++)
	{
		if (m == j)
			continue;
		if (arr[i][j]>arr[i][m])
			return false;
	}
	return true;
}
int* luckyNumbers(int** matrix, int matrixSize, int* matrixColSize, int* returnSize)
{
	int*ans = (int*)malloc(sizeof(int)*matrixSize);
	int i = 0;
	int count = 0;
	for (i = 0; i<matrixSize; i++)
	{
		int j = 0;
		for (j = 0; j<matrixSize; j++)
		{
			if (num(matrix, i, j, matrixSize, *matrixColSize))
			{
				ans[count] = matrix[i][j];
				count++;
			}
		}
	}
	*returnSize = count;
	return ans;
}
int main()
{
	int b = 4;
	int arr[3][4] = { { 1, 10, 4, 2 }, { 9, 3, 8, 7 }, { 15, 16, 17, 12 } };
	int** matrix = &arr;
	int*p = b;
	int *a=b;
	luckyNumbers(matrix,3,p,a);
	return 0;
}