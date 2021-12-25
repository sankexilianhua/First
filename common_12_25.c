#define  _CRT_SECURE_NO_WARNINGS
//https ://leetcode-cn.com/problems/intersection-of-two-arrays/submissions/
//´ð°¸£º
/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int cmp(void*e1, void*e2)
{
	return *(int*)e1 - *(int*)e2;
}
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
{
	int sz = nums1Size>nums2Size ? nums2Size : nums1Size;
	int *ans = (int*)malloc(sizeof(int)*sz);
	int count = 0;
	qsort(nums1, nums1Size, sizeof(int), cmp);
	qsort(nums2, nums2Size, sizeof(int), cmp);
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i<nums1Size; i++)
	{
		if (i >= 1)
		if (nums1[i] == nums1[i - 1])
			continue;
		for (j = 0; j<nums2Size; j++)
		{
			if (nums1[i] == nums2[j])
			{
				ans[k++] = nums1[i];
				break;
			}
		}
	}
	*returnSize = k;
	return ans;

}