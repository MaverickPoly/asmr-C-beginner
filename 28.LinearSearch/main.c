#include <stdio.h>

int lenearSearch(int array[], int target, size_t size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    size_t size = sizeof(array) / sizeof(array[0]);
    int target = 6;
    printf("Result Index: %d", lenearSearch(array, target, size));

    return 0;
}