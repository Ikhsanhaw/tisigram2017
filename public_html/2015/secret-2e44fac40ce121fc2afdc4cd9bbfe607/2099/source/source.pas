#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    int A,B,X,Y,i,j;
    scanf ("%d %d", &A, &B);
    scanf("%d %d", &X, &Y);
    if (A!=2 || B!=4)
    {
        printf("mustahil");
    }else
    {
        if (X<1 || Y<1)
        {
            printf("mustahil");
        }else
        {
            i = Y - (X*A);
            j = X - i;
            printf ("%d %d\n", i , j);
            if (i<1 || j<1)
            {
                printf("mustahil");
            }else
            {
             printf ("%d %d", i , j);
            }
        }

    }

    return 0;
}
