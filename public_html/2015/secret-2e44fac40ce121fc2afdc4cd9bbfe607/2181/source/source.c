#include<stdio.h>



int main(){
    int i,s,n,max,min,interval,t;
    scanf("%d",&n);
    scanf("%d",&max);
    scanf("%d",&min);
    interval=((max-min)/n);
   
   s=min+interval;
    for(i=1;i<=n;i++){
           
           
            if (i==1){
            t=min+interval;
            printf("%d - %d \n",min,t);
            }else{
            s=t+1;
            t=s+interval;
            printf("%d - %d\n",s,t);
            
            }
        
            }
  
            return 0; };
