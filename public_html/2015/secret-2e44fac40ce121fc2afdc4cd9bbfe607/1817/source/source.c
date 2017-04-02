#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,m,l,j;
    float jumlah[12];
    scanf("%d", &n);
    for(i=0; i<n;i++)
    {
     jumlah[i] = 0;
     scanf("%d", &l);
     for(j=0; j<l;j++)
     {
              if(j == 0)
              {
               scanf("\n%d", &m);
               jumlah[i] = jumlah[i] + m; 
               } else {
                      if(j == l-1 && i == n-1)
                      {
                           scanf("%d", &m);
                           jumlah[i] = jumlah[i] + m;
                      } else {
                       scanf("%d ", &m);
                    jumlah[i] = jumlah[i] + m;}
                      }
              
     }
     jumlah[i] = jumlah[i]/l;
    }
    for(i=0; i<n;i++)
    {
        printf("%.2f\n", jumlah[i]);
}

    return 0;
    
}
