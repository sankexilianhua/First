#define  _CRT_SECURE_NO_WARNINGS

//int reverse(int x)
//{
//	int m = x;
//	int arr[1000] = { 0 };
//	int i = 0;
//	while (x)
//	{
//		arr[i] = x % 10;
//		x /= 10;
//		i++;
//	}
//	int j = 0;
//	 int sum = 0;
//	for (j = 0; j<i; j++)
//	{
//		sum += arr[j] * pow(10, i - j - 1);
//		if (sum>2147483648 && sum>0)
//		{
//			sum = 0;
//			break;
//		}
//	}
//	printf("%d", (int)pow(2, 31));
//	if (i >= 10 && m<0)
//	{
//		if (arr[9]<-2)//arr[0]<-7
//			sum = 0;
//		else
//		{
//			if (arr[8]<-1)//arr[1]<-4
//				sum = 0;
//			else
//			{
//				if (arr[7]<-4)//arr[2]<-6
//					sum = 0;
//				else
//				{
//					if (arr[6]<-7)//arr[3]<-3
//						sum = 0;
//					else
//					{
//						if (arr[5]<-4)//arr[4]<-8
//							sum = 0;
//						else
//						{
//							if (arr[4]<-8)//arr[5]<-4
//								sum = 0;
//							else   //2147483647
//							{
//								if (arr[3]<-3)//arr[6]<-7
//									sum = 0;
//								else
//								{
//									if (arr[2]<-6)//arr[7]<-4
//										sum = 0;
//									else
//									{
//										if (arr[1]<-4)//arr[8]<-1
//											sum = 0;
//										else
//										{
//											if (arr[0]<-7)//arr[9]<-2
//												sum = 0;
//											else
//												;
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//
//		}
//	}
//	return sum;
//}
int reverse(int x)
{
	int m = x;
	int arr[1000] = { 0 };
	int i = 0;
	while (x)
	{
		arr[i] = x % 10;
		x /= 10;
		i++;
	}
	int j = 0;
	long long int sum = 0;
	for (j = 0; j<i; j++)
	{
		if (sum>2147483648 && sum>0)
		{
			sum = 0;
			break;
		}
		if (sum<-2147483648)
		{
			sum = 0;
			break;
		}
		sum += arr[j] * pow(10, i - j - 1);
	}
	return sum;
}

int main()
{
	int n = 0;
	scanf("%d",&n);
	int ret=reverse(n);
	return 0;
}