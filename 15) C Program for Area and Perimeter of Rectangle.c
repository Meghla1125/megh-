#include <stdio.h>
int main() {
    float 1, w;
    printf("Enter length and width: ");
    scanf("%f %f", &1, &w);
    printf("Area = %.2f\n", 1 * w);
    printf("Perimeter = %.2f\n", 2 * (1 + w));
    return 0;
}
