#include<stdio.h>

int main()
{
    int i,n,nb,nk,interval,y;
    scanf("%d",&n);
    scanf("%d %d",&nb,&nk);
    i=1;
    y=0;
    interval=(nb-nk)/n;
    while(i<=n)
    {
      y=nk+interval;
      printf("%d-%d\n",nk,y);
      nk=y+1;
      i++;       
    }

    return 0;
}
                                                                                                                                                                                                     
