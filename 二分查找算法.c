#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	scanf("%d", &k);
//	int i = 0;
//	for (; i<10; i++)
//	{
//		if (arr[i] == k)
//			break;
//	}
//	if (i<10)
//		printf("�ҵ��ˣ��±���%d\n", i);
//	else
//		printf("�Ҳ���");
//	return 0;
//}
#include<stdio.h>
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);//������Ԫ�ظ���
	int k = 0;
	scanf("%d", &k);//������Ҫ���ҵ���
	int left = 0;//�����
	int right = sz-1; //�ҽ���
	while (left <= right)//ȷ������֮�仹��Ԫ�ؿ��Բ���
	{
		int mid = (left + right) / 2;
		if (arr[mid]<k)
			left = mid+1;
		else if (arr[mid]>k)
			right = mid-1;
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left>right)
		printf("�Ҳ���\n");
	return 0;
}