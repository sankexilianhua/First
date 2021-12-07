#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define maxn 101
void inputMatrix(int n, int m, int mat[maxn][maxn]) {
	int i, j;
	for (i = 0; i < n; ++i) {
		for (j = 0; j < m; ++j) {
			scanf("%d", &mat[i][j]);                       // (1)
		}
	}
}

void outputMatrix(int n, int m, int mat[maxn][maxn]) {
	int i, j;
	for (i = 0; i < n; ++i) {
		for (j = 0; j < m; ++j) {
			if (j) {
				printf(" ");
			}
			printf("%d", mat[i][j]);                      // (2)
		}
		puts("");
	}
}

void multiplyMatrix(int a, int b, int matA[maxn][maxn], int c, int d, int matB[maxn][maxn], int matRet[maxn][maxn]) {
	// assert(b == c);
	int i, j, k;
	for (i = 0; i < a; ++i) {
		for (j = 0; j < d; ++j) {
			matRet[i][j] = 0;
			for (k = 0; k < b; ++k) {
				matRet[i][j] += matA[i][k] * matB[k][j];  //  (3)
			}
		}
	}
}

int matA[maxn][maxn], matB[maxn][maxn];
int matRet[maxn][maxn];

int main() {
	int a, b, c, d;
	while (scanf("%d %d", &a, &b) != EOF) {
		inputMatrix(a, b, matA);
		scanf("%d %d", &c, &d);
		inputMatrix(c, d, matB);

		if (b != c) {
			printf("NULL\n");
		}
		else {
			multiplyMatrix(a, b, matA, c, d, matB, matRet);
			outputMatrix(a, d, matRet);
		}
	}
	return 0;
}
