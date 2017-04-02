#include<stdio.h>
int main()
{
    int i, j, k;
    char str[10];
    char rev[10];
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++);
    {
        k = i-1;
    }
    for(j = 0; j <= i-1; j++)
    {
        rev[j] = str[k];
        k--;
    }
    printf("%s", rev);
    return 0;
}