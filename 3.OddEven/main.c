#include <stdio.h>

int isEven(int number)
{
    return number % 2 == 0;
}

int main()
{
    printf("%d\n", isEven(2));
    printf("%d\n", isEven(3));
    printf("%d\n", isEven(10));
    printf("%d\n", isEven(0));

    return 0;
}