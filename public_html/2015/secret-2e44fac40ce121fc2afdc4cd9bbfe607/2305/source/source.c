#include <stdio.h>
#include <math.h>

int main()
{
    int t,i;

    scanf("%d",&t);
    unsigned long int angka[t];

    for (i=0;i<t;i++)
    {
        scanf("%uld",&angka[i]);
    }
    for(i=0;i<t;i++)
    {
        if(angka[i]>=0 && angka[i]<= (pow(2,31)-1))
        {
            printf("true\n");
        }
        else
        {
            printf("false\n");
        }
    }
    return 0;
}
