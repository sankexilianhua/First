#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int weight, hight;
//	scanf("%d %d", &weight, &hight);
//	double BMI = weight / sqrt(hight*1.0 / 100);
//	printf("%.2lf", BMI);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	while (1)
//	{
//
//		char i = getchar();
//		getchar();
//		printf("%c", i + 32);
//	}
//	return 0;
//}
//正确解答：
//#include<stdio.h>
//int main()
//{
//	char i;
//	while ((i = getchar()) != EOF)
//	{
//	 	getchar();
//		putchar(i + 32);
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int flag = 0;
//	while (flag != EOF)
//	{
//		scanf("%d", &flag);
//		puts(2 << flag);
//		flag = getchar();
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 2, 5, 3, 9, 6, 4 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("交换前：");
//	for (; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	int flag = 1;
//	int count = 0;//依然使用flag来记录一下是否进入if，用count来记录是否因偶次数而使flag又变回1
//	for (i = 0; i<sz - 1; i++)
//	{
//		int tmp;
//		int j = i;
//		int min = i;//记录最小值
//		for (; j<sz; j++)
//		{
//			if (arr[min]>arr[j])
//			{
//				min = j;
//				flag = -flag;
//				count++;
//			}
//		}
//		if (flag == 1 && count % 2 != 0)
//			break;
//		//将两个变量交换，使得数组元素中最小的那个到第一个位置
//		tmp = arr[i];
//		arr[i] = arr[min];
//		arr[min] = tmp;
//	}
//	printf("交换后：");
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 8;
//		printf("%o\n", i);
//	printf("%#o", i);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 15;
//		printf("%x\n", i);
//	printf("%X\n", i);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 3;
//	printf("%d\n", i);
//	printf("%2d\n", i);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i;
//	scanf("%2d", &i);
//	printf("%d", i);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 3;
//	printf("%d", i);//3
//	printf("%02d", i);//03
//	return 0;
//}

#include<stdio.h>
int main()
{
	long int i = 1,j = 2;
	printf("%d %d\n", i, j);
	printf("%ld %ld", i, j);
	return 0;
}
