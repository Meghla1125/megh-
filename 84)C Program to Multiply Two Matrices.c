#include <stdio.h>

int main() {
    int a[2][2] = {{1,2},{3,4}}, b[2][2] = {{5,6},{7,8}}, c[2][2] = {0}, rows=2, cols=2;

    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            for(int k=0;k<cols;k++)
                c[i][j] += a[i][k]*b[k][j];

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
}
