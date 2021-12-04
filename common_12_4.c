#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//#define maxn 11
//int mat[maxn][maxn];
//
//void swap(int* a, int* b) {                    // (1)
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void maxtrixT(int n, int mat[][maxn]) {        // (2)
//	int i, j;
//	for (i = 0; i < n; ++i) {
//		for (j = i; j < n; ++j) {               // (3)
//			swap(&mat[i][j], &mat[j][i]);    // (4)
//		}
//	}
//}
//
//int main() {
//	int n;
//	int i, j;
//	while (scanf("%d", &n) != EOF) {
//		for (i = 0; i < n; ++i) {
//			for (j = 0; j < n; ++j) {
//				scanf("%d", &mat[i][j]);
//			}
//		}
//
//		maxtrixT(n, mat);
//
//		for (i = 0; i < n; ++i) {
//			for (j = 0; j < n; ++j) {
//				if (j) printf(" ");             // (5)
//				printf("%d", mat[i][j]);
//			}
//			puts("");
//		}
//	}
//	return 0;
//}
//int maxProduct(char ** words, int wordsSize)
//{
//	int cnt[6];
//	int i = 0;
//	for (i = 0; i<wordsSize; i++)
//	{
//		cnt[i] = strlen(words[i]);
//	}
//	int ans = 0;
//	int left = 0, right = 0;
//	int count = 0;
//	for (i = 0; i<wordsSize; i++)
//	{
//		if (cnt[left]>cnt[i])
//			left = i;
//	}
//	int tmp = left;
//	right = left;
//	printf("%d", cnt[tmp]);
//	for (i = 0; i<wordsSize; i++)
//	{
//		if (cnt[i] >= cnt[left])
//		{
//			if (strpbrk(words[i], words[left]) == NULL)
//			{
//				right = left;
//				left = i;
//				count++;
//			}
//			else if (strpbrk(words[i], words[right]) == NULL)
//			{
//				left = right;
//				right = i;
//				count++;
//			}
//
//		}
//	}
//	ans = cnt[left] * cnt[right];
//	if (count == 0)
//		return 0;
//	else
//		return ans;
//}

int maxProduct(char ** words, int wordsSize)
{
	int arr[6];
	int i = 0;
	int ans = 0;
	for (i = 0; i<wordsSize; i++)
	{
		arr[i] = 0;
	}
	for (i = 0; i<wordsSize; i++)
	{
		int j = 0;
		while (words[i][j] != '\0')
		{
			arr[i] |= (1 << (words[i][j] - 'a'));
			j++;
		}
	}
	for (i = 0; i<wordsSize; i++)
	{
		int j = i + 1;
		for (; j<wordsSize; j++)
		{
			if (arr[i] ^ arr[j] == 0)
			{
				int tmp = strlen(words[i])*strlen(words[j]);
				if (tmp>ans)
					ans = tmp;
			}
		}

	}
	return ans;
}
int main()
{
	int arr[1][6] = { "abcw", "baz", "foo", "bar", "xtfn", "abcdef" };
	maxProduct(arr,6);
	return 0;
}
