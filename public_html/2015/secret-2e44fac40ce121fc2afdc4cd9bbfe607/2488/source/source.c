    #include<stdio.h>
    #include<string.h>
    #include<math.h>
     
     
    int main()
    {
    int n,t,target,naik=0,turun=0, high=0, sudah=0;
    long int hari;
    scanf("%d ", &n);
    scanf("%d ", &t);
    scanf("%d", &target);
    hari=1;
    while(sudah==0)
    {
       if (hari % 3 == 0)
       {
          naik = naik + n*3;
          high = naik - turun;
          if (high >= target)
          {
            sudah = 1;
          } else {
             turun = turun + t;
          }
       } else {
           if (hari % 5 == 0)
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
             naik = naik + n;
             high = naik - turun;
             if (high >= target)
          {
            sudah = 1;
          } else {
             turun = turun + t;
             }
           }
       }
    
       if (hari >= 50000)
       {
         sudah = 1;
       }
       
       hari++;
    }
   
    if(high >= target)
    {
         printf("%d\n", hari-1);
    } else {
         printf("mustahil\n");
    } 
    
   
    return 0;
     
    }
