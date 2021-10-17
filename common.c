#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int Fac(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fac(n - 1) + Fac(n - 2);
//}
//int main()
//{
//	int n = 0;
//	printf("请输入想要的第n个斐波那契数：");
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("第%d个斐波那契数是：%d\n",n, ret);
//	return 0;
//}

#include<stdio.h>
int Fac(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	if (n <= 2)
		return 1;
	else
	{
		while (n>2)
		{
			c = a + b;
			a = b;
			b = c;
			n--;
		}
		return c;
	}
}
int main()
{
	int n = 0;
	printf("请输入想要的斐波那契数：");
	scanf("%d", &n);
	int ret = Fac(n);
	printf("第%d个斐波那契数是：%d",n,ret);
	return 0;
}