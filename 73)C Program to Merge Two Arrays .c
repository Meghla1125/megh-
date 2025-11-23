#include <stdio.h>

int main() {
    int a[] = {1,2,3}, b[] = {4,5,6}, c[6], n1=3, n2=3, k=0;

    for(int i=0;i<n1;i++) c[k++] = a[i];
    for(int i=0;i<n2;i++) c[k++] = b[i];

    for(int i=0;i<k;i++) printf("%d ", c[i]);
}
