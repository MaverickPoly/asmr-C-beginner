#include <stdio.h>
#define FROM_FILE "from.txt"
#define TO_FILE "to.txt"

void copyContents()
{
    FILE *from_ptr;
    FILE *to_ptr;

    from_ptr = fopen(FROM_FILE, "r");
    to_ptr = fopen(TO_FILE, "w");
    if (from_ptr != NULL && to_ptr != NULL)
    {
        char buffer[100];
        fgets(buffer, 100, from_ptr);
        printf("Content being copied: %s\n", buffer);

        fprintf(to_ptr, buffer);
    }
    else
    {
        puts("Unable to open files...");
    }

    fclose(from_ptr);
    fclose(to_ptr);
}

int main()
{
    copyContents();

    return 0;
}