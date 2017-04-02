#include<stdio.h>

int main()
    {
        int i,j,A,B,H,hari = 0,gagal = 0;
        scanf("%d",&A);
        scanf("%d",&B);
        scanf("%d",&H);
        i = 0;
        while(i < H && gagal == 0)
            {
                i = i + (A-B);
                if(i%3 == 0 || i%5 == 0)
                    {
                        if(i%3 == 0)
                            {
                                i += (3*A);
                            }
                        if(i%5 == 0)
                            {
                                i -= (2*B);
                            }
                    }
                if( hari > H*10000)
                    {
                        gagal = 1;
                    }
                hari++;
            }
        if(gagal == 1)
            {
                printf("mustahil\n");
            }
        else
            {
                printf("%d\n",hari);
            }

        return 0;
    }

