#include <stdio.h>

int main(void) {

    int rows, cols;
    printf("Enter [ROWS] and [COLS] for a 2d-Array: ");
    scanf("%d %d", &rows, &cols);
    
    char setA[rows][cols];
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++){
            printf("Enter numbers for each [%d][%d]: ", i, j);
            scanf(" %c", &setA[i][j]);
        }
    }
    return 0;
}