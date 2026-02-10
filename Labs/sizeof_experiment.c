#include <stdio.h>
#include <string.h>

int main(void) {

    char name[40];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    size_t sizeofName = strlen(name);

    printf("You are %s and the memory byte size of your name is about: %zu bytes\n", name, sizeofName);

    return 0;
}