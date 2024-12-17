#include <stdio.h>

double fahrToCel(double fahr)
{
    return (fahr - 32) * 5 / 9;
}

double celToFahr(double cel)
{
    return (cel * 9 / 5) + 32;
}

void getNumber(double *num)
{
    printf("Enter amount: ");
    scanf("%lf", num);
}

int main()
{
    char option, again;
    double number, result;
    puts("Welcome to this temperature converter app!");

    do
    {
        printf("\n1.Fahrenheit to Celsius\n2.Celsius to fahrenheit\n");
        scanf("%c", &option);

        if (option == '1')
        {
            getNumber(&number);
            result = fahrToCel(number);
            printf("%lf fahr = %lf celsius\n\n", number, result);
        }

        else if (option == '2')
        {
            getNumber(&number);
            result = celToFahr(number);
            printf("%lf celsius = %lf fahr\n\n", number, result);
        }
        else
        {
            puts("Invalid choice, please try again...\n");
        }

        printf("Do you want to calculate again? ");
        scanf("%c", &again);
    } while (again != 'n');

    return 0;
}