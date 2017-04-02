#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    fgets(s, 100, stdin);
    int i = strlen(s) - 2;
    for (i; i >= 0; i--) {
        printf("%c",s[i]);
    }
}
