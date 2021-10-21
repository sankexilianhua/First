//#define  _CRT_SECURE_NO_WARNINGS
//#define  _CRT_SECURE_NO_WARNINGS
//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("***********************\n");
//	printf("请确定是否要生成随机数:\n");
//	printf("***1,确定    0，取消***\n");
//	printf("***********************\n");
//}
//int generate(int m,int n)
//{
//	if (m == n)
//		return m;
//	else
//	return (rand() % (n-m))+m;
//}
//int main()
//{
//
//	srand((unsigned int)time(NULL));
//	int  j = 0;
//	int n = 0;
//	do
//	{
//		int m = 0;
//		menu();
//		printf("请选择：");
//			scanf("%d", &j);
//		if (j != 0)
//		{
//			
//			printf("请选择要生成的随机数的始范围：");
//			scanf("%d", &m);
//			printf("\n请选择要生成的随机数的末范围：");
//			scanf("%d", &n);
//			if (m > n)
//				printf("输入错误\n");
//			else
//			{
//				int i = generate(m, n);
//				printf("生成的随机数是：%d\n", i);
//			}
//		}
//		else
//			break;
//	} while (j);
//
//	return 0;
//}