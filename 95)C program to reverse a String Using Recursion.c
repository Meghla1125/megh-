#include <stdio.h>
#include <string.h>

void rev(char s[], int i, int j) {
    if (i >= j) return;
    char t = s[i];
    s[i] = s[j];
    s[j] = t;
    rev(s, i+1, j-1);
}

int main() {
    char s[100];
    gets(s);
    rev(s, 0, strlen(s)-1);
    printf("%s", s);
    return 0;
}
