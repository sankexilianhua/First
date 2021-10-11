#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//这样会更具普遍性一些，而不是单纯只用看得出来的10，要考虑到数组是在变化的。
//	int  i = 0;
//	printf("交换前：");
//	for (; i<sz; i++)//这里的这一段代码只是为了对比让读者能更清晰的看到排序的区别，如果只是为了排序，可以不要这段代码
//	{
//		printf("%d ", arr[i]);
//	}
//	for (i = 0; i<sz; i++)//这是要走的趟数
//	{
//		int j = 0;
//		for (j = 0; j<sz - 2; j++)//这里要注意一下，sz-2这个条件，下面数组要用到j+1，防止出现越界访问的现象。
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//
//			}
//		}
//	}
//	printf("\n");
//	printf("交换后：");
//	for (i = 0; i<sz; i++)//这里的这一段代码只是为了对比让读者能更清晰的看到排序的区别，如果只是为了排序，可以不要这段代码
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//优化后的版本
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 5,3,4,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);//这样会更具普遍性一些，而不是单纯只用看得出来的10，要考虑到数组是在变化的。
//	int  i = 0;
//	printf("交换前：");
//	for (; i<sz; i++)//这里的这一段代码只是为了对比让读者能更清晰的看到排序的区别，如果只是为了排序，可以不要这段代码
//	{
//		printf("%d ", arr[i]);
//	}
//	int flag = 1;//注意这个代码
//	for (i = 0; i<sz; i++)//这是要走的趟数
//	{
//		int j = 0;
//		for (j = 0; j<sz -1; j++)//这里要注意一下，sz-2这个条件，下面数组要用到j+1，防止出现越界访问的现象。
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = -flag;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//	printf("\n");
//	printf("交换后：");
//	for (i = 0; i<sz; i++)//这里的这一段代码只是为了对比让读者能更清晰的看到排序的区别，如果只是为了排序，可以不要这段代码
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//再优化
#include<stdio.h>
int main()
{
	int arr[] = { 5,3,4,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);//这样会更具普遍性一些，而不是单纯只用看得出来的10，要考虑到数组是在变化的。
	int  i = 0;
	printf("交换前：");
	for (; i<sz; i++)//这里的这一段代码只是为了对比让读者能更清晰的看到排序的区别，如果只是为了排序，可以不要这段代码
	{
		printf("%d ", arr[i]);
	}
	int flag = 1, count = 0;//注意这个代码
	for (i = 0; i<sz; i++)//这是要走的趟数
	{
		int j = 0;
		for (j = 0; j<sz - 1; j++)//这里要注意一下，sz-2这个条件，下面数组要用到j+1，防止出现越界访问的现象。
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = -flag;
					count++;
			}
		}
		if (flag == 1 && count % 2 != 0)
			break;
	}
	printf("\n");
	printf("交换后：");
	for (i = 0; i<sz; i++)//这里的这一段代码只是为了对比让读者能更清晰的看到排序的区别，如果只是为了排序，可以不要这段代码
	{
		printf("%d ", arr[i]);
	}
	return 0;
}