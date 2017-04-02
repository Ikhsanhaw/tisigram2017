#include<stdio.h>
#include <ctype.h>

char v;

int main()
{
    scanf("%c",&v);
    v=tolower(v);
    if (v=='a'||v=='i'||v=='u'||v=='e'||v=='o') {
        printf("True\n");
    }else {
        printf("False\n");
    }
    return 0;
}