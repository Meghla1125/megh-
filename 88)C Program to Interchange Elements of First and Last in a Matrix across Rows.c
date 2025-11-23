#include <stdio.h>

int main() {
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}}, rows=3, cols=3, t;

    for(int i=0;i<rows;i++){
        t = a[i][0];
        a[i][0] = a[i][cols-1];
        a[i][cols-1] = t;
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
