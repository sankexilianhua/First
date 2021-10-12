#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 2, 5, 3, 9, 6, 4 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("交换前：");
//	for (; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (i = 0; i<sz-1; i++)
//	{
//		int tmp;
//		int j = i;
//		int min = i;//记录最小值
//		for (; j<sz; j++)
//		{
//			if (arr[min]>arr[j])
//			{
//				min = j;
//			}
//		}
//		//将两个变量交换，使得数组元素中最小的那个到第一个位置
//		tmp = arr[i];
//		arr[i] = arr[min];
//		arr[min] = tmp;
//	}
//	printf("交换后：");
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//优化后
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 2, 5, 3, 9, 6, 4 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("交换前：");
//	for (; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	int flag = 1;
//	int count = 0;//依然使用flag来记录一下是否进入if，用count来记录是否因偶次数而使flag又变回1
//	for (i = 0; i<sz - 1; i++)
//	{
//		int tmp;
//		int j = i;
//		int min = i;//记录最小值
//		for (; j<sz; j++)
//		{
//			if (arr[min]>arr[j])
//			{
//				min = j;
//				flag = -flag;
//				count++;
//			}
//		}
//		if (flag == 1 && count % 2 != 0)
//			break;
//		//将两个变量交换，使得数组元素中最小的那个到第一个位置
//		tmp = arr[i];
//		arr[i] = arr[min];
//		arr[min] = tmp;
//	}
//	printf("交换后：");
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}