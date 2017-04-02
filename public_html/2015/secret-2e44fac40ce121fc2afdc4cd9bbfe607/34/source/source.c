#include <stdio.h>
#include <string.h>

char word[10];
int n;

int main()
{
    scanf("%s",word);
    n = strlen(word);
    n=n-1;
    while (n>=0) {
        printf("%c",word[n]);
        n--;
    }
    return 0;
}
