#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = n; i >= 0; i--)
//		{
//			int j = 0;
//			if (i>0)
//			{
//				for (j = i; j>0; j--)
//				{
//					printf("  ");
//				}
//			}
//			for (j = n; j>i - 1; j--)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (i = n; i>0; i--)
//		{
//			int j = 0;
//			for (j = n; j >= i; j--)
//				printf("  ");
//			for (j = i; j>0; j--)
//				printf("*");
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch = 'A';
//	printf("%c\n",ch);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int n;
	while (~scanf("%d", &n))
	{
		int i = 0;
		for (i = 0; i<n; i++)
		{
			int j = 0;
			if (i == 0)
			{
				for (j = 0; j<n; j++)
					printf("* ");
			}
			else if (i == n - 1)
			{
				for (j = 0; j<n; j++)
					printf("* ");
			}
			else
			{
				for (j = 0; j<n; j++)
				{
					if (j == 0 || j == n - 1)
						printf("*");
					else
						printf(" ");
				}
			}
			printf("\n");
		}

	}
	return 0;
}