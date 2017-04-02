#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    int T,N;
    int i,j;
    float h,z;
    scanf("%d", &T);
    for(j=0;j<T;j++)
    {
        z=0;
        scanf("%d", &N);
        int A[N];
        h=0;
        for(i=0;i<N;i++)
        {
            scanf("%d", &A[i]);
            h = h + A[i];
        }
        z= h/N;
        printf("%2f\n", z);
    }
    return 0;
}
