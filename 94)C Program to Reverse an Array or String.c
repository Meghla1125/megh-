#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    gets(s);

    int i = 0, j = strlen(s) - 1;
    while (i < j) {
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++; 
        j--;
    }

    printf("%s", s);
    return 0;
}
