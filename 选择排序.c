#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 2, 5, 3, 9, 6, 4 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("����ǰ��");
//	for (; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (i = 0; i<sz-1; i++)
//	{
//		int tmp;
//		int j = i;
//		int min = i;//��¼��Сֵ
//		for (; j<sz; j++)
//		{
//			if (arr[min]>arr[j])
//			{
//				min = j;
//			}
//		}
//		//����������������ʹ������Ԫ������С���Ǹ�����һ��λ��
//		tmp = arr[i];
//		arr[i] = arr[min];
//		arr[min] = tmp;
//	}
//	printf("������");
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//�Ż���
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 2, 5, 3, 9, 6, 4 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("����ǰ��");
//	for (; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	int flag = 1;
//	int count = 0;//��Ȼʹ��flag����¼һ���Ƿ����if����count����¼�Ƿ���ż������ʹflag�ֱ��1
//	for (i = 0; i<sz - 1; i++)
//	{
//		int tmp;
//		int j = i;
//		int min = i;//��¼��Сֵ
//		for (; j<sz; j++)
//		{
//			if (arr[min]>arr[j])
//			{
//				min = j;
//				flag = -flag;
//				count++;
//			}
//		}
//		if (flag == 1 && count % 2 != 0)
//			break;
//		//����������������ʹ������Ԫ������С���Ǹ�����һ��λ��
//		tmp = arr[i];
//		arr[i] = arr[min];
//		arr[min] = tmp;
//	}
//	printf("������");
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}