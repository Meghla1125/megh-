#include <stdio.h>

int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}}, n=3, t;

    // Transpose + Reverse
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++){
            t=a[i][j]; a[i][j]=a[j][i]; a[j][i]=t;
        }

    for(int i=0;i<n;i++)
        for(int j=0;j<n/2;j++){
            t=a[i][j]; a[i][j]=a[i][n-1-j]; a[i][n-1-j]=t;
        }

    for(int i=0;i<n;i++,printf("\n"))
        for(int j=0;j<n;j++)
            printf("%d ",a[i][j]);
}
