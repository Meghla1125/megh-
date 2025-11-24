#include <stdio.h>

int main() {
    char s[200];
    int i;

    gets(s);
    scanf("%d", &i);

    printf("%d", (unsigned char)s[i]);
    return 0;
}
