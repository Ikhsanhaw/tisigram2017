#include <stdio.h>

int main()
{
     int angka,mistery,n,i,hasil;
     scanf("%d", &n);
     
     if(n == 0)
         hasil = n * 0;
         if(n == 1)
              mistery = (n * 0) + 2 ;
              if(n == 2)
                  mistery = (n * 2) + 4;
                  if(n == 3)
                       mistery = (n * 4) + 6;
                       if(n== 4)
                           mistery = (n * 6) + 8;
                              if(n >=5)
                                  mistery = (n * 8) + 10;
         printf("%d\n", mistery);
          return 0;    
}
