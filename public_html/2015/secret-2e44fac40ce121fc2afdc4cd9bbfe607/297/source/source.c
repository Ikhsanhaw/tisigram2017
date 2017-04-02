#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long x1,x2,y1,y2,jarak;
    scanf("%ld %ld %ld %ld",&x1,&y1,&x2,&y2);
    jarak = abs(x1-x2) + abs(y1-y2);
    printf("%ld\n",jarak);

    return 0;
}
