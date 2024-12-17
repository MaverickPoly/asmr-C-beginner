#include <stdio.h>
#include <string.h>

// TEST
char *returnString(char *string)
{
    return string;
}

void reverseString(char *string)
{
    int start = 0;
    // int end = (sizeof(string) / sizeof(string[0])) - 1; // --> Won't work
    int end = strlen(string) - 1;
    char temp;
    while (start < end)
    {
        temp = string[start];
        string[start] = string[end];
        string[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    // printf("%s\n", returnString("Hello world"));
    char string[] = "Hello world";
    reverseString(string);

    printf("%s", string);

    return 0;
}