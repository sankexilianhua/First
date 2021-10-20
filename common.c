#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double i, j;
	char ch;
	while (scanf("%lf%c%lf", &i, &ch, &j) != EOF)
	{
		switch (ch)
		{
		case'+':
		{
				   printf("%.4lf%c%.4lf=%.4lf\n", i, ch, j, i + j);
				   break; }
		case'-':
		{
				   printf("%.4lf%c%.4lf=%.4lf\n", i, ch, j, i - j);
				   break; }
		case'*':
		{
				   printf("%.4lf%c%.4lf=%.4lf\n", i, ch, j, i*j);
				   break; }
		case'/':
		{
				   if (j == 0)
				   {
					   printf("Wrong!Division by zero!\n");
					   break;
				   }
				   else
				   {
					   printf("%.4lf%c%.4lf=%.4lf\n", i, ch, j, i / j);
					   break;
				   }
		}
		default:
		{
				   printf("Invalid operation!\n");
				   break;
		}
		}
	}
	return 0;
}