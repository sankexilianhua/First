#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void change(int i, int j)
//{
//	int tmp = 0;
//	tmp = i;
//	i = j;
//	j = tmp;
//}
//int main()
//{
//	int i = 10;
//	int j = 5;
//	change(i, j);
//	printf("%d %d", i, j);
//	return 0;
//}
//#include<stdio.h>
//void change(int* i, int* j)
//{
//	int tmp = 0;
//	tmp = *i;
//	*i = *j;
//	*j = tmp;
//}
//int main()
//{
//	int i = 10;
//	int j = 5;
//	change(&i, &j);
//	printf("%d %d", i, j);
//	return 0;
//}

//#include<stdio.h>
//void print2()
//{
//	printf("hello");
//}
//void print1()
//{
//	print2();
//}
//int main()
//{
//	print1();
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("%d", printf("hello\n"));
//
//	return 0;
//}

#include<stdio.h>

int main()
{
	void print1();
	void print2();
	print1();
	return 0;
}
void print2()
{
	printf("hello");
}
void print1()
{
	print2();
}