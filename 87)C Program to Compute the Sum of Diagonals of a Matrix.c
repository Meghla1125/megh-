#include <stdio.h>

int main() {
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}}, n=3, sum=0;

    for(int i=0;i<n;i++)
        sum += a[i][i] + a[i][n-1-i];

    printf("Sum of diagonals = %d", sum);
}
