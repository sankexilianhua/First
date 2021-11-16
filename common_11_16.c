#define  _CRT_SECURE_NO_WARNINGS
leetcode 1556
void reverse(char* arr, int sz)
{
	int i = 0;
	for (i = 0; i<sz / 2; i++)
	{
		char tmp = arr[i];
		arr[i] = arr[sz - i - 1];
		arr[sz - i - 1] = tmp;
	}
}
char * thousandSeparator(int n)
{
	int m = n;
	int count = 0;
	int i = 0;
	int j = 0;
	char* ch = (char*)malloc(sizeof(char)* 100);
	while (n)
	{
		ch[i] = n % 10 + '0';
		n /= 10;
		i++;
		count++;
		if (count % 3 == 0)
		{
			ch[i] = '.';
			i++;
		}
	}
	if (count == 0)
	{
		ch[i] = '0';
		ch[i + 1] = '\0';
		return ch;
	}
	if (count % 3 == 0)
	{
		ch[i - 1] = '\0';
		reverse(ch, i - 1);
	}
	else
		reverse(ch, i);
	ch[i] = '\0';
	return ch;

}

leetcode 1945
int getLucky(char * s, int k)
{
	char ch[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	int i = 0;
	int j = 0;
	int count = 0;
	int len = strlen(s);
	int arr[10000] = { 0 };
	while (i<len)
	{
		j = 0;
		while (s[i] != ch[j])
			j++;
		if (j >= 9)
		{
			arr[count++] = (j + 1) % 10;
			j = (j + 1) / 10;
			arr[count++] = j;
		}
		else
			arr[count++] = j + 1;
		i++;
	}
	int sum = 0;
	while (k)
	{
		k--;
		for (i = 0; i<count; i++)
		{
			sum += arr[i];
		}
		if (k != 0)
		{
			count = 0;
			while (sum)
			{
				arr[count] = sum % 10;
				sum /= 10;
				count++;
			}
		}
	}
	return sum;
}

leetcode 1796
int cmp_int(const void* e1, const void* e2)
{
	if (*(int*)e1 >= *(int*)e2)
		return 0;
	else
		return 1;
}
int secondHighest(char * s)
{
	int arr[1000] = { 0 };
	int i = 0, count = 0;
	int len = strlen(s);
	if (len == 0 || len == 1)
		return -1;
	while (i<len)
	{
		if (s[i] >= '0'&&s[i] <= '9')
		{
			arr[count++] = s[i] - '0';
		}
		i++;
	}
	qsort(arr, count, sizeof(int), cmp_int);
	i = 1;
	while (i<count)
	{
		if (arr[i]<arr[0])
			return arr[i];
		i++;
	}
	return -1;
}