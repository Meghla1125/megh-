#include <stdio.h>

int main() {
    int a[2][3] = {{3, 1, 2}, {6, 4, 5}}, rows = 2, cols = 3, t;

    for(int i=0;i<rows;i++)
        for(int j=0;j<cols-1;j++)
            for(int k=j+1;k<cols;k++)
                if(a[i][j]>a[i][k]){
                    t=a[i][j]; a[i][j]=a[i][k]; a[i][k]=t;
                }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
