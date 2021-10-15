#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int jump(int n)
{
	if (n <= 2)
		return n;
	else
		return jump(n - 1) + jump(n - 2);
}
int main()
{
	int n = 0;
	printf("请输入青蛙要跳到的阶数：");
	scanf("%d",&n);
	int ret = jump(n);
	printf("青蛙要跳到%d阶的方法有%d种\n", n, ret);
	return 0;
}