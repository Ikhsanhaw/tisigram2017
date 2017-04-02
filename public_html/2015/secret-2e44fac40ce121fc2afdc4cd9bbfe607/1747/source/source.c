#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int i,n,nb,nk,interval,x,y;
    scanf("%d",&n);
    scanf("%d \t %d",&nb,&nk);
    i=1;
    while(i<=n)
    {
      interval=(nb-nk)/n;
      x=nk;
      y=nk+interval;
      printf("%d-%d\n",x,y);
      nk=y+1;
      i++;       
    }
    getch();
    return 0;
}
