#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i = 24;
//	int j = 16;
//	if (i%j != 0)
//	{
//	  j = i%j;
//      i = j;
//	}
//	printf("最大公约数是：%d\n", j);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 24, b = 16, c;
//	while (b)//当b=0时条件为假就不执行循环；除0以外都是真继续循环
//	{
//		c = a % b;
//		//1.(这里的1表示第一次循环)c=a除以b的余数 8   2.c=0;
//		a = b;
//		//1.a=16   2.a=8;
//		b = c;
//		//1.b=8   2.b=0;打破循环
//	}
//	printf("%d", a);
//	return 0;
//}