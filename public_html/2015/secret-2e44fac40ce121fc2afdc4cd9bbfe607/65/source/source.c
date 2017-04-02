#include<stdio.h>

int main()
{
    int i=0;
    char str[10];
    scanf("%s", str);
    while (str[i] != '\0') {
        i++;
    }
    i=i-1;
    while (i>=0) {
        printf("%c",str[i]);
        i--;
    }
    return 0;
}