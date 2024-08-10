#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// FUNCTIONS //

void entryMessage() {
    printf("\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t-\t\t\t\t\t-");
    printf("\n\t\t\t\t|\t\t\t\t\t\t\t|");
    printf("\n\t\t\t\t|\t\t\tCalculator\t\t\t|");
    printf("\n\t\t\t\t|\t\t\t\t\t\t\t|");
    printf("\n\t\t\t\t\t-\t\t\t\t\t-");
    printf("\n\n\n\n");
    getch();               // Allows the user to proceed by pressing any key.
    system("cls");         // Clears the screen.
}

void helpMessage() {
    printf("\nEnter your calculation in the format 'Number' 'Operator (+, -, *, /, ^)' 'Number' and try again.\n");
}

float addition(float a, float b) {
    float sum;
    sum = a + b;
    return sum;
}

float subtraction(float a, float b) {
    float difference;
    difference = a - b;
    return difference;
}

float multiplication(float a, float b) {
    float product;
    product = a * b;
    return product;
}

float division(float a, float b) {
    float quotient;
    quotient = a / b;
    return quotient;
}

float power(float a, float b) {
    float result;
    result = pow(a, b);
    return result;
}

int main() {
    double number1, number2;
    char operation[20], choice[20];
    bool helpControl = false;
    bool mainControl = false;

    entryMessage();

    while (mainControl == false) { // Checks whether the user has made a wrong entry and asks them to try again.
        printf("Please enter the operation you want to perform.\nIf you want help on how the program works, type 'HELP'\nIf you want to finish, type 'STOP'\n\nOperation to perform: ");

        if (scanf("%lf%c%lf", &number1, &operation, &number2) == 3) {
            if (getchar() != '\n') { // Checks if the user entered more than 2 numbers.
                printf("\nYou entered more than 2 numbers. Please enter 2 numbers.\n\n");
                while (getchar() != '\n');  // Discards extra input.
            } else {
                if (strcmp(operation, "+") == 0) {
                    printf("\nThe sum of the numbers you entered = %f\n\n", addition(number1, number2));
                } else if (strcmp(operation, "-") == 0) {
                    printf("\nThe difference of the numbers you entered = %f\n\n", subtraction(number1, number2));
                } else if (strcmp(operation, "*") == 0) {
                    printf("\nThe product of the numbers you entered = %f\n\n", multiplication(number1, number2));
                } else if (strcmp(operation, "/") == 0) {
                    if (number2 != 0) {
                        printf("\nThe quotient of the numbers you entered = %f\n\n", division(number1, number2));
                    } else {
                        printf("\nCannot divide by zero.\n\n");
                    }
                } else if (strcmp(operation, "^") == 0) {
                    printf("\nThe power of the numbers you entered = %f\n\n", power(number1, number2));
                } else {
                    printf("\nInvalid operation! Please enter one of the +, -, *, /, ^ operators.\n\n");
                }
            }
        } else {
            char operation2[10];
 
            scanf("%s", operation2);

            if (strcmp(operation2, "HELP") == 0 || strcmp(operation2, "Help") == 0 || strcmp(operation2, "help") == 0) {
                helpControl = false;
                helpMessage();

                while (helpControl == false) { // Checks if the user has made an incorrect entry in the help menu.
                    printf("If you want to go back to the main menu, type 'RETURN'.\nIf you want to terminate the program, type 'STOP'.\n\nOperation to perform: ");
                    scanf("%s", &choice);

                    if (strcmp(choice, "RETURN") == 0 || strcmp(choice, "Return") == 0 || strcmp(choice, "return") == 0) {
                        system("cls"); // Clears the screen.
                        helpControl = true;
                    } else if (strcmp(choice, "STOP") == 0 || strcmp(choice, "Stop") == 0 || strcmp(choice, "stop") == 0) {
                        printf("\nThe program has been terminated.\n");
                        helpControl = true;
                        mainControl = true;
                    } else {
                        printf("\nInvalid entry! Please try again.\n\n");
                    }
                }
            } else if (strcmp(operation2, "STOP") == 0 || strcmp(operation2, "Stop") == 0 || strcmp(operation2, "stop") == 0) {
                printf("\nThe program has been terminated.\n");
                mainControl = true;
            } else {
                printf("\nInvalid input! Please enter a valid operation.\n\n");
            }
        }
    }
    return 0;
}
