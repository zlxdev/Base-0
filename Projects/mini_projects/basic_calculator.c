#include <stdio.h>

// Declare the functions that will be used here

// QoL Functions
void get_values(double *n1, double *n2);
void main_menu();

// main functions
void addNum(double n1, double n2);
void subtractNum(double n1, double n2);
void multiplyNum(double num1, double n2);
void divideNum(double n1, double n2);

int main(void) {

    int choice;
    int checker;
    double num1;
    double num2;
    
    do {
        
        main_menu();
        printf("Prompt: ");
        checker = scanf("%d", &choice);

        if (checker != 1) {
            printf("Error: Invalid input. Please enter a valid number in choices.\n");
            while (getchar() != '\n');
            choice = -1;
            continue;
        }

        switch (choice) {
            case 1:
                get_values(&num1, &num2);
                addNum(num1, num2);
                break;
            case 2:
                get_values(&num1, &num2);
                subtractNum(num1, num2);
                break;
            case 3:
                get_values(&num1, &num2);
                multiplyNum(num1, num2);
                break;
            case 4:
                get_values(&num1, &num2);
                divideNum(num1, num2);
                break;
            case 0:
                printf("Exiting....");
                break;
            default:
                printf("Cannot recognize input.. Try again\n");
                break;
        }
    } while (choice != 0);

    return 0;
}

void get_values(double* n1, double* n2) {
    printf("Enter the first number: ");
    scanf("%lf", n1);
    printf("Enter the second number: ");
    scanf("%lf", n2);
}

void main_menu() {
    printf("\n===== MAIN MENU =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("0. Exit\n");
}

void addNum(double num1, double num2) {
    double result = num1 + num2;
    printf("The result is: %.2lf\n", result);
}

void subtractNum(double num1, double num2) {
    double result = num1 - num2;
    printf("The result is: %.2lf\n", result);
}

void multiplyNum(double num1, double num2) {
    double result = num1 * num2;
    printf("The result is: %.2lf\n", result);
}

void divideNum(double num1, double num2) {
    double result = num1 / num2;
    printf("The result is: %.2lf\n", result);
}