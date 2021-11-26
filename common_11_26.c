#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char * longestCommonPrefix(char ** strs, int strsSize)
{
	int i = 0;
	int count = 0;
	int len = strlen((*strs+0));
	for (i = 1; i<strsSize; i++)
	{
		int len1 = strlen(strs[i]);
		if (len>len1)
			len = len1;
	}
	printf("%d", len);
	char* ret = (char*)malloc(sizeof(char)* 201);
	int j = 0;
	for (j = 0; j<len; j++)
	{
		for (i = 0; i<strsSize - 1; i++)
		{
			if (strs[i][j] != strs[i + 1][j])
				break;
		}
		if (i == strsSize - 1);
		{
			ret[count] = strs[i][j];
			count++;
		}
	}
	ret[count] = '\0';
	return ret;
}
int  main()
{
	char str[][7] = {"flower","flow","flight"};
	longestCommonPrefix(str,3);
	return 0;
}