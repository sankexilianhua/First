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
//int generate(int i)
//{
//	return rand() % i;
//}
//int main()
//{
//	
//	srand((unsigned int)time(NULL));
//	int  j = 0;
//
//	do
//	{
//		int m = 0;
//		menu();
//		printf("请选择：");
//		scanf("%d", &j);
//		printf("请选择要生成的随机数范围（起始默认是0）：");
//		scanf("%d", &m);
//		if (j == 1)
//		{
//			int i = generate(m);
//			printf("生成的随机数是：%d\n", i);
//		}
//		else
//			break;
//	} while (j);
//
//	return 0;
//}