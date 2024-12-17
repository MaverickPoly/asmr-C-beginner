#include <stdio.h>

void reverseArray(int array[], size_t len)
{
    int start = 0, end = len - 1;
    int temp;

    while (start < end)
    {
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    size_t len = sizeof(array) / sizeof(array[0]);

    // Before
    printf("Array before\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }
    reverseArray(array, len);

    // After
    printf("\nArray after\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}