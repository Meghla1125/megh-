#include <stdio.h>
#include <math.h>

int main() {
    int low, high, num, originalNum, remainder, n = 0;
    double result;

    printf("Enter two intervals: ");
    scanf("%d %d", &low, &high);

    printf("Armstrong numbers between %d and %d are: ", low, high);

    for (num = low; num <= high; num++) {
        originalNum = num;
        n = 0;
        result = 0;

        // Count digits
        while (originalNum != 0) {
            originalNum /= 10;
            n++;
        }

        originalNum = num;

        // Calculate Armstrong sum
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        // Check Armstrong
        if ((int)result == num) {
            printf("%d ", num);
        }
    }

    return 0;
}
