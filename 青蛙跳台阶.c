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
	printf("����������Ҫ�����Ľ�����");
	scanf("%d",&n);
	int ret = jump(n);
	printf("����Ҫ����%d�׵ķ�����%d��\n", n, ret);
	return 0;
}