#include <stdio.h>

void getInput(float* num1, float* num2) {
	printf("Enter number 1: ");
	scanf("%f", num1);
	printf("Enter number 2: ");
	scanf("%f", num2);
}

int main() {
	float num1, num2, result;
	char choice, again;
	printf("Welcome to calculator app!");

	do {
		printf("\n1.Add\n2.Subtract\n3.Division\n4.Multiplication\nSelect option: ");
		scanf(" %c", &choice);
		
		switch(choice) {
			case '1':
				getInput(&num1, &num2);
				result = num1 + num2;
				printf("Result: %f\n", result);
				break;
			case '2':
				getInput(&num1, &num2);
				result = num1 - num2;
				printf("Result: %f\n", result);
				break;
			case '3':
				getInput(&num1, &num2);
				result = num1 / num2;
				printf("Result: %f\n", result);
				break;
			case '4':
				getInput(&num1, &num2);
				result = num1 * num2;
				printf("Result: %f\n", result);
				break;
			default:
				printf("Invalid choice! Please try again!");
				break;
		}

	printf("Do you want to calculate again?(n, y): ");
	scanf(" %c", &again);
    } while(again != 'n');
	
	printf("Thanks for playing!");

	return 0;
}

