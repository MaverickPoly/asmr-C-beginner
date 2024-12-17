#include <stdio.h>

#define FILENAME "read.txt"

void bufferApproach()
{
    FILE *fptr;
    fptr = fopen(FILENAME, "r");
    if (fptr != NULL)
    {

        char buffer[100];
        fgets(buffer, 100, fptr);
        printf("%s\n", buffer);
    }
    else
    {
        printf("Not able to open the file.\n");
    }
    fclose(fptr);
}

void iterativeApproach()
{

    FILE *fptr;
    fptr = fopen(FILENAME, "r");
    if (fptr != NULL)
    {

        char buffer[100];

        while (fgets(buffer, 100, fptr))
        {
            printf("%s", buffer);
        }
    }
    else
    {
        printf("Not able to open the file.\n");
    }
    fclose(fptr);
}

int main()
{
    bufferApproach();
    iterativeApproach();
    return 0;
}