#include <stdio.h>

int main() {
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}}, rows=3, cols=3, t;

    for(int j=0;j<cols;j++){
        t = a[0][j];
        a[0][j] = a[rows-1][j];
        a[rows-1][j] = t;
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
