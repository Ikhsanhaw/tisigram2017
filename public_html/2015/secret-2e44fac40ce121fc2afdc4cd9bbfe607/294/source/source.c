#include <stdio.h>
#include <string.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    char kata[N][15];
    for(i=0;i<N;i++)
    {
        fflush(stdin);
        gets(kata[i]);
    }
    for(i=0;i<N;i++)
    {
        printf("%s\n",kata[i]);
    }

    return 0;
}
