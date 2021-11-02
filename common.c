#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int com_int(void* e1, void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int main()
{
	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),com_int);
	int i = 0;
	for (; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}