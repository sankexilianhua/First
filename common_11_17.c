#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	while (n--)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	printf("%d ", i);
//	int k = 0;
//	n = 0;
//	scanf("%d", &k);
//	while (n<i)
//	{
//		if (arr[n] == k)
//		{
//			int m = n;
//			while (m<i - 1)
//			{
//				arr[m] = arr[m + 1];
//				m++;
//			}
//			i--;
//			//n+=1;
//		}
//		n++;
//	}
//	//printf("%d\n",i);
//	n = 0;
//	while (n<i)
//	{
//		if (n == i - 1)
//			printf("%d", arr[n]);
//		else
//			printf("%d ", arr[n]);
//		n++;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	while (n--)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	n = 0;
//	int k = 0;
//	scanf("%d", &k);
//	while (n<i)
//	{
//		if (arr[n] == k)
//		{
//			int m = n;
//			while (m<i - 1)
//			{
//				arr[m] = arr[m + 1];
//				m++;
//			}
//			i--;
//		}
//		n++;
//	}
//	n = 0;
//	while (n<i)
//	{
//		if (n == i - 1)
//			printf("%d", arr[n]);
//		else
//			printf("%d ", arr[n]);
//		n++;
//	}
//	return 0;
//}

#include<stdio.h>
#include<math.h>
int main(){
	int n, i, x, j = 0;
	scanf("%d", &n);
	int a[10];
	for (i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &x);
	int count = 0;
	for (i = 0; i<n; i++)
	{
		if (a[i] == x){
			j++; continue;

		}
		if (a[i] != x)
		{
			if (count == 0)
				printf("%d", a[i]);
			else
				printf(" %d", a[i]);
			count++;
		}
	}
	return 0;
}