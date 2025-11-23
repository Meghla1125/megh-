#include <stdio.h>

int main() {
    int a[2][3] = {{1,2,3},{4,5,6}}, rows=2, cols=3;

    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++)
            printf("%d ", a[j][i]);
        printf("\n");
    }
}
