#include <stdio.h>

int main(){
    int i,n,maks,min,interval,selisih;
    
    scanf("%d",&n);
    scanf("%d %d",&maks,&min);
    selisih=maks-min;
    interval=selisih/n;
    for(i=0;i<n;i++){
                     printf("%d - %d\n",min,min+interval);
                     min=1+min+interval;
                     }
    return 0;
    
}
