#include <stdio.h>

int main()
{
    
    int S,M;
    scanf("%d",&S);
    scanf("%d",&M);
    if ((2*S)>=M) {
        printf("PERANG\n");
    } else {
        printf("MUNDUR\n");
    }

    return 0;
}