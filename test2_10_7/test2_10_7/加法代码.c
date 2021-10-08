#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int sum = a + b;
//	printf("%d\n", sum);
//	return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (n<3)
//	{
//		int i = n + 1;
//			printf("******\n");
//		while (i--)
//		{
//			printf(" ");
//		}
//		n++;
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a;//需注意此处若不初始化，值是随机的
	int b;
	scanf("%d%d", &a,&b);//此处的取地址符不要忘记
	int sum = a + b;
	printf("%d\n", sum);
	return 0;
}