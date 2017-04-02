#include <stdio.h>

int main()
{
    int t,i,j,n;

    scanf("%d",&t);
    int nilai[t];
    float na[t];
    for(i=0;i<t;i++)
    {
        nilai[i] = 0;
        scanf("%d",&n);
        int temp[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&temp[j]);
            nilai[i] =  nilai[i] + temp[j];
        }
        na[i] = (float)nilai[i]/n;
    }
    for(i=0;i<t;i++)
    {
        printf("%.2f\n",na[i]);
    }

    return 0;
}
