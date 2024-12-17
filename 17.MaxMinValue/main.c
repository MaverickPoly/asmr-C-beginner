#include <stdio.h>

int max(int array[], size_t len)
{
    int index = 0;
    int max = array[index];

    for (int i = 0; i < len; i++)
    {
        if (array[i] > max)
        {
            index = i;
            max = array[i];
        }
    }
    printf("Max Value: %d, Index: %d\n", max, index);
    return max;
}

int min(int array[], size_t len)
{
    int index = 0;
    int min = array[index];

    for (int i = 0; i < len; i++)
    {
        if (array[i] < min)
        {
            index = i;
            min = array[i];
        }
    }
    printf("Min Value: %d, Index: %d\n", min, index);
    return min;
}

int main()
{
    int array[] = {5, 2, 8, 3, 4, 6, 7, 9, 1};
    size_t len = sizeof(array) / sizeof(array[0]);
    max(array, len);
    min(array, len);
    return 0;
}