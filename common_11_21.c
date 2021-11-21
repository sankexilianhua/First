#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int cmp(const void*e1, const void*e2)
{
	return *(int*)e1 - *(int*)e2;
}
//int countLargestGroup(int n)
//{
//	//int* arr = (int*)malloc(sizeof(int)*n);
//	//int* tab = (int*)malloc(sizeof(int)*n);
//	int arr[100] = { 0 };
//	int tab[100] = { 0 };
//	int i = 1;
//	int count = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int m = i;
//		int sum = 0;
//		while (m)
//		{
//			sum += m % 10;
//			m /= 10;
//		}
//		arr[count++] = sum;
//	}
//	int countsum = 0;
//	int counttab = 0;
//	for (count = 0; count<n; count++)
//	{
//		countsum = 0;
//		if (arr[count] == 0)
//			continue;
//		i = count + 1;
//		for (; i<n; i++)
//		{
//			if (arr[count] == arr[i])
//			{
//				arr[i] = 0;
//				countsum++;
//			}
//		}
//		tab[counttab++] = countsum;
//	}
//	qsort(tab, counttab, sizeof(int), cmp);
//	for (i = 0; i<counttab; i++)
//	{
//		if (tab[i] != tab[0])
//			break;
//	}
//	return i + 1;
//}
int cmp(const void*e1, const void*e2)
{
	return *(int*)e2 - *(int*)e1;
}
int countLargestGroup(int n)
{
	// int* arr=(int*)malloc(sizeof(int)*n);
	// int* tab=(int*)malloc(sizeof(int)*n);
	int arr[10000] = { 0 };
	int tab[10000] = { 0 };
	int i = 1;
	int count = 0;
	for (i = 1; i <= n; i++)
	{
		int m = i;
		int sum = 0;
		while (m)
		{
			sum += m % 10;
			m /= 10;
		}
		arr[count++] = sum;
	}
	int countsum = 0;
	int counttab = 0;
	for (count = 0; count<n; count++)
	{
		if (arr[count] == 0)
			continue;
		countsum = 1;
		i = count + 1;
		for (; i<n; i++)
		{
			if (arr[count] == arr[i])
			{
				arr[i] = 0;
				countsum++;
			}
		}
		tab[counttab++] = countsum;
	}
	qsort(tab, counttab, sizeof(int), cmp);
	for (i = 0; i<counttab; i++)
	{
		if (tab[i] != tab[0])
			break;
	}
	return i;
}
int main()
{
	int n = 13;
	countLargestGroup(n);
	return 0;
}