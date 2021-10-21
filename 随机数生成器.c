#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void menu()
{
	printf("***********************\n");
	printf("请确定是否要生成随机数:\n");
	printf("***1,确定    0，取消***\n");
	printf("***********************\n");
}
int generate()
{
	return rand()%46;
}
int main()
{
	srand(1);
	int  j = 0;
	
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &j);
		if (j == 1)
		{
			int i = generate();
			printf("生成的随机数是：%d\n", i);
		}
		else
			break;
	} while (j);
	
	return 0;
}
