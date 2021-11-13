#define  _CRT_SECURE_NO_WARNINGS
#include<stdbool.h>
//int reverse(int x)
//{
//	int m = x;
//	int arr[1000] = { 0 };
//	int i = 0;
//	while (x)
//	{
//		arr[i] = x % 10;
//		x /= 10;
//		i++;
//	}
//	int j = 0;
//	 int sum = 0;
//	for (j = 0; j<i; j++)
//	{
//		sum += arr[j] * pow(10, i - j - 1);
//		if (sum>2147483648 && sum>0)
//		{
//			sum = 0;
//			break;
//		}
//	}
//	printf("%d", (int)pow(2, 31));
//	if (i >= 10 && m<0)
//	{
//		if (arr[9]<-2)//arr[0]<-7
//			sum = 0;
//		else
//		{
//			if (arr[8]<-1)//arr[1]<-4
//				sum = 0;
//			else
//			{
//				if (arr[7]<-4)//arr[2]<-6
//					sum = 0;
//				else
//				{
//					if (arr[6]<-7)//arr[3]<-3
//						sum = 0;
//					else
//					{
//						if (arr[5]<-4)//arr[4]<-8
//							sum = 0;
//						else
//						{
//							if (arr[4]<-8)//arr[5]<-4
//								sum = 0;
//							else   //2147483647
//							{
//								if (arr[3]<-3)//arr[6]<-7
//									sum = 0;
//								else
//								{
//									if (arr[2]<-6)//arr[7]<-4
//										sum = 0;
//									else
//									{
//										if (arr[1]<-4)//arr[8]<-1
//											sum = 0;
//										else
//										{
//											if (arr[0]<-7)//arr[9]<-2
//												sum = 0;
//											else
//												;
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//
//		}
//	}
//	return sum;
//}
//int reverse(int x)
//{
//	int m = x;
//	int arr[1000] = { 0 };
//	int i = 0;
//	while (x)
//	{
//		arr[i] = x % 10;
//		x /= 10;
//		i++;
//	}
//	int j = 0;
//	long long int sum = 0;
//	for (j = 0; j<i; j++)
//	{
//		if (sum>2147483648 && sum>0)
//		{
//			sum = 0;
//			break;
//		}
//		if (sum<-2147483648)
//		{
//			sum = 0;
//			break;
//		}
//		sum += arr[j] * pow(10, i - j - 1);
//	}
//	return sum;
//}


//
//double largestTriangleArea(int** points, int pointsSize, int* pointsColSize)
//{
//	int i = 0;
//	int j = 0;
//	double area1 = 0, area2 = 0;
//	area1 = (points[i][0] * points[i + 1][1] + points[i + 1][0] * points[i + 2][1] + points[i + 2][0] * points[i][1] - points[i + 2][0] * points[i + 1][1] - points[i + 1][0] * points[i][1] - points[i][0] * points[i + 2][1]) / 2;
//	for (i = 0; i + 2<pointsSize; i++)
//	{
//		//for(j=0;j+1<pointsSize;j++)
//		//{
//
//		area2 = fabs((points[i][0] * points[i + 1][1] + points[i + 1][0] * points[i + 2][1] + points[i + 2][0] * points[i][1] - points[i + 2][0] * points[i + 1][1] - points[i + 1][0] * points[i][1] - points[i][0] * points[i + 2][1]) / 2);
//		area1 = area1>area2 ? area1 : area2;
//		// }
//	}
//	return area1;
//}

//bool isUnique(char* astr)
//{
//	int  hash[100000];
//	memset(hash, 0, sizeof(hash));
//	int i = 0;
//	for (i = 0; astr[i] != '\0'; i++)
//	{
//		++hash[astr[i]];
//	}
//	for (int j = 0; j<i; j++)
//	{
//		if (hash[j] != 1)
//			return false;
//	}
//	return true;
//}


//bool isAnagram(char * s1, char * s2){
//	int hash[256];                    // (1)
//	int i;
//	memset(hash, 0, sizeof(hash));    // (2)
//	for (i = 0; s1[i]; ++i) {
//		++hash[s1[i]];              // (3)
//	}
//	for (i = 0; s2[i]; ++i) {
//		if (hash[s2[i]] == 0) {
//			return false;             // (4)
//		}
//		--hash[s2[i]];              // (5)
//	}
//	for (i = 0; i < 256; ++i) {
//		if (hash[i]) {
//			return false;             // (6)
//		}
//	}
//	return true;                      // (7)
//}

//char firstUniqChar(char* s)
//{
//	int len = strlen(s);
//	int i = 0, count = 0;
//	if (len == 0)
//		return ' ';
//	for (i = 0; i <= len; i++)
//	{
//		count = 0;
//		int j = 0;
//		count -= 1;
//		for (j = 0; j <= len; j++)
//		{
//
//			if (s[i] == s[j])
//			{
//				count++;
//			}
//
//		}
//		if (count == 0)
//			return s[i];
//	}
//	return ' ';
//}
//
//int main()
//{
//	char* s1 = "cc";
//	char* s2 = "bcd";
//	firstUniqChar(s1);
//	return 0;
//}


//double largestTriangleArea(int** points, int pointsSize, int* pointsColSize){
//	double a = 0, b;
//	for (int i = 0; i < pointsSize - 2; i++){
//		for (int j = i + 1; j < pointsSize - 1; j++){
//			for (int k = j + 1; k < pointsSize; k++){
//				if ((points[i][0] - points[j][0]) * (points[j][1] - points[k][1]) != (points[i][1] - points[j][1]) * (points[j][0] - points[k][0])){  //²»¹²Ïß
//					b = abs(points[i][0] * points[j][1] + points[i][1] * points[k][0] + points[j][0] * points[k][1] - points[i][0] * points[k][1] - points[i][1] * points[j][0] - points[j][1] * points[k][0]) / 2.0;
//					a = a > b ? a : b;
//				}
//			}
//		}
//	}
//	return a;
//}



int main()
{
	int arr[100] = {0};
	int i, j;
	scanf("%d%d",&i,&j);
	int m = 0;
	if (i > j)
	{
		int tmp = i;
		i = j;
		j = tmp;
	}
	int n = 0;
	for (m = 1; m < i; m++)
	{
		if (i%m == 0 && j%m == 0)
		{
			arr[n++] = m;
		}
	}
	for (i = 0; i < n - 1; i++)
	{
		arr[0] = arr[i]>arr[i + 1] ? arr[i] : arr[i + 1];
	}
	printf("%d",arr[0]);
	return 0;
}