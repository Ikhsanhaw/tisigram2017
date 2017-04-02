#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char kata1[2000];
    int n,count,i;
    count = 0;
    gets(kata1);
    n = strlen(kata1);
    char kata2[n];
    gets(kata2);

    for(i=0;i<n;i++)
    {
        if(kata1[i] == kata2[0]  && kata1[i+1] == kata2[1] && kata1[i+2] == kata2[2] )
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
