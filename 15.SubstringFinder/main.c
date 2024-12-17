#include <stdio.h>
#include <string.h>

int substringFind(char *string, char *portion)
{
    if (strstr(string, portion))
    {
        printf("Contains\n");
    }
    else
    {
        printf("Not Contains\n");
    }
    return NULL;
}

int main()
{
    substringFind("Hello world", "world");
    substringFind("Programming is cool!", "grammin");
    substringFind("Substring finder program", "rewdjsakmz,");

    return 0;
}