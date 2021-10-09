#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	int i = 24;
//	int j = 16;
//	int m = i;
//	int n = j;
//	if (i%j != 0)
//	{
//		j = i%j;
//		i = j;
//	}
//	printf("最大公约数是：%d\n", j);
//	printf("最小公倍数是：%d\n", m*n / j);
//	return 0;
//}
#include<stdio.h>
int get_min(int i, int j)
{
	if (i%j != 0)
	{
		j = i%j;
		i = j;
	}
	return j;

}
int main()
{
	int i = 24;
	int j = 16;
	int ret = get_min(i, j);
	printf("最大公约数是：%d\n", ret);
	printf("最小公倍数是：%d\n", i*j / ret);
	return 0;
}