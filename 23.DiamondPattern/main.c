#include <stdio.h>

void printDiamond(int rows)
{
    int i, j;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (i = rows - 1; i >= 1; i--)
    {
        for (j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows;
    printf("Enter the number of rows for the upper hald of the diamond: ");
    scanf("%d", &rows);

    printDiamond(rows);

    return 0;
}