#include<stdio.h>
#include<string.h>
#include<math.h>


int main()
{
    int n,t,target,hari,naik=0,turun=0, high=0, sudah=0;

    scanf("%d ", &n);
    scanf("%d ", &t);
    scanf("%d", &target);
    hari=0;
    while(sudah==0)
    {
       if (hari % 3 == 0)
       {
                naik = naik + n*3;
                turun = turun + t;
                } else {
                       if (hari % 5 == 0)
                       {
                              naik = naik + n;
                              turun = turun + t*2;
                              } else {
                                     naik = naik + n;
                                     turun = turun + t;
                       }
                       }
       high = naik - turun;
       if (high <= 0)
       {
                sudah = 1;
       }
       if (high >= target)
       {
                sudah = 1;
       }
       hari++;
    }
    if(high<1)
    {
              printf("mustahil\n");
    } else {
            printf("%d\n", hari-1);
    }
    return 0;

}
