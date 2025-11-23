#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello, ", str2[] = "World!";
    strcat(str1, str2);
    printf("Result: %s", str1);
}
