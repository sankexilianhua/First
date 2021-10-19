#define  _CRT_SECURE_NO_WARNINGS
//错误
//#include<stdio.h>
//void max(int arr[])
//{
//	int i = 0;
//	int max = 0;
//	while (i<2)
//	{
//		if (arr[i]<arr[i + 1])
//			max = i;
//		else
//			max = i + 1;
//	}
//	printf("%d\n", arr[max]);
//}
//int main()
//{
//	int arr[3] = { 0 };
//	//int i=0;
//	while (scanf("%d %d %d", &arr) != EOF)
//	{
//		max(arr);
//	}
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int arr[3] = { 0 };
//	//int i=0;
//	while (scanf("%d %d %d", &arr) != EOF)
//	{
//		//int tmp=0;
//		if (arr[0]<arr[1])
//			arr[0] = arr[1];
//		else if (arr[0]<arr[2])
//			arr[0] = arr[2];
//		printf("%d\n", arr[0]);
//	}
//	return 0;
//}
//正确
//#include<stdio.h>
//
//int main()
//{
//	int arr[3] = { 0, 0, 0 };
//	//int i=0;
//	while (scanf("%d %d %d", &arr[0], &arr[1], &arr[2]) != EOF)
//	{
//		//int tmp=0;
//		if (arr[0]<arr[1])
//			arr[0] = arr[1];
//		if (arr[0]<arr[2])
//			arr[0] = arr[2];
//		printf("%d\n", arr[0]);
//	}
//	return 0;
//}
//解决三角形
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a, b, c;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if (a == 0)
//			printf("Not quadratic equation\n");
//		else
//		{
//			double d = sqrt(pow(b, 2) - 4 * a*c);
//			if (d == 0)
//			{
//				printf("x1=x2=%.2lf\n", -b / c);
//			}
//			else if (d>0)
//			{
//				double e = (-b + d) / 2 * a;
//				double f = (-b - d) / 2 * a;
//				if (e<f)
//				{
//					double tmp = e;
//					e = f;
//					f = tmp;
//				}
//				printf("x1=%.2lf;x2=%.2lf\n", f, e);
//			}
//			else
//			{
//				printf("x1=%.2lf+%.2lfi;x2=%.2lf-%.2lfi\n", -b / 2 * a, sqrt(-d) / 2 * a, -b / 2 * a, sqrt(-d) / 2 * a);
//			}
//		}
//	}
//	return 0;
//}
//解决月份问题
//我的解：
//#include<stdio.h>
//int main()
//{
//	int y, m;
//	while (~scanf("%d %d", &y, &m))
//	{
//		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		{
//			switch (m)
//			{
//			case 1:
//			case 3:
//			case 5:
//			case 7:
//			case 8:
//			case 10:
//			case 12:
//			{
//					   printf("31\n");
//					   break;
//			}
//			case 2:
//			{
//					  printf("29\n");
//					  break;
//			}
//			case 4:
//			case 6:
//			case 9:
//			case 11:
//				printf("30\n");
//				break;
//			}
//		}
//		else
//		{
//			switch (m)
//			{
//			case 1:
//			case 3:
//			case 5:
//			case 7:
//			case 8:
//			case 10:
//			case 12:
//			{
//					   printf("31\n");
//					   break;
//			}
//			case 2:
//			{
//					  printf("28\n");
//					  break;
//			}
//			case 4:
//			case 6:
//			case 9:
//			case 11:
//				printf("30\n");
//				break;
//			}
//		}
//	}
//
//	return 0;
//}

////最优解
//#include<stdio.h>
////int main()
//{
//	int y, m, day;
//	int d[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	while (~scanf("%d %d", &y, &m))
//	{
//		day = d[m - 1];
//		if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0)
//		{
//			if (m == 2)
//				day++;
//
//		}
//		printf("%d\n", day);
//
//	}
//	return 0;
//}