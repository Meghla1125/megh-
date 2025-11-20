#include <stdio.h>

int main() {
    int num, square, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    // Sum of digits of the square
    while (square != 0) {
        remainder = square % 10;
        sum += remainder;
        square /= 10;
    }

    // Check Neon Number
    if (sum == num) {
        printf("%d is a Neon Number.\n", num);
    } else {
        printf("%d is not a Neon Number.\n", num);
    }

    return 0;
}
