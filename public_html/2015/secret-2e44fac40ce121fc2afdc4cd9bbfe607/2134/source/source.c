#include<stdio.h>

int main()
{
    int i,t,m,n,interval,y;
    
    scanf("%d",&t);
    scanf("%d %d",&m,&n);
    i=1;
    y=0;
    interval=(m-n)/t;
    while(i<=t)
    {
      y=n+interval;
      printf("%d-%d\n",n,y);
      n=y+1;
      i++;       
    }

    return 0;
}
                                                                                                                                                                                                     
