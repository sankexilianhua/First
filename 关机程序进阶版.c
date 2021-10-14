#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
int main()
{
	system("shutdown -s -t 60");
	while (1)
	{
		printf("你的电脑将在60秒后关机，请输入我是猪，取消关机\n");
		char arr[10];
		scanf("%s", &arr);
		if (strcmp(arr, "我是猪") == 0)
		{
			
			printf("哈哈，我骗你，在输入一次我是猪，我就帮你取消关机\n");
			a:
			   scanf("%s", &arr);
			   if (strcmp(arr, "我是猪") == 0)
			   {
				   printf("那我就帮你取消吧");
				   system("shutdown -a");
	        	   printf("你的电脑已取消关机。\n");
				   break;
			   }
			   else
			   {
				   printf("在给你一次机会好好想想\n");
				   goto a;
			   }
		}
		else
			printf("在给你一次机会好好想想\n");
	}

	return 0;
}

