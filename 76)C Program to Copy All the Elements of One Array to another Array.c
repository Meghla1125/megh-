#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5}, b[5], n = 5;

    for(int i = 0; i < n; i++)
        b[i] = a[i];

    for(int i = 0; i < n; i++)
        printf("%d ", b[i]);
}
