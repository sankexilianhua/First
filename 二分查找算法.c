int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);//求数组元素个数
	int k = 0;
	scanf("%d", &k);//输入所要查找的数
	int left = 0;//左界限
	int right = sz-1; //右界限
	while (left <= right)//确保两者之间还有元素可以查找
	{
		int mid = (left + right) / 2;
		if (arr[mid]<k)
			left = mid+1;
		else if (arr[mid]>k)
			right = mid-1;
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left>right)
		printf("找不到\n");
	return 0;
}
