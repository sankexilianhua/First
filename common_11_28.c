#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int cmp(const void*e1, const void*e2)
{
	if (*(int*)e1 > *(int*)e2)
		return -1;
	else
		return 0;
}
int main()
{
	int a[5] = {4,5,3,2,1};
	qsort(a,5,sizeof(int),cmp);
	int i = 0;
	for (i = 0; i < 5; i++)
		printf("%d ",a[i]);
	return 0;
}