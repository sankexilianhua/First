#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void menu()
{
	printf("***********************\n");
	printf("��ȷ���Ƿ�Ҫ���������:\n");
	printf("***1,ȷ��    0��ȡ��***\n");
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
		printf("��ѡ��");
		scanf("%d", &j);
		if (j == 1)
		{
			int i = generate();
			printf("���ɵ�������ǣ�%d\n", i);
		}
		else
			break;
	} while (j);
	
	return 0;
}
