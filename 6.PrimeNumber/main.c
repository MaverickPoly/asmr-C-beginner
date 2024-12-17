#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    if (num <= 3)
    {
        return 1;
    }
    if (num % 2 == 0 || num % 3 == 0)
    {
        return 0;
    }
    int i = 5;
    while (i * i <= num)
    {
        if (num % i || num % (i + 2))
        {
            return 0;
        }
        i += 6;
    }
    return 1;
}

int slowWay(int num)
{
    if (num <= 1)
    {
        return 0;
    }

    for (int i = 2; i < num - 1; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    printf("%d\n", isPrime(1));
    printf("%d\n", isPrime(2));
    printf("%d\n", isPrime(3));
    printf("%d\n", isPrime(4));
    printf("%d\n", isPrime(5));
    printf("%d\n", isPrime(11));
    printf("%d\n", isPrime(13));
    printf("%d\n\n", isPrime(15));

    printf("%d\n", slowWay(1));
    printf("%d\n", slowWay(2));
    printf("%d\n", slowWay(3));
    printf("%d\n", slowWay(4));
    printf("%d\n", slowWay(5));
    printf("%d\n", slowWay(11));
    printf("%d\n", slowWay(13));
    printf("%d\n", slowWay(15));

    return 0;
}