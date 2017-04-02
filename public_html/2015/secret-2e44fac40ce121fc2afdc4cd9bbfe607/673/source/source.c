#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", &s);
    int x = strlen(s);
    int i;
    for (i = x-1; i >= 0; i--) {
        printf("%c", s[i]);
    }
    printf("\n");
}
