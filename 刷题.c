#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char arr[40] = { 0 };
//	scanf("%s", &arr);
//	int i = 0, count1 = 0, count2 = 0;
//	for (; arr[i] != 0; i++)
//	{
//		if (arr[i] == 'A')
//			count1++;
//		else if (arr[i] == 'B')
//			count2++;
//	}
//	if (count1>count2)
//		printf("A");
//	else if (count1<count2)
//		printf("B");
//	else
//		printf("E");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (scanf("%d", &i) != EOF)
//	{
//		if (i % 2 == 0)
//			printf("Even\n");
//		else
//			printf("Odd\n");
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		if (n >= 60)
			printf("Pass\n");
		else
			printf("Fail\n");
	}
	return 0;
}