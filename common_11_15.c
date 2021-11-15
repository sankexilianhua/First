#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
//int lengthOfLastWord(char * s)
//{
//	char* p = s;
//	int len = strlen(s);
//	int count = 0;
//	while (*(p + len-1) == ' ')
//	{
//		len--;
//	}
//	while (*(p + len-1) != ' '&&len>0)
//	{
//		count++;
//		len--;
//	}
//	return count;
//}

//int countSegments(char * s)
//{
//	char* p = s;
//	int len = strlen(s);
//	int i = 0;
//	int count = 0;
//	while (*p == ' ')
//	{
//		i++;
//	}
//	while (i<len)
//	{
//		while (*(p + i) != ' ')
//		{
//			i++;
//		}
//		i++;
//		count++;
//	}
//	return count;
//}

//int countSegments(char * s)
//{
//	char* p = s;
//	int len = strlen(s);
//	int i = 0;
//	int count = 0;
//	while (*(p + i) == ' ')
//	{
//		i++;
//	}
//	while (i<len)
//	{
//		while (*(p + i) != ' ')
//		{
//			i++;
//		}
//		i++;
//		count++;
//	}
//	return count;
//}

//bool areNumbersAscending(char * s)
//{
//	int arr[100] = { 0 };
//	int len = strlen(s);
//	int i = 0;
//	int j = 0;
//	while (i<len&&s[i] != '\0')
//	{
//		if (s[i] >= '0'&&s[i] <= '9')
//		{
//			if (s[i] >= '0'&&s[i] <= '9')
//			{
//				arr[j] = (s[i] - '0') * 10 + (s[i + 1] - '0');
//				i++;
//			}
//			else
//				arr[j] = s[i] - '0';
//			j++;
//		}
//		i++;
//	}
//	for (i = 0; i<j - 1; i++)
//	{
//		if (arr[i] >= arr[i + 1])
//			return false;
//	}
//	return true;
//}

//char * reverseVowels(char * s)
//{
//	char *p1 = s;
//	char *p2 = s;
//	int len = strlen(s);
//	int i = 0;
//	while (i<len)
//	{
//		if (*(p1 + i) == 'a' || *(p1 + i) == 'e' || *(p1 + i) == 'i' || *(p1 + i) == 'o' || *(p1 + i) == 'u' || *(p1 + i) == 'A' || *(p1 + i) == 'E' || *(p1 + i) == 'I' || *(p1 + i) == 'O' || *(p1 + i) == 'U');
//		else
//			i++;
//		if (*(p2 + len) == 'a' || *(p2 + len) == 'e' || *(p2 + len) == 'i' || *(p2 + len) == 'o' || *(p2 + len) == 'u' || *(p2 + len) == 'A' || *(p2 + len) == 'E' || *(p2 + len) == 'I' || *(p2 + len) == 'O' || *(p2 + len) == 'U');
//		else
//			len--;
//		if (*(p1 + i) == 'a' || *(p1 + i) == 'e' || *(p1 + i) == 'i' || *(p1 + i) == 'o' || *(p1 + i) == 'u' || *(p1 + i) == 'A' || *(p1 + i) == 'E' || *(p1 + i) == 'I' || *(p1 + i) == 'O' || *(p1 + i) == 'U'&&*(p2 + len) == 'a' || *(p2 + len) == 'e' || *(p2 + len) == 'i' || *(p2 + len) == 'o' || *(p2 + len) == 'u' || *(p2 + len) == 'A' || *(p2 + len) == 'E' || *(p2 + len) == 'I' || *(p2 + len) == 'O' || *(p2 + len) == 'U')
//		{
//			char tmp = *(p1 + i);
//			*(p1 + i) = *(p1 + len);
//			*(p1 + len) = tmp;
//			i++;
//			len--;
//		}
//	}
//	return s;
//}    

char * reverseVowels(char * s)
{
	char *p1 = s;
	char *p2 = s;
	int len = strlen(s);
	printf("%d", len);
	int i = 0;
	if (len == 1 || len == 0)
		return s;
	while (i<len)
	{
		if (*(p1 + i) == 'a' || *(p1 + i) == 'e' || *(p1 + i) == 'i' || *(p1 + i) == 'o' || *(p1 + i) == 'u' || *(p1 + i) == 'A' || *(p1 + i) == 'E' || *(p1 + i) == 'I' || *(p1 + i) == 'O' || *(p1 + i) == 'U')
			;
		else
		  i++;
		if (*(p2 + len - 1) == 'a' || *(p2 + len - 1) == 'e' || *(p2 + len - 1) == 'i' || *(p2 + len - 1) == 'o' || *(p2 + len - 1) == 'u' || *(p2 + len - 1) == 'A' || *(p2 + len - 1) == 'E' || *(p2 + len - 1) == 'I' || *(p2 + len - 1) == 'O' || *(p2 + len - 1) == 'U')
			;
		else
			len--;
		if ((*(p1 + i) == 'a' || *(p1 + i) == 'e' || *(p1 + i) == 'i' || *(p1 + i) == 'o' || *(p1 + i) == 'u' || *(p1 + i) == 'A' || *(p1 + i) == 'E' || *(p1 + i) == 'I' || *(p1 + i) == 'O' || *(p1 + i) == 'U') && (*(p2 + len - 1) == 'a' || *(p2 + len - 1) == 'e' || *(p2 + len - 1) == 'i' || *(p2 + len - 1) == 'o' || *(p2 + len - 1) == 'u' || *(p2 + len - 1) == 'A' || *(p2 + len - 1) == 'E' || *(p2 + len - 1) == 'I' || *(p2 + len - 1) == 'O' || *(p2 + len - 1) == 'U'))
		{

			if (*(p1 + i) == *(p2 + len - 1))
				;
			else
			{
				char tmp1 = *(p1 + i);
				char tmp2 = *(p1 + len - 1);
				printf("%c",tmp1);
				printf("%c", tmp2);
				*(p1 + i) = tmp2;
				*(p1 + len - 1) = tmp1;
			}
			i++;
			len--;
		}
		else
			;
	}
	return s;
}
int main()
{
	char* s ="hello";
	reverseVowels(s);
	printf("%s",s);
	system("pause");
	return 0;
}