//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//void game()
//{
//	printf("数字范围在0到100\n");
//	int i = rand() % 99 + 1;
//	int j = 0;
//	while (j != i)
//	{
//		printf("请输入猜的数字：");
//		scanf("%d", &j);
//		if (j > i)
//			printf("猜大了\n");
//		else if (j < i)
//			printf("猜小了\n");
//		else
//			printf("恭喜你猜对了\n");
//
//	}
//}
//void menu()
//{
//	printf("********************\n");
//	printf("***  猜数字游戏  ***\n");
//	printf("***1,play  0.exit***\n");
//	printf("********************\n");
//	printf("请输入的你的决定：");
//}
//int main()
//{
//	srand((unsigned int) time(NULL));
//	int  input;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		if (input !=0)
//		{
//			game();
//		}
//		else
//			break;
//	} while (input);
//	return 0;
//}