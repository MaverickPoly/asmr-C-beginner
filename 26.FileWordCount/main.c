#include <stdio.h>
#include <ctype.h>

#define FILENAME "text.txt"

int countWordsInFile()
{
    FILE *fptr;
    fptr = fopen(FILENAME, "r");
    int wordCount = 0;
    int inWord = 0; // -> A flag to check if weare inside a word
    char ch;

    while ((ch = fgetc(fptr)) != EOF)
    {
        if (isspace(ch))
        {
            inWord = 0;
        }
        else if (!inWord)
        {
            inWord = 1;
            wordCount += 1;
        }
    }
    return wordCount;
}

/*
Hello world
inWord = 0
" " -> inWord = 1

isspace function
*/

int main()
{
    int count = countWordsInFile();
    printf("Word count: %d\n", count);

    return 0;
}
