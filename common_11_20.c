#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<stdbool.h>
//int monthday[] = { 0,                // (1) 
//31, 28, 31, 30, 31, 30,
//31, 31, 30, 31, 30, 31
//};
//int sumday[13];
//char str[100];
//int y, m, d;
//
//int main() {
//	int i;
//	while (scanf("%s", str) != EOF) {
//		sscanf(str, "%4d/%2d/%2d", &y, &m, &d);
//		if (y % 4 == 0 && y % 100 || y % 400 == 0) {
//			monthday[2] = 29;        // (2)
//		}
//		else {
//			monthday[2] = 28;
//		}
//		sumday[0] = 0;
//		for (i = 1; i <= 12; ++i) {  // (3)
//			sumday[i] = sumday[i - 1] + monthday[i];
//		}
//		int ans = sumday[m - 1] + d; // (4)
//		printf("%d\n", ans);
//	}
//	return 0;
//}

//bool isSubsequence(char * s, char * t)
//{
//	int i = 0;
//	int j = 0;
//	int len1 = strlen(s);
//	int len2 = strlen(t);
//	int arr[100] = { -1 };
//	int m = 0;
//	for (i = 0; i <= len1; i++)
//	{
//		for (j = 0; j <= len2; j++)
//		{
//			if (t[j] == s[i])
//			{
//				arr[m] = j;
//				m++;
//				break;
//			}
//		}
//		if (j>len1)
//			return false;
//	}
//	for (i = 0; i<m - 1; i++)
//	{
//		if (arr[i]>arr[i + 1])
//			return false;
//	}
//	return true;
//}

bool isSubsequence(char * s, char * t)
{
	int lens = strlen(s);
	int lent = strlen(t);
	int left = 0;
	int right = lent-1;
	char*pl = t ;
	char*pr = t ;
	int l = 0;
	int r = lens;
	while (l<r)
	{
		left = 0;
		right = lent-1;
		while (*(pl+left) != s[l])
		{
			left++;
			if (left>right)
				return false;
		}
		while (*(pr + right) != s[r])
		{
			right--;
			if (left > right)
				return false;
		}
		l++;
		r--;
	}
	return true;
}
int main()
{
	int*s = "abc";
	int* t = "ahbgdc";
	isSubsequence(s, t);
	return 0;
}