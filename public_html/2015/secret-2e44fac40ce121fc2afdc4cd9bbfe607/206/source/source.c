#include <stdio.h>
#include <stdlib.h>
char word[10];
char rev[10];
int main()
{
    int j=0,i;
    scanf("%s",word);
    i=strlen(word);
    i=i-1;
    while (i>=0) {
        rev[j]=word[i];
        i--;
        j++;
    }
    printf("%s\n",rev);
}

