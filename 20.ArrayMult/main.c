#include <stdio.h>

void arrayMultiply(int arr1[], int arr2[], int res[], size_t size)
{
    for (int i = 0; i < size; i++)
    {
        res[i] = arr1[i] * arr2[i];
    }
}

int main()
{
    int arr1[] = {2, 3, 4, 5, 6};
    int arr2[] = {1, 3, 5, 7, 9};
    size_t size = sizeof(arr1) / sizeof(int);
    int res[size];
    arrayMultiply(arr1, arr2, res, size);

    puts("Result:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", res[i]);
    }

    return 0;
}