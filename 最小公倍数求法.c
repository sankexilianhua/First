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
//	printf("���Լ���ǣ�%d\n", j);
//	printf("��С�������ǣ�%d\n", m*n / j);
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
	printf("���Լ���ǣ�%d\n", ret);
	printf("��С�������ǣ�%d\n", i*j / ret);
	return 0;
}