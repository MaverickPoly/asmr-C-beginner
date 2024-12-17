#include <stdio.h>

int isLeap(int year)
{
    if (year % 4 == 0 && year % 100 != 0)
    {
        return 1;
    }
    else if (year % 400 == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    printf("%d\n", isLeap(2000));
    printf("%d\n", isLeap(2004));
    printf("%d\n", isLeap(2010));
    printf("%d\n", isLeap(1900));

    return 0;
}