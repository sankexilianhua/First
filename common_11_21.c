#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int cmp(const void*e1, const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int countLargestGroup(int n)
//{
//	//int* arr = (int*)malloc(sizeof(int)*n);
//	//int* tab = (int*)malloc(sizeof(int)*n);
//	int arr[100] = { 0 };
//	int tab[100] = { 0 };
//	int i = 1;
//	int count = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int m = i;
//		int sum = 0;
//		while (m)
//		{
//			sum += m % 10;
//			m /= 10;
//		}
//		arr[count++] = sum;
//	}
//	int countsum = 0;
//	int counttab = 0;
//	for (count = 0; count<n; count++)
//	{
//		countsum = 0;
//		if (arr[count] == 0)
//			continue;
//		i = count + 1;
//		for (; i<n; i++)
//		{
//			if (arr[count] == arr[i])
//			{
//				arr[i] = 0;
//				countsum++;
//			}
//		}
//		tab[counttab++] = countsum;
//	}
//	qsort(tab, counttab, sizeof(int), cmp);
//	for (i = 0; i<counttab; i++)
//	{
//		if (tab[i] != tab[0])
//			break;
//	}
//	return i + 1;
//}
//int cmp(const void*e1, const void*e2)
//{
//	return *(int*)e2 - *(int*)e1;
//}
//int countLargestGroup(int n)
//{
//	// int* arr=(int*)malloc(sizeof(int)*n);
//	// int* tab=(int*)malloc(sizeof(int)*n);
//	int arr[10000] = { 0 };
//	int tab[10000] = { 0 };
//	int i = 1;
//	int count = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int m = i;
//		int sum = 0;
//		while (m)
//		{
//			sum += m % 10;
//			m /= 10;
//		}
//		arr[count++] = sum;
//	}
//	int countsum = 0;
//	int counttab = 0;
//	for (count = 0; count<n; count++)
//	{
//		if (arr[count] == 0)
//			continue;
//		countsum = 1;
//		i = count + 1;
//		for (; i<n; i++)
//		{
//			if (arr[count] == arr[i])
//			{
//				arr[i] = 0;
//				countsum++;
//			}
//		}
//		tab[counttab++] = countsum;
//	}
//	qsort(tab, counttab, sizeof(int), cmp);
//	for (i = 0; i<counttab; i++)
//	{
//		if (tab[i] != tab[0])
//			break;
//	}
//	return i;
//}
//int main()
//{
//	int n = 13;
//	countLargestGroup(n);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//#include<stdbool.h>
//bool Isprime(int n)
//{
//	int i = 0;
//	int j = sqrt(n);
//	for (i = 2; i<=j; i++)
//	{
//		if (n%i == 0)
//			return false;
//	}
//	return true;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int right = pow(10, n);
//	int left = pow(10, n - 1);
//	int count = 0;
//	int arr[6] = { 0 };
//	int m = left + 1;
//	printf("%d",m);
//	for (m = left + 1; m<right; m++)
//	{
//		if (Isprime(m) == false)
//			continue;
//		count = 0;
//		int tmp = m;
//		while (tmp)
//		{
//			tmp /= 10;
//			arr[count] = tmp;
//			count++;
//		}
//		tmp = 0;
//		while (tmp<count)
//		{
//			if (Isprime(arr[tmp]) == false)
//				break;
//			tmp++;
//		}
//		if (tmp == count)
//			printf("%d\n", m);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//#include<stdbool.h>
//bool Isok(char arr[], int count, int k)
//{
//	int i = 0;
//	for (i = 0; i<count; i++)
//	{
//		if ((arr[i] - '0') >= k)
//			return false;
//	}
//	for (i = 0; i<count - 1; i++)
//	{
//		if (arr[i] == arr[i + 1] && arr[i] == '0')
//			return false;
//	}
//	return true;
//}
//int main()
//{
//	int n, k;
//	scanf("%d%d", &n, &k);
//	long long int left = pow(10, n - 1);
//	long long int right = pow(10, n);
//	long long int m = left;
//	char arr[1000] = { '0' };
//	int count = 0;
//	int countsum = 0;
//	for (m = left; m<right; m++)
//	{
//		int tmp = m;
//		count = 0;
//		while (tmp)
//		{
//			arr[count] = tmp%10 + '0';
//			tmp /= 10;
//			count++;
//		}
//		if (Isok(arr, count, k) == false)
//			continue;
//		else
//			countsum++;
//		printf("%d\n", m);
//	}
//	//printf("%d\n", countsum);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//
//long long int fun(int n)
//{
//	if (n == 0)
//		return 0;
//	else
//		return ((f(n - 1) - 1)*pow(n, 5) + pow(n, 3) - n*f(n - 1) + 3*n + 7*f(n - 1)) % 9973;
//}
//int main()
//{
//	int n = 0;
//	long long ret = 0;
//	scanf("%d", &n);
//	ret = fun(n);
//	printf("lld", ret);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
////(int)((fun(n-1)-1)*pow(n,5)+pow(n,3)-n*fun(n-1)+3*n+7*fun(n-1))%9973;
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	if (n != 0)
//	{
//		int i = 0;
//		int a=0, b;
//		while (i<n)
//		{
//			int m = pow(i + 1, 5);
//			int j = pow(i + 1, 3);
//			//int m = (i + 1)*(i + 1)*(i + 1)*(i + 1)*(i + 1);
//			//int j = (i + 1)*(i + 1)*(i + 1);
//			b = ((a - 1)*m + j - (i + 1)*a + 3 * (i + 1) + 7 * a) % 9973;
//			a = b;
//			i++;
//		}
//		ret = b;
//	}
//	else
//		ret = 0;
//	printf("%d", ret);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//#include<stdbool.h>
//bool Isok(char arr[], long long int count, int k)
//{
//	int i = 0;
//	for (i = 0; i<count; i++)
//	{
//		if ((arr[i] - '0') >= k)
//			return false;
//	}
//	for (i = 0; i<count - 1; i++)
//	{
//		if (arr[i] == arr[i + 1] && arr[i] == '0')
//			return false;
//	}
//	return true;
//}
//int main()
//{
//	int n, k;
//	scanf("%d%d", &n, &k);
//	long long int left = pow(10, n - 1);
//	printf("%d",left);
//	long long int right = pow(10, n);
//	long long int m = left;
//	char arr[9999] = { '0' };
//	long long int count = 0;
//	long long int countsum = 0;
//	for (m = left; m<right; m++)
//	{
//		int tmp = m;
//		count = 0;
//		while (tmp)
//		{
//			arr[count] = tmp % 10 + '0';
//			tmp /= 10;
//			count++;
//		}
//		if (arr[count - 1] - '0' >= k)
//			break;
//		if (Isok(arr, count, k) == false)
//			continue;
//		else
//			countsum++;
//	}
//	printf("%lld", countsum);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//#include<stdbool.h>
//#include<string.h>
//bool Isok(char arr[], int count, int k)
//{
//	int i = 0;
//	for (i = 0; i<count; i++)
//	{
//		if ((arr[i] - '0') >= k)
//			return false;
//	}
//	for (i = 0; i<count - 1; i++)
//	{
//		if (arr[i] == arr[i + 1] && arr[i] == '0')
//			return false;
//	}
//	return true;
//}
//int main()
//{
//	int n, k;
//	int countsum = 0;
//	scanf("%d%d", &n, &k);
//	char arr[1799] = { 0 };
//	char most[1799] = { 0 };
//	//int arr1[1799] = {0};
//	//arr[1] = '0';
//	//arr[1] +=2;;
//	//printf("%c",arr[1]);
//	//arr[0] = '9';
//	//arr[1] = '9';
//	//int tmp2 = strcmp(arr1, most);
//	/*printf("%d\n",tmp2);*/
//	arr[0] = '1';
//	int tmp = n - 1;
//	//初始化数字
//	while (tmp)
//	{
//		arr[tmp] = '0';
//		tmp--;
//	}
//	//初始化满了的数字
//	tmp = 0;
//	while (tmp < n)
//	{
//		most[tmp] = k - 1 + '0';
//		tmp++;
//	}
//	//先判断初始化满的数字是否满足条件
//	if (Isok(most, n, k))
//		countsum++;
//	//生成n位的数字
//	tmp = tmp - 1;
//	while (strcmp(arr, most) != 0)
//	{
//		arr[tmp]=arr[tmp]+1;
//		int i = 1;
//		int j = 1;
//		for (j = 1; j < n; j++)
//		{
//			for (i = 1; i < n; i++)
//		{
//			if (arr[i] == k -1+ '0')
//			{
//				arr[i] = 0;
//				arr[i - 1] += 1;
//			}
//		}
//		}
//		
//		if (Isok(arr, n, k))
//			countsum++;
//	}
//	printf("%d", countsum);
//	return 0;
//}


