#include <stdio.h>
#include <string.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    long bil[N], max;
    max = 0;
    for(i=0;i<N;i++)
    {
        scanf("%ld",&bil[i]);
        if(bil[i]>max)
        {
            max = bil[i];
        }
    }
    printf("%ld\n",max);
    return 0;
}
