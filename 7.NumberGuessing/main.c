#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100
#define MIN 0

int main()
{
    srand(time(NULL));

    int res, guess;
    int attempts = 0;
    char play_again;
    printf("Welcome to number guessing game!\n");

    do
    {
        printf("Guess a number between %d and %d\n\n", MIN, MAX);

        res = rand() % MAX + MIN;
        while (1)
        {
            printf("Take a guess: ");
            scanf("%d", &guess);

            if (guess == res)
            {
                printf("Correct!\n");
                break;
            }
            else if (guess > res)
            {
                printf("Too big\n");
                attempts++;
            }
            else if (guess < res)
            {
                printf("Too less\n");
                attempts++;
            }
        }

        printf("The result was %d\n", res);
        printf("It took you %d attempts to find the answer!", attempts);
        printf("\n\nDo you want to play again?");
        scanf(" %c", &play_again);
    } while (play_again != 'n');

    printf("Thanks for playing!\n");
    return 0;
}