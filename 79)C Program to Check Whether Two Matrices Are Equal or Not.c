#include <stdio.h>

int main() {
    int a[2][2] = {{1,2},{3,4}}, b[2][2] = {{1,2},{3,4}}, rows=2, cols=2, flag=1;

    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            if(a[i][j] != b[i][j]) flag=0;

    if(flag) printf("Matrices are equal");
    else printf("Matrices are not equal");
}
