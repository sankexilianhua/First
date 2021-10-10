#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i = 5;
//	double j = 0.5;
//	printf("%d\n",(int)(i*j));
//	return 0;
//
//}
#include<stdio.h>
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	double i = N*0.7;
//	printf("%d", (int)i);
//	return 0;
//}
int main()
{
	double i = 7;
	double j = i*0.7;
	printf("%lf ", (int)j+0.5);
	printf("%.0lf ", j);
	return 0;
}
//#include<stdio.h>
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	double i = N*0.7;
//	if (i<(int)i + 0.5)
//		printf("%d", (int)i);
//	else
//		printf("%.0lf", i);
//	return 0;
//}