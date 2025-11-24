#include <stdio.h>

int main() {
    char s[200];
    int i;

    gets(s);

    if (s[0] != ' ') printf("%c ", s[0]);

    for (i = 1; s[i]; i++)
        if (s[i] != ' ' && s[i-1] == ' ')
            printf("%c ", s[i]);

    return 0;
}
