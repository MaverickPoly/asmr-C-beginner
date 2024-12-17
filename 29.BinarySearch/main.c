#include <stdio.h>

int binarySearch(int array[], size_t size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid;
    int attempts = 0;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        printf("Mid: %d\n", mid);
        printf("Start: %d\n", start);
        printf("End: %d\n", end);
        if (array[mid] == target)
        {
            printf("Total attempts: %d\n", attempts);
            return mid;
        }
        else if (array[mid] > target)
        {
            end = mid - 1;
            attempts++;
        }
        else if (array[mid] < target)
        {
            start = mid + 1;
            attempts++;
        }
    }
    return -1;
}

int main()
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99};
    int target = 7;
    size_t size = sizeof(array) / sizeof(array[0]);
    int index = binarySearch(array, size, target);
    printf("Result: %d\n", index);

    return 0;
}
