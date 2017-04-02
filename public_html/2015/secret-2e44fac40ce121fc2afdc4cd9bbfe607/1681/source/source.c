#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,m,jumlah=0;
    scanf("%d/n", &n);
    scanf("%d/n", &m);
    for(i=1; i<= n - (m-1);i++)
    {
     jumlah = jumlah + i;
    }
    printf("%d\n", jumlah);
    return 0;
    
}
