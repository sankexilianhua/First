//#define  _CRT_SECURE_NO_WARNINGS
//#define  _CRT_SECURE_NO_WARNINGS
//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("***********************\n");
//	printf("��ȷ���Ƿ�Ҫ���������:\n");
//	printf("***1,ȷ��    0��ȡ��***\n");
//	printf("***********************\n");
//}
//int generate(int m,int n)
//{
//	if (m == n)
//		return m;
//	else
//	return (rand() % (n-m))+m;
//}
//int main()
//{
//
//	srand((unsigned int)time(NULL));
//	int  j = 0;
//	int n = 0;
//	do
//	{
//		int m = 0;
//		menu();
//		printf("��ѡ��");
//			scanf("%d", &j);
//		if (j != 0)
//		{
//			
//			printf("��ѡ��Ҫ���ɵ��������ʼ��Χ��");
//			scanf("%d", &m);
//			printf("\n��ѡ��Ҫ���ɵ��������ĩ��Χ��");
//			scanf("%d", &n);
//			if (m > n)
//				printf("�������\n");
//			else
//			{
//				int i = generate(m, n);
//				printf("���ɵ�������ǣ�%d\n", i);
//			}
//		}
//		else
//			break;
//	} while (j);
//
//	return 0;
//}