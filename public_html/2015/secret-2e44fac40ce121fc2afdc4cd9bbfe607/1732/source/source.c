#include <stdio.h>

int main()
{
    int n, m=1, i, jumlah=0;
    scanf("%d",&n);
    while (m<n)
    {
     if (n%m == 0)
     {
           jumlah=jumlah+m;
     }
     m++;
    }
    if(jumlah==n)
    {
     printf("Angka Sempurna\n");
    }
    else printf("Bukan Angka Sempurna\n");
    return 0;
}
