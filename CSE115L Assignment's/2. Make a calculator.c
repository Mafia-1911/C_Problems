#include <stdio.h>

int main() {
    int selection;
    double num1, num2;

    do {
        printf("Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your selection (1/2/3/4/5): ");
        scanf("%d", &selection);

        // Perform the selected operation
        if (selection == 1) {
            printf("Enter two numbers to add: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %lf\n", num1 + num2);
        } else if (selection == 2) {
            printf("Enter two numbers to subtract: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %lf\n", num1 - num2);
        } else if (selection == 3) {
            printf("Enter two numbers to multiply: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %lf\n", num1 * num2);
        } else if (selection == 4) {
            printf("Enter two numbers to divide: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("Result: %lf\n", num1 / num2);
            }
        } else if (selection == 5) {
            printf("Exiting the calculator program.\n");
        } else {
            printf("Invalid selection! Please enter a valid option.\n");
        }
    } while (selection != 5);

    return 0;
}
