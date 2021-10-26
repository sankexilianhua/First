#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	int m = n;
//	for (i = 1; i <= m; i++)
//	{
//		int j = 0;
//		n = m;
//		for (j = 0; j<i; j++)
//		{
//			
//			for (n=n-i+1; n>1; n--)
//			{
//				printf(" ");
//			}
//			printf("* ");
//			if (j == i - 1)
//				printf("\n");
//		}
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main(){
//	int n = 0;
//	while (~scanf("%d\n", &n)){
//		int i = 0;
//		for (i = 0; i<n; i++){
//			int j = 0;
//			for (j = 0; j<n - i - 1; j++){
//				printf(" ");
//			}
//			for (j = 0; j <= i; j++){
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n - i + 1; j++)
//				printf(" ");
//			for (j = 0; j<i; j++)
//				printf("* ");
//			printf("\n");
//		}
//		for (i = 0; i <= n; i++)
//			printf("* ");
//		printf("\n");
//		for (i = n; i>0; i--)
//		{
//			int j = 0;
//			for (j = 0; j<i - 1; j++)
//				printf(" ");
//			for (j = 0; j<i; j++)
//				printf("* ");
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
		int i = 0;
		for (i = 1; i <= n; i++)
		{
			int j = 0;
			for (j = 0; j<n - i + 1; j++)
				printf(" ");
			for (j = 0; j<i; j++)
				printf("* ");
			printf("\n");
		}
		for (i = 0; i <= n; i++)
			printf("* ");
		printf("\n");
		for (i = 0; i<n; i++)
		{
			int j = 0;
			for (j = n; j>n - i - 1; j--)
				printf(" ");
			for (j = n; j>i; j--)
				printf("* ");
			printf("\n");
		}
	}
	return 0;
}