#include<stdio.h>

int main()
{
    int bonus,kardus,gelas;
    scanf("%d", &kardus);
    bonus = (kardus*6)+(kardus*6/20)+ kardus + ((kardus*6/20) * 6);
    printf("%d", bonus);
    printf("\n");
    return 0;
}
