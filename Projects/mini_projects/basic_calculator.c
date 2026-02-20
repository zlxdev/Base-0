#include <stdio.h>

// Declare the functions that will be used here
void get_values(double *n1, double *n2);

void addNum(double n1, double n2);
void subtractNum(double n1, double n2);
void multiplyNum(double num1, double n2);
void divideNum(double n1, double n2);

int main(void) {

    char choice;
    double num1;
    double num2;
   
    printf("======= Welcome to Calculator =======\n");
    printf("\nChoose your operator (+, -, x, /) or press q to exit\n");

    printf("Prompt: ");
    scanf("%c", &choice);
    
    do {
        switch (choice) {
            case '+':
                get_values(&num1, &num2);
                addNum(num1, num2);
                break;
            case '-':
                get_values(&num1, &num2);
                subtractNum(num1, num2);
                break;
            case 'x':
                get_values(&num1, &num2);
                multiplyNum(num1, num2);
                break;
            case '/':
                get_values(&num1, &num2);
                divideNum(num1, num2);
                break;
            case 'q':
                printf("Exiting....");
                break;
            default:
                printf("Cannot recognize input.. Try again\n");
                break;
        }
    } while (choice != 'q');

    return 0;
}

void get_values(double* n1, double* n2) {
    printf("Enter the first number: ");
    scanf("%lf", n1);
    printf("Enter the second number: ");
    scanf("%lf", n2);
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