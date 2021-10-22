#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int i, j;
//		for (i = n; i >= 1; i--)
//		{
//			for (j = 1; j <= n; j++)
//			{
//				if (j >= i)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int n;
	while (~scanf("%d", &n))
	{
		int i, j;
		for (i = n; i >= 1; i--)
		{
			for (j = 0; j<i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}