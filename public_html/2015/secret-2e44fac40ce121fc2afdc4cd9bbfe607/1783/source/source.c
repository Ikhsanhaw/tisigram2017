#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    int T,i,j,S;
    int A,B,C,D,E,F;
    scanf("%d", &T);
    for(i=0;i<T;i++)
    {
            scanf("%d %d %d %d %d %d", &A, &B, &C, &D, &E, &F);
            S= A+B+C+D+E+F;
            printf("%d\n", S);
    }
    return 0;
}
