#include <stdio.h>

int main ()
{
    int a, b, c, d, i;
    scanf ("%d",&a);
    scanf ("%d %d", &b, &c);
    d=(b-c)/a;
    for (i=0;i<a;i++){
    printf("%d - %d/n", b+i, b+d);
}
return 0;
}
    
                                  
         
