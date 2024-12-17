#include <stdio.h>
#include <string.h>

void reverseString(char *string)
{
    int start = 0;
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

// Reversing Method
int palindromeReverse(char *string)
{
    int len = strlen(string);
    char strCopy[len + 1];
    strcpy(strCopy, string);
    reverseString(string);
    printf("Copy: %s\n\n", strCopy);
    printf("Reversed: %s\n\n", string);
    if (strcmp(string, strCopy) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Iterative Method -> More efficient
int palindrome(char *string)
{
    int len = strlen(string);
    for (int i = 0; i < len / 2; i++)
    {
        if (string[i] != string[len - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char string[] = "Blaalb";
    int res = palindromeReverse(string);
    if (res)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }
    // TEST
    printf("%d\n", strcmp("Hello", "Hello"));

    return 0;
}
