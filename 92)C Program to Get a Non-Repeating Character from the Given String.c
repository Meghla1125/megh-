#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int count[256] = {0}, i;

    gets(s);

    for (i = 0; s[i]; i++)
        count[(unsigned char)s[i]]++;

    for (i = 0; s[i]; i++)
        if (count[(unsigned char)s[i]] == 1) {
            printf("%c", s[i]);
            return 0;
        }

    printf("No non-repeating character");
    return 0;
}
