#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], res[105];
    int i, j, k, carry = 0;

    scanf("%s %s", a, b);

    i = strlen(a) - 1;
    j = strlen(b) - 1;
    k = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';

        res[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }

    res[k] = '\0';

    // reverse result
    for (i = 0; i < k / 2; i++) {
        char temp = res[i];
        res[i] = res[k-1-i];
        res[k-1-i] = temp;
    }

    printf("%s", res);
    return 0;
}
