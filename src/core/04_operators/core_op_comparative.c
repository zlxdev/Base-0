/*============================================
            COMPARATIVE OPERATORS
  ============================================
*/

#include <stdio.h>

int main(void) {

    // As usual declare variables to be used in the program.
    int grade;

    // then do the initial scanf statement
    printf("Enter your grade: ");
    scanf("%d", &grade);

    // Comparative operators are tools to compare values using
    // Greater than (>)
    // Greater than or equals to (>=)
    // Less than (<)
    // Less than or equals to (<=)
    // Not equals to (!=)
    // And equal to (==)
    // We can implement this by following these examples:

    // Before that let's also implement a validator to check if the
    // number inputed will not exceed or fails to achieve the valid number.
    // 
    // First one will be checking if the user enters a number than is less than 0 or exceeds 100.
    if (grade < 0) {
        // this checks if the user enters a negative number.
        printf("[!] ERROR: Number can't be less than 0.\n");
        // prevents the program by running using return 1;
        return 1;
    }

    // We can also do the opposite.
    if (grade > 100) {
        // This checks if the user enters a number higher than 100.
        printf("[!] ERROR: Number can't exceed 100.\n");
        // prevents them from running the program by ending it.
        return 1;
    }

    // If there is no errors, then we proceed to
    // the actual program:
    if (grade == 100) {
        printf("Congratulations! You passed with complete remarks!\n");
    } else if (grade >= 96) {
        printf("You have passed with Excellent remarks.\n");
    } else if (grade >= 91) {
        printf("You passed with Very Good remarks!\n");
    } else if (grade >= 86) {
        printf("You passed with Good remarks!\n");
    } else if (grade >= 81) {
        printf("You passed with Great remarks.\n");
    } else if (grade >= 74) {
        printf("You passed with Okay remarks.\n");
    } else if (grade == 75) {
        printf("You barely passed.\n");
    } else {
        printf("You have failed.\n");
    }

    return 0;
}


/*  =================================================
                 ADDITIONAL INFORMATION
    =================================================

    Comparative Operators are widely used especially in
    error checking and value comparing. You can see most
    of these on financial, security, auth, validaton, and
    on codes that will use such operators.

    It's great because it allows you to control your logic
    by comparing values on your conditional statements.

    Few examples of these are:

    1. Checking errors using the NOT operator (!=)
    2. Checking and printing values depending on conditions
    3. Comparing values and slicing it to parts using 
       these codes.
*/

