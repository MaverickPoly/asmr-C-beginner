#include <stdio.h>

int sumOfDigits(char *string)
{
    int sum = 0;
    int len = sizeof(string) / sizeof(string[0]);
    printf("%d\n", len);
    for (int i = 0; i < len; i++)
    {
        char current = string[i];
        sum += current - '0';
    }
    return sum;
}

int main()
{
    printf("%d\n", sumOfDigits("555"));
    printf("%d\n", sumOfDigits("518"));
    printf("%d\n", sumOfDigits("584"));

    return 0;
}