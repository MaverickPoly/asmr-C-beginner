#include <stdio.h>

int reverseNumber(int number)
{
    int reversed = 0;

    while (number > 0)
    {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    return reversed;
}

int main()
{
    printf("%d\n", reverseNumber(123));
    printf("%d\n", reverseNumber(5));
    printf("%d\n", reverseNumber(4326));
    printf("%d\n", reverseNumber(4532895343));
    printf("%d\n", reverseNumber(0));

    return 0;
}