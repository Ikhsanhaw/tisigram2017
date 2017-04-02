#include <stdio.h>
#include <string.h>
int main(){
    int x,y,a=1,b=1,c=1;
    int i,j;
    scanf("%d %d",&x,&y);
      if(x>y && x>0 && y>0){
        for(i=1;i<=x;i++){
            a*=i;
                     }
        for(i=1;i<=x-y;i++){
            b*=i;
                     }
        for(i=1;i<=y;i++){
            c*=i;
                     }
               j=a/(b*c);      
               printf("%d\n",j);      
                    } 
                                
                     
           
         return 0;            
    }

