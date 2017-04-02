#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    c = toupper(c);
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        printf("True\n");
    } else {
        printf("False\n");
    }
}
