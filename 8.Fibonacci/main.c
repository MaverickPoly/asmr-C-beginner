#include <stdio.h>

int fibonacciNum(int num)
{
    if (num <= 2)
    {
        return 1;
    }
    return fibonacciNum(num - 1) + fibonacciNum(num - 2);
}

void fibonacciSeq(int *array, int amount)
{
    for (int i = 1; i < amount + 1; i++)
    {
        int num = fibonacciNum(i);
        array[i - 1] = num;
    }
}

int main()
{
    int amount = 10;
    int array[amount];
    fibonacciSeq(&array, amount);

    for (int j = 0; j < amount; j++)
    {
        printf("%d ", array[j]);
    }

    return 0;
}