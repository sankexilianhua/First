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
		printf("��ĵ��Խ���60���ػ���������������ȡ���ػ�\n");
		char arr[10];
		scanf("%s", &arr);
		if (strcmp(arr, "������") == 0)
		{
			
			printf("��������ƭ�㣬������һ���������ҾͰ���ȡ���ػ�\n");
			a:
			   scanf("%s", &arr);
			   if (strcmp(arr, "������") == 0)
			   {
				   printf("���ҾͰ���ȡ����");
				   system("shutdown -a");
	        	   printf("��ĵ�����ȡ���ػ���\n");
				   break;
			   }
			   else
			   {
				   printf("�ڸ���һ�λ���ú�����\n");
				   goto a;
			   }
		}
		else
			printf("�ڸ���һ�λ���ú�����\n");
	}

	return 0;
}

