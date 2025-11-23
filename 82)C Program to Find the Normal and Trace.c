#include <stdio.h>
#include <math.h>

int main() {
    int a[2][2] = {{1,2},{3,4}}, n=2;
    int trace = 0;
    double norm = 0;

    for(int i=0;i<n;i++){
        trace += a[i][i];
        for(int j=0;j<n;j++)
            norm += a[i][j]*a[i][j];
    }

    printf("Trace = %d\n", trace);
    printf("Norm = %.2f", sqrt(norm));
}
