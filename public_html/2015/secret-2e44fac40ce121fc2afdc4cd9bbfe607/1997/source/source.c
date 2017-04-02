#include <stdio.h>
#include <string.h>
int main(){
    int x,y,a,b;
    int i,j;
    int limit;
        scanf("%d",&limit);
     int lim[limit][6],temp[limit];
         for(i=0;i<limit;i++){
               temp[i]=0;               
            for(j=0;j<6;j++){
             scanf("%d",&lim[i][j]); 
             temp[i]+=lim[i][j];}
         }    
         for(i=0;i<limit;i++){
             printf("%d\n",temp[i]); }
         
         return 0;            
    }

