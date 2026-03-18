/*==================================================
                    IF-ELSE
  ==================================================*/

#include <stdio.h>

int main(void) {

    // Let's declare variables for input
    // and lets use the GPA grading method
    // to compare values.
    double grade;
    
    // Let's do the standard scanf function
    printf("Enter your grade (in GPA): ");
    scanf("%lf", &grade);

    // Let's use if-else to check if the 
    // student has passed or not.
    if (grade >= 3.00) {
        // prints the "you passed." when the student's grade is greater than or equal to 3.00
        // which in a percentage terms is 75-above.
        printf("You passed!\n");
    } else {
        // if it's less than or 0, then it prints failed. But we don't need to type it specifically
        // because we already used a comparative operator to help us.
        printf("You failed.\n");
    }

    return 0;
}

/* ==============================================
            ADDITIONAL INFORMATION
   ==============================================
   
   IF-ELSE is used widely when checking conditions.
   It only works when you want to print or do a specific
   program when "this condition is true or false."

   Few better examples are:

   1. Checking if user's age is an adult or minor
   2. Checks if the money is greater than 0
   3. Checks if the value is not zero.
   4. and many more checks
*/
