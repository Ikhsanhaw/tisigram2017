#include <stdio.h>

int main ()
{
    unsigned int a, b, c, d, e, i;
    scanf ("%d",&a);
    scanf ("%d %d", &b, &c);
    d=(b-c)/a;
    e=c+d;
    for (i=0;i<a;i++){
               printf("%d - %d\n", c+i, c+i+d+d*i);


}
return 0;
}


