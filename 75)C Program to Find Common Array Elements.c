#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4}, b[] = {3, 4, 5, 6}, n1 = 4, n2 = 4;

    for(int i = 0; i < n1; i++)
        for(int j = 0; j < n2; j++)
            if(a[i] == b[j]) {
                printf("%d ", a[i]);
                break;
            }
}
