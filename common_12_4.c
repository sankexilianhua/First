#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define maxn 11
int mat[maxn][maxn];

void swap(int* a, int* b) {                    // (1)
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void maxtrixT(int n, int mat[][maxn]) {        // (2)
	int i, j;
	for (i = 0; i < n; ++i) {
		for (j = i; j < n; ++j) {               // (3)
			swap(&mat[i][j], &mat[j][i]);    // (4)
		}
	}
}

int main() {
	int n;
	int i, j;
	while (scanf("%d", &n) != EOF) {
		for (i = 0; i < n; ++i) {
			for (j = 0; j < n; ++j) {
				scanf("%d", &mat[i][j]);
			}
		}

		maxtrixT(n, mat);

		for (i = 0; i < n; ++i) {
			for (j = 0; j < n; ++j) {
				if (j) printf(" ");             // (5)
				printf("%d", mat[i][j]);
			}
			puts("");
		}
	}
	return 0;
}
