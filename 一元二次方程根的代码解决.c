#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a == 0 && b == 0 && c == 0)
		printf("Zero Equation");
	if (a == 0 && b == 0 && c != 0)
		printf("Not An Equation");
	if (a == 0 && b != 0)
		printf("%.2lf", (-c) / b);
	if (a != 0 && c != 0)
	{
		double s = b*b - 4 * a*c;
		if (s == 0)
			printf("%.2lf", (-b) / (2 * a));
		if (s>0)
		{
			double i = ((-b) + sqrt(s)) / (2 * a);
			double j = ((-b) - sqrt(s)) / (2 * a);
			if (i<j)
			{
				double tmp = i;
				i = j;
				j = tmp;
			}
			printf("%.2lf\n%.2lf", i, j);
		}
		if (s<0)
		{
			s = -s;
			if (b != 0)
				printf("%.2lf+%.2lfi\n%.2lf-%.2lfi", -b / (2 * a), fabs(sqrt(s) / (2 * a)), -b / (2 * a), fabs(sqrt(s) / (2 * a)));
			else
				printf("%.2lf+%.2lfi\n%.2lf-%.2lfi", 0.0, fabs(sqrt(s) / (2 * a)), 0.0, fabs(sqrt(s) / (2 * a)));
		}
	}
	return 0;
}