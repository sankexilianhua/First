#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int Add()
{
	float a, x, y;
	for (y = 1.5f; y>-1.5f; y -= 0.1f)
	{
		for (x = -1.5f; x<1.5f; x += 0.05f)
		{
			a = x*x + y*y - 1;
			//这里的@符号即为打印出的心形图案符号，可更改
			char ch = a*a*a - x*x*y*y*y <= 0.0f ? '@' : ' ';
			putchar(ch);
			//或者putchar(a*a*a-x*x*y*y*y<=0.0f?'*':' ');
		}
		printf("\n");
	}
}
int main()
{
	int(*pa)() = Add;
	printf("%d\n",(*pa)());
	for (int i = 0; i < 10000; i++)
	{
		system("color 1");
		Sleep(500);
		system("color 2");
		Sleep(500);
		system("color 3");
		Sleep(500);
		system("color 4");
		Sleep(500);
		system("color 5");
		Sleep(500);
		system("color 6");
		Sleep(500);
		system("color 7");
		Sleep(500);
		system("color 8");
		Sleep(500);

	}
	system("pause");
	return 0;
}