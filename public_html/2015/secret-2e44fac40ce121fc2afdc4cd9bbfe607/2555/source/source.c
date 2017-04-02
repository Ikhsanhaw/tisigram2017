#include <stdio.h>
int main()
{
    int A,B,H;
    int current  = 1,count= 1;
    scanf("%d %d %d",&A,&B,&H);
    while(current >0)
    {
        if(count % 3 == 0)
        {
            current = current + (A * 3);
        }
        else
        {
            current += A;
        }

        if(count % 5 == 0)
        {
            current = current - (B*2);
        }
        else
        {
            current -= B;
        }

        if(current == H)
        {
            printf("%d\n", count);
            break;
        }
        if(current <= 0)
        {
            printf("mustahil\n");
        }
        count++;
    }
    return 0;
}
