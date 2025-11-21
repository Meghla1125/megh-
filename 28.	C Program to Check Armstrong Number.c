#include <stdio.h>

int main(){
    int n, temp, r, sum=0;
    scanf("%d", &n);
    temp=n;

    while(temp){
        r = temp%10;
        sum += r*r*r;   // for 3-digit number
        temp/=10;
    }

    printf("%d is %sArmstrong\n", n, sum==n?"":"not ");
    return 0;
}

