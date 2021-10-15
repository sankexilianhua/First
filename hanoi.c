#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Hanoi(int n, char A, char B, char C)
{
	if (n == 1)
		printf("%c->%c\n",A,C);
	else
	{
		Hanoi(n - 1, A, C, B);
		printf("%c->%c\n",A,C);
		Hanoi(n - 1, B, A, C);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("要移动的盘子数：%d\n",n);
	printf("实现过程：\n");
	Hanoi(n, 'A',' B', 'C');
	return 0;
}