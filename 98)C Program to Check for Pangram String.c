#include <stdio.h>
#include <ctype.h>

int main() {
    char s[200];
    int a[26] = {0}, i;

    gets(s);

    for (i = 0; s[i]; i++)
        if (isalpha(s[i]))
            a[tolower(s[i]) - 'a'] = 1;

    for (i = 0; i < 26; i++)
        if (!a[i]) {
            printf("Not Pangram");
            return 0;
        }

    printf("Pangram");
    return 0;
}
