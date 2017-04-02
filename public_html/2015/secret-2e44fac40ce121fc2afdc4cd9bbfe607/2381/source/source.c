#include <stdio.h>

int main ()
{
    unsigned int a, b, c, d, i;
    scanf ("%d",&a);
    scanf ("%d %d", &b, &c);
    d=(b-c)/a;
    for (i=0;i<a;i++){
            if(i==0)
            {
               printf("%d - %d\n", c, c+d);
            }
            else
            {
                printf("%d - %d\n", c+d*i+i, c+d+d*i+i);
            }

}
return 0;
}


