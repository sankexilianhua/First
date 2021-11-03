#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	while (~scanf("%d", &n))
	{
		long long int sum = 0, i;
		for (i = 1; i <= n; i++)
		{
			sum += i;
		}
		printf("%d\n\n",sum);
	}
	return 0;
}