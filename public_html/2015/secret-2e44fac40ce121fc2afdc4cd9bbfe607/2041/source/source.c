#include <stdio.h>
#include <string.h>
int main(){
    int x,y,a=1,b=1,c=1;
    int i,j;
    scanf("%d %d",&x,&y);
        for(i=1;i<=x;i++){
            a*=i;
                     }
        for(i=1;i<=x-y;i++){
            b*=i;
                     }
        for(i=1;i<=y;i++){
            c*=i;
                     }
                     
                     printf("%d\n",a/(b*c));
              
         return 0;            
    }

