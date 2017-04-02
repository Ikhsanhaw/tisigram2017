#include <stdio.h>

int main()
{
    unsigned long int a,b,h,hasil=0,i=0,count=0;

    scanf("%ld %ld %ld",&a,&b,&h);
    if(b>a){
        printf("mustahil\n");
    }
    else
    {
        while(hasil < h)
        {
            if(i%3==0)
            {
                hasil = hasil + (a*3) - b;
            }
            if(i%5==0)
            {
                hasil = hasil + a - (b*2);
            }
            else{
                hasil = hasil + a - b;
            }
            if(hasil>=h)
            {
                printf("%ld\n",count);
            }
            count++;
            i++;
        }
    }
    return 0;
}
