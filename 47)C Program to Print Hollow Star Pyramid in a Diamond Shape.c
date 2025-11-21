#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Upper hollow pyramid
    for(i = 1; i <= rows; i++) {
        
        // leading spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // stars and hollow space
        for(j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1))
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    // Lower inverted hollow pyramid
    for(i = rows - 1; i >= 1; i--) {

        // leading spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // stars and hollow space
        for(j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1))
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
