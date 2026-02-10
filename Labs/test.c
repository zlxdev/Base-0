#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 50;

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++ ) {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    return 0;
}