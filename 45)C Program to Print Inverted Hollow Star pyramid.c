#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = rows; i >= 1; i--) {

        // Print leading spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars and hollow area
        for(j = 1; j <= (2 * i - 1); j++) {
            if (i == rows || j == 1 || j == (2 * i - 1))
                printf("*");   // border stars
            else
                printf(" ");   // hollow space
        }

        printf("\n");
    }

    return 0;
}
