//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[100] = { 0 };
//	scanf("%s", &str);
//	int count = 0;
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i<len; i++)
//	{
//		if (str[i] <= '0'&&str[i] <= '9')
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
double findMaxAverage(int* nums, int numsSize, int k)
{
	long long int sum = 0;
	double ave1 = 0, ave2 = 0;
	int count = 0;
	if (numsSize != k)
	{

		int i = 0;
		int j = i;
		//   for(;j<i+k;j++)
		//   {
		//       sum+=nums[j];
		//   }
		//   ave2=sum*1.0/k; 
		//   i=0;
		while (i <= numsSize - k)
		{
			sum = 0;
			j = i;
			for (; j<i + k; j++)
			{
				sum += nums[j];
			}
			if (count == 0)
			{
				ave2 = sum*1.0 / k;
				count++;
			}
			ave1 = sum*1.0 / k;
			if (ave1>ave2)
			{
				ave2 = ave1;
			}
			i++;
		}
	}
	else
	{
		int i = 0;
		for (i = 0; i<numsSize; i++)
			sum += nums[i];
		ave2 = sum*1.0 / numsSize;
	}
	return ave2;
}