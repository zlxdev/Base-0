#include <stdio.h>

int main(void) {

    char choice;

    printf("Do you wanna leave?: ");
    scanf(" %c", &choice);

    while(choice != 'n' || choice != 'N') {
        printf("Okay this is not ending.\n");
    }
    return 0;
}