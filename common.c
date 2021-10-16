#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void sort(int arr[], int n)
//{
//	int i = 0;
//	for (; i<n ; i++)
//	{
//		int j = i;
//		int max = i;
//		for (; j<n ; j++)
//		{
//			if (arr[max]<arr[j ])
//			{
//				max = j ;
//			}
//		}
//		int tmp = arr[i];
//		arr[i] = arr[max];
//		arr[max] = tmp;
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[41] = { 0 };
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	sort(arr, n);
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}