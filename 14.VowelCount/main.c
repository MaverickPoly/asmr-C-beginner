#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countVowel(char *string)
{
    int count = 0;
    for (int i = 0; i < strlen(string) - 1; i++)
    {
        char current = tolower(string[i]);
        if (current == 'a' || current == 'e' || current == 'u' || current == 'i' || current == 'o')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    printf("Vowel count: %d\n", countVowel("Hello world"));
    printf("Vowel count: %d\n", countVowel("Programming is great!"));
    printf("Vowel count: %d\n", countVowel("Count my vowels please!"));

    return 0;
}