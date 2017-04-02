#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O' || c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
    {
        printf("True\n");
    }
    else
        printf("False\n");
    return 0;
}
