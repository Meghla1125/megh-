#include <stdio.h>

int main() {
    int r, i, j, num;

    scanf("%d", &r);

    for(i = 0; i < r; i++) {
        for(j = 0; j < r - i; j++) printf(" ");

        num = 1;
        for(j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
