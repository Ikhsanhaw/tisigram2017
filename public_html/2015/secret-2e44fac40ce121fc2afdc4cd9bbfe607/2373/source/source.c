#include<stdio.h>
#include<string.h>
#include<math.h>


int main()
{
    int n,t,target,hari,naik=0,turun=0, high=0, sudah=0;

    scanf("%d ", &n);
    scanf("%d ", &t);
    scanf("%d", &target);
    hari=1;
    while(sudah==0)
    {
      if ( (hari % 5 == 0) && (hari % 3 == 0) )
      {
           if(hari % 5 == 0)
           {
                naik = naik + n;
				high = naik - turun;
                if (high >= target)
                {
                  sudah = 1;
                } else {
                         turun = turun + t*2;
					   }
           } else {
                        if(hari % 3 == 0)
                        {
                          naik = naik + n*3;
						  high = naik - turun;
                        } else { turun = turun + t;
                               }
				   }
      } else   {
                   naik = naik + n;
				   high = naik - turun;
                    if (high >= target)
                    {
                    sudah = 1;
                    } else {
                             turun = turun + t;
                           }
                }
       
       if (high <= 0)
       {
          sudah = 1;
       }
       hari++;
    }
    
    if(high<1)
    {
              printf("mustahil\n");
    } else {
            printf("%d\n", hari/3);
    }
    
    return 0;

}
