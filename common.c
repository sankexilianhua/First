#define  _CRT_SECURE_NO_WARNINGS
#define PI 3.1415926
#include<stdio.h>
int main()
{
	int a, b, c, d, e, f, g;
	scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g);
	int tmp;
	if (a<b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a<c)
	{
		tmp = a;
		a = c;
		c = tmp;
	} if (a<d)
	{
		tmp = a;
		a = d;
		d = tmp;
	} if (a<e)
	{
		tmp = a;
		a = e;
		e = tmp;
	} if (a<f)
	{
		tmp = a;
		a = f;
		f = tmp;
	}
	if (g>a)
	{
		tmp = a;
		a = g;
		g = tmp;
	}
	if (g>b)
	{
		tmp = b;
		b = g;
		g = tmp;
	}    if (g>c)
	{
		tmp = c;
		c = g;
		g = tmp;
	}    if (g>d)
	{
		tmp = d;
		d = g;
		g = tmp;
	}    if (g>e)
	{
		tmp = e;
		e = g;
		g = tmp;
	}    if (g>f)
	{
		tmp = f;
		f = g;
		g = tmp;
	}
	double sum = (b + c + d + e + f) / 5.0;
	printf("%.2lf", sum);
	return 0;
}