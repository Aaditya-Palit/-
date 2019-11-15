#include <stdio.h>
#include <limits.h>
int main(void)
{
	int arr[] = { 2, -5, 6, -2, -3, 1, 5,-6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("The maximum sum of the subarray is %d", maximum_sum(arr, n));

	return 0;
}

int maximum_sum(int A[], int n)
{
	int max_sum = INT_MIN;
	int sum = 0;
	for (int i = 0; i < n - 1; i++)
	{
	    sum = 0;
	    for (int j = i; j < n; j++)
		{
			sum += A[j];
			if (sum > max_sum)
            max_sum = sum;
		}
	}

	return max_sum;
}

