#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (; i<10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i<9; i++)
//	{
//		if (arr[i] >arr[i + 1])
//		{
//			int tmp = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = tmp;
//		}
//	}
//	printf("%d", arr[9]);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c, tmp;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a<b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a<c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b<c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int i = 0;
	scanf("%d", &i);
	if (i % 5 == 0 && i % 3 == 0)
	{
		printf("yes");
	}
	else
		printf("no");
	return 0;
}