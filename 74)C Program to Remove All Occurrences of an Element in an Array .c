#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 2, 4}, n = 5, x = 2, j = 0;

    for(int i = 0; i < n; i++)
        if(a[i] != x)
            a[j++] = a[i];

    for(int i = 0; i < j; i++)
        printf("%d ", a[i]);
}
