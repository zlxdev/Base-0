#include <stdio.h>
#include <stdlib.h> // Crucial for fflush() function as well as clearscreen stuff
#include <unistd.h> // Crucial for using sleep() function

// QoL Functions
void get_values(double *n1, double *n2);
void main_menu();
void clear_screen();

// Main functions
void addNum(double n1, double n2);
void subtractNum(double n1, double n2);
void multiplyNum(double n1, double n2);
void divideNum(double n1, double n2);

int main(void) {
    
    // Declaring variables
    int choice;
    int checker;
    double num1, num2;

    do {

        // Menu and the prompt
        clear_screen();
        main_menu();
        printf("Prompt: ");
        checker = scanf("%d", &choice);


        // Verification step to check whether the scanf function recieved a number (which returns 1) or not (return 0)
        if (checker != 1) {
            printf("\nError: Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Flush buffer
            fflush(stdout);
            sleep(2);
            continue; 
        }

        // Gets the values of the number by input then returns the value in the variable
        if (choice >= 1 && choice <= 4) {
            get_values(&num1, &num2);
        }
        
        // This is the actual process of whatever decisions you chose in the prompt menu
        switch (choice) {
            case 1: addNum(num1, num2); break;
            case 2: subtractNum(num1, num2); break;
            case 3: multiplyNum(num1, num2); break;
            case 4: 
                if (num2 == 0) printf("Error: Division by zero!\n");
                else divideNum(num1, num2); 
                break;
            case 0: 
                printf("Exiting....\n"); 
                fflush(stdout);
                sleep(3);
                break;
            default: 
                printf("Invalid choice. Try again.\n"); 
                sleep(2);
                break;
        }

        if (choice != 0 && checker == 1) {
            printf("\nPress Enter to continue...");
            while (getchar() != '\n'); // Clear buffer
            getchar(); // Wait for user to press 'enter'
        }

    } while (choice != 0);

    return 0;
}


// QoL Functions
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

void clear_screen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}


// Main Functions are here
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



/* =================================================
*                     MUST READ!!!
*  =================================================
*  This is the most basic calculator that puts
*  together what the topics in the concepts/basics
*  are, while also introducing some intermediate
*  concepts like pointers (double *n1) as well as
*  some unique libraries like stdlib and unistd for
*  QoL stuff.
   =================================================*/