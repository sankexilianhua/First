#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int h, m, s;
//	scanf("%d:%d:%d", &h, &m, &s);
//	if (h<7)
//	{
//		if ((h + 5)<10)
//		{
//			if (m<10 && s>9)
//				printf("+0%d:0%d:%d", h + 5, m, s);
//			else if (m>9 && s<10)
//				printf("+0%d:%d:0%d", h + 5, m, s);
//			else if (m<10 && s<10)
//				printf("+0%d:0%d:0%d", h + 5, m, s);
//			else
//				printf("+0%d:%d:%d", h + 5, m, s);
//		}
//		else
//		{
//			if (m<10 && s>9)
//				printf("+%d:0%d:%d", h + 5, m, s);
//			else if (m>9 && s<10)
//				printf("+%d:%d:0%d", h + 5, m, s);
//			else if (m<10 && s<10)
//				printf("+%d:0%d:0%d", h + 5, m, s);
//			else
//				printf("+%d:%d:%d", h + 5, m, s);
//		}
//	}
//	else if (h >= 19 && h <= 24)
//	{
//		if (m<10 && s>9)
//			printf("+0%d:0%d:%d", h - 19, m, s);
//		else if (m>9 && s<10)
//			printf("+0%d:%d:0%d", h - 19, m, s);
//		else if (m<10 && s<10)
//			printf("+0%d:0%d:0%d", h - 19, m, s);
//		else
//			printf("+0%d:%d:%d", h - 19, m, s);
//
//	}
//	else
//	{
//		if (18 - h<10)
//		{
//			if (m<51 && s>50)
//				printf("-0%d:%d:0%d", 18 - h, 59 - m, 60 - s);
//			else if (m>50 && s<51)
//				printf("-0%d:0%d:%d", 18 - h, 59 - m, 60 - s);
//			else if (m>50 && s>50)
//				printf("-0%d:0%d:0%d", 18 - h, 59 - m, 60 - s);
//			else
//				printf("-0%d:%d:%d", 18 - h, 59 - m, 60 - s);
//		}
//		else
//		{
//			if (m<51 && s>50)
//				printf("-%d:%d:0%d", 18 - h, 59 - m, 60 - s);
//			else if (m>50 && s<51)
//				printf("-%d:%d:0%d", 18 - h, 59 - m, 60 - s);
//			else if (m>50 && s>50)
//				printf("-%d:%d:%d", 18 - h, 59 - m, 60 - s);
//			else
//				printf("-%d:%d:%d", 18 - h, 59 - m, 60 - s);
//		}
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int h, m, s;
	scanf("%d:%d:%d", &h, &m, &s);
	if (h<7)
	{
		printf("+%02d:%02d:%02d", h + 5, m, s);
	}
	else if (h >= 19 && h <= 24)
	{
		printf("+%02d:%02d:%02d", h - 19, m, s);
	}
	else
	{
		if (18 - h<10)
		{
			printf("-%02d:%02d:%02d", 18 - h, 59 - m, 60 - s);
		}
	}
	return 0;
}