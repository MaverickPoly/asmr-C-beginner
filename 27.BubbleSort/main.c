#include <stdio.h>

void bubbleSort(int array[], size_t size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int array[] = {1, 7, 4, 5, 3, 9, 8, 6, 2};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Before sorting\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    bubbleSort(array, size);

    printf("\nAfter  sorting\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
