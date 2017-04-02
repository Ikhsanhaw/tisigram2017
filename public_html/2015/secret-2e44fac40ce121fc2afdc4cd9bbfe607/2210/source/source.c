#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    int A,B,X,Y,i,j;
    scanf ("%d %d", &A, &B);
    scanf("%d %d", &X, &Y);
    i = Y - (X*A);
    j = X - i;
    if (i<1 || j<1)
        {
            printf("mustahil");
        }else
        {
            printf ("%d %d", i , j);
        }

    return 0;
}
