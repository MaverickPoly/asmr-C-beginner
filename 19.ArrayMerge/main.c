#include <stdio.h>

void mergeArrays(int arr1[], int arr2[], int res[], size_t size)
{
	for (int i = 0; i < size; i++)
	{
		res[i] = arr1[i] + arr2[i];
	}
}

int main()
{
	int arr1[] = {1, 2, 3, 4, 4};
	int arr2[] = {5, 4, 3, 2, 1};
	size_t size = sizeof(arr1) / sizeof(arr1[0]);
	int res[size];
	mergeArrays(arr1, arr2, res, size);

	for (int i = 0; i < size; i++)
	{
		printf("%d ", res[i]);
	}

	return 0;
}
