#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,m,j,jumlah[12];
    scanf("%d", &n);
    for(i=0; i<n;i++)
    {
     jumlah[i] = 0;
     for(j=0; j<=5;j++)
     {
              if(j == 0)
              {
               scanf("\n%d", &m);
               jumlah[i] = jumlah[i] + m; 
               } else {
                      if(j == 5 && i == n-1)
                      {
                           scanf("%d", &m);
                           jumlah[i] = jumlah[i] + m;
                      } else {
                       scanf("%d ", &m);
                    jumlah[i] = jumlah[i] + m;}
                      }
              
     }
    }
    for(i=0; i<n;i++)
    {
        printf("%d\n", jumlah[i]);
}

    return 0;
    
}
