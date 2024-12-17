#include <stdio.h>

int loop(int num)
{
    int res = 1;
    for (num; num > 1; num--)
    {
        res *= num;
    }
    return res;
}

int recursion(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    return num * recursion(num - 1);
}

int main()
{
    printf("%d\n", loop(5));
    printf("%d\n", recursion(5));

    printf("%d\n", loop(12));
    printf("%d\n", recursion(12));

    return 0;
}