#include <stdio.h>

int main() {
    int a[] = {1, 2, 2, 3, 3, 4}, n = 6, j = 0;

    for(int i = 1; i < n; i++)
        if(a[i] != a[j])
            a[++j] = a[i];

    for(int i = 0; i <= j; i++) 
        printf("%d ", a[i]);
}
