#include <stdio.h>

main()
{
    int M;
    

    do {

        printf("\n");
        scanf("%d" , &M);
        
              
        if (M<((4096*4)+(256))) printf("\n\nTrue \n");
        if (M>((4096*4)+(256))) printf("\n\nFalse \n");

       } 
       while (M < 999);
}

