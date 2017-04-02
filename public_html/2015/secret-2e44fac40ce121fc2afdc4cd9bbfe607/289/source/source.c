#include <stdio.h>
#include <string.h>
int main()
{
    char kalimat[10];
    gets(kalimat);
    int n;
    n = strlen(kalimat);
    while(n--)
    {
        printf("%c",kalimat[n]);
    }
    printf("\n");
    return 0;
}
