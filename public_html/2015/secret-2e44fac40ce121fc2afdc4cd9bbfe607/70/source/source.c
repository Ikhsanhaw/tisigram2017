#include<stdio.h>

int main()
{
    int i=0;
    char str[11];
    gets(str);
    while (str[i] != '\0') {
        i++;
    }

    while (i>=0) {
        printf("%c",str[i]);
        i--;
    }
    return 0;
}