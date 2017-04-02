#include <stdio.h>

char word[10];
int i=0;

int main()
{
    scanf("%c",&word[i]);
    while (word[i]!='\n') {
        i++;
        scanf("%c",&word[i]);
    }
    while (i>=0) {
        printf("%c",word[i]);
        i--;
    }
}
