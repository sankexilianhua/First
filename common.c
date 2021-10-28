#define  _CRT_SECURE_NO_WARNINGS
//用*打印出打印x型
//例子：
//*   *
// * *
//  *
// * *
//*   *

//#include<stdio.h>
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int i;
//		if (n % 2 != 0)
//		{
//			int l = 1, r = n;
//			for (i = 0; i<n / 2 + 1; i++)
//			{
//				int a = 1, e = 0;
//				for (e = 0, a = 1; e<n; e++, a++)
//				{
//					if (a == l || a == r)
//						printf("*");
//					else
//						printf(" ");
//				}
//				l++;
//				r--;
//				printf("\n");
//			}
//			l = l - 2, r = r + 2;
//			for (i = 0; i<n / 2; i++)
//			{
//				int a = 1, e = 0;
//				for (e = 0, a = 1; e<n; e++, a++)
//				{
//					if (a == l || a == r)
//						printf("*");
//					else
//						printf(" ");
//				}
//				l--;
//				r++;
//				printf("\n");
//			}
//		}
//		else
//		{
//			int l = 1, r = n;
//			for (i = 0; i<n / 2; i++)
//			{
//				int a = 1, e = 0;
//				for (e = 0, a = 1; e<n; e++, a++)
//				{
//					if (a == l || a == r)
//						printf("*");
//					else
//						printf(" ");
//				}
//				l++;
//				r--;
//				printf("\n");
//			}
//			l = l - 1, r = r + 1;
//			for (i = 0; i<n / 2; i++)
//			{
//				int a = 1, e = 0;
//				for (e = 0, a = 1; e<n; e++, a++)
//				{
//					if (a == l || a == r)
//						printf("*");
//					else
//						printf(" ");
//				}
//				l--;
//				r++;
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int k = 0;
//	while (scanf("%d", &k) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < k; i++)
//		{
//			int j = 0;
//			for (j = 0; j < k; j++)
//			{
//				if (j == i)
//					printf("*");
//				else if (j + i == k - 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

#include<stdio.h>
int main()
{
	float arr[5] = { 0 };

	for (int i = 0; i < 5; i++)
		printf("%f", arr[i]);
	return 0;
}