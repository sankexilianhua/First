#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int  main()
{
	char arr[] = "helloworld";
	int len = strlen(arr);
	char* left = arr;
	char* right = arr + len - 1;
	printf("交换前：%s\n", arr);
	while (right - left>1)
	{
		char tmp = *right;
		*right = *left;
		*left = tmp;
		left++;
		right--;
	}
	printf("交换后：%s", arr);
	return 0;
}