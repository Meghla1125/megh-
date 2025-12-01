#include <stdio.h>

int main() {
    int r, i, j, num;
    scanf("%d", &r);

    num = r * (r + 1) / 2; 
    for(i = r; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("%d ", num--);
        }
        printf("\n");
    }

    return 0;
}
