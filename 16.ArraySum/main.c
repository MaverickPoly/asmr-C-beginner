#include <stdio.h>

int arraySum(int array[], size_t len)
{
    int sum = 0;
    // int len = sizeof(array) / sizeof(array[0]); //! --> Error

    for (int i = 0; i < len; i++)
    {
        sum += array[i];
    }
    return sum;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    size_t len = sizeof(array) / sizeof(array[0]);
    printf("Len: %d\n", len);
    printf("Sum: %d\n", arraySum(array, len));

    return 0;
}