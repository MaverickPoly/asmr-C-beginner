/*
String length calculating function, which uses no built-in functions
*/

#include <stdio.h>

int calculateLength(char *string)
{
    int len = 0;
    int index = 0;
    while (string[index] != '\0')
    {
        len++;
        index++;
    }
    return len;
}

int main()
{
    printf("Length: %d\n", calculateLength("Hello world"));
    printf("Length: %d\n", calculateLength("Mike Tyson is a legend!"));

    return 0;
}