#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//FUNCTIONS//

void entryMessage(){

	printf("\n\n\n\n\n\n\n\n\n");
	printf("\n\t\t\t\t\t-\t\t\t\t\t-");
	printf("\n\t\t\t\t|\t\t\t\t\t\t\t|");
	printf("\n\t\t\t\t|\t\t\tCalculator\t\t\t|");
	printf("\n\t\t\t\t|\t\t\t\t\t\t\t|");
	printf("\n\t\t\t\t\t-\t\t\t\t\t-");
	printf("\n\n\n\n");
    getch();               //It allows the user to move to the next step by pressing any key.
    system("cls");         //Used to clear text on the screen

}

void helpMessage(){
	printf("\nEnter your calculation in the format 'Number' 'Operator (+, -, *, /, ^)' 'Number' and try again.\n");
}

float addition(float a, float b) {
	float sum;
	sum = a + b;
	return sum;
}

float subtraction(float a, float b){
	float difference;
	difference = a - b;
	return difference;
}

float multiplication(float a, float b){
	float product;
	product = a * b;
	return product;
}

float division(float a, float b){
	float quotient;
		quotient = a / b;
		return quotient;
}

float power(float a, float b){
	float result;
	result = pow(a, b);
	return result;
}

int main() {
	double number1, number2;
	char operation[20], choice[20], operation2[20];
	bool control2 = false;
	bool control = false;

	entryMessage();

	while(control == false)           //It checks whether the user has made a wrong entry in the transaction section, and if there is a wrong entry, it asks the user to repeat the operation.
	{

		printf("Please enter the operation you want to perform.\nIf you want help on how the program works, type 'HELP'\nIf you want to finish, type 'STOP'\n\nOperation to perform: ");

		if (scanf("%lf%c%lf", &number1, &operation, &number2) == 3) {

          if (getchar() != '\n')      //If the user tries to make a transaction with more than 2 numbers, it is used to tell the user that he/she has entered incorrectly.//
		  {
          printf("\nYou entered more than 2 numbers. Please enter 2 numbers.\n\n");
          while (getchar() != '\n');  // Keep reading characters until a newline character is encountered, discarding the extra input
          }
		  else
		  {
			if(strcmp(operation,"+") == 0) {
				printf("\nThe sum of the numbers you entered= %f\n\n", addition(number1, number2));
			}
			else if (strcmp(operation,"-") == 0){
				printf("\nThe difference of the numbers you entered= %f\n\n", subtraction(number1, number2));
			}
			else if (strcmp(operation,"*") == 0){
				printf("\nThe product of the numbers you entered= %f\n\n", multiplication(number1, number2));
			}
			else if (strcmp(operation,"/") == 0){
				if(number2!=0){
				printf("\nThe quotient of the numbers you entered= %f\n\n", division(number1, number2));
			    }
			    else {
			    printf("\nCannot divide by zero.\n\n");
				}
			}
			else if (strcmp(operation,"^") == 0){
				printf("\nThe power of the number you entered= %f\n\n", power(number1, number2));
			}
			else{
				printf("\nInvalid operation! Please enter one of the +, -, *, /, ^ operators.\n\n");
		    }	}
		} else {

			char operation2[10];
 
			scanf("%s", operation2);

			if (strcmp(operation2, "HELP") == 0 || strcmp(operation2, "Help") == 0 || strcmp(operation2, "help") == 0) {
				control2 = false;
				helpMessage();

				while(control2 == false)      //It checks whether the user has made an incorrect entry in the help menu and asks them to re-enter the action if it is incorrect.
				{

					printf("If you want to go back to the main menu, you can type 'RETURN'.\nIf you want to terminate the program, you can type 'STOP'.\n\nOperation to perform: ");
					scanf("%s", &choice);

					if(strcmp(choice, "RETURN") == 0 || strcmp(choice, "Return") == 0 || strcmp(choice, "return") == 0){
						system("cls");       //Used to clear text on the screen//
						control2 = true;
					}
					else  if(strcmp(choice, "STOP") == 0 || strcmp(choice, "Stop") == 0 || strcmp(choice, "stop") == 0){
						printf("\nThe program has been terminated.\n");
						control2 = true;
						control = true;
					}
					else {
						printf("\nInvalid entry! Please try again.\n\n");
					}
				}
			}
			else if (strcmp(operation2, "STOP") == 0 || strcmp(operation2, "Stop") == 0 || strcmp(operation2, "stop") == 0) {
				printf("\nThe program has been terminated.\n");
				control = true;
			}
			else {
				printf("\nInvalid input! Please enter a valid operation.\n\n");
			}
		}
	}
    return 0;
}

