#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////喝汽水问题
//int main()
//{
//	//确定得到的钱数。
//	int n = 0;
//	scanf("%d",&n);
//	//第一次能买的数量
//	int sum = n;
//	//每两个空瓶再换一瓶。
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 0)
//		{
//			n /= 2;
//			sum += n;
//		}
//		else
//		{
//			count++;
//			n = (n - 1) / 2;
//			sum += n;
//			if (count == 2)
//			{
//				count -= 2;
//				sum++;
//			}	
//		}
//	}
//	printf("%d\n",sum);
//	return 0;
//} 

//调整数组奇偶数位置问题
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int j = 0;
//	while (i < sz)
//	{
//		if (*(arr + i) % 2 != 0)
//		{
//			int emp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = emp;
//			j++;
//		}
//		i++;
//	}
//	for (i = 0; i < sz; i++)
//		printf("%d ",arr[i]);
//	return 0;
//}
