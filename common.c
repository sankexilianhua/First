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
//	printf("��������Ҫ�ĵ�n��쳲���������");
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("��%d��쳲��������ǣ�%d\n",n, ret);
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
	printf("��������Ҫ��쳲���������");
	scanf("%d", &n);
	int ret = Fac(n);
	printf("��%d��쳲��������ǣ�%d",n,ret);
	return 0;
}