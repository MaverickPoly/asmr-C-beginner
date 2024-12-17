#include <stdio.h>

void bubbleSort(int array[], size_t size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                // array[i], array[j] = array[j], array[i];  //? Not working
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