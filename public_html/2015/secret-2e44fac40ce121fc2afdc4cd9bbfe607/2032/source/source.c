#include<stdio.h>

int main()
    {
        int i,j,A,B,H,hari = 0;
        scanf("%d",&A);
        scanf("%d",&B);
        scanf("%d",&H);
        if(A > B)
            {
                i = 0;
                while(i < H)
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
                        hari++;
                    }
                printf("%d\n",hari);
            }
        else
            {
                printf("mustahil\n");
            }
        return 0;
    }