#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
bool Isok(char arr[], int count, int k)
{
	int i = 0;
	//for (i = 0; i<count; i++)
	//{
	//if ((arr[i] - '0') >= k)
	//return false;
	//}
	for (i = 0; i<count - 1; i++)
	{
		if (arr[i] == arr[i + 1] && arr[i] == '0')
			return false;
	}
	return true;
}
int main()
{
	int n, k;
	int countsum = 0;
	scanf("%d%d", &n, &k);
	char arr[1799] = { 0 };
	char most[1799] = { 0 };
	//确保不出现前导0
	arr[0] = '1';
	int tmp = n - 1;
	//初始化数字
	while (tmp)
	{
		arr[tmp] = '0';
		tmp--;
	}
	//初始化满了的数字
	tmp = 0;
	while (tmp<n)
	{
		most[tmp] = k - 1 + '0';
		tmp++;
	}
	//先判断初始化满的数字是否满足条件
	if (Isok(most, n, k))
		countsum++;
	//生成n位的数字
	tmp = n - 1;
	while (strcmp(arr, most) != 0)
	{
		arr[tmp]++;
		int i = 1;
		int j = 0;
		//多遍遍历，实现进位--防止出现越位
		for (j = 0; j<n; j++)
		{
			int flag = 1;
			for (i = 1; i<n; i++)
			{
				if (arr[i] == k - 1 + '0')
				{
					arr[i] = 0;
					arr[i - 1] += 1;
					flag = 0;
				}
			}
			if (flag)
				break;
		}
		if (Isok(arr, n, k))
			countsum++;
	}
	printf("%d", countsum);
	return 0;
}