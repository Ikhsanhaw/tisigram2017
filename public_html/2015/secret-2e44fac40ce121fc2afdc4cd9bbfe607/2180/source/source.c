#include <stdio.h>
#include <string.h>
int main(){
    int x,y,a,b;
    int i,j;
    int limit;
        scanf("%d",&limit);
     float lim[limit][8],temp[limit];
         for(i=0;i<limit;i++){
               temp[i]=0;  
              scanf("%d",&y);              
            for(j=0;j<y;j++){
             scanf("%f",&lim[i][j]); 
             temp[i]+=lim[i][j];}
             temp[i]/=y;
         }    
         for(i=0;i<limit;i++){
             printf("%.2f\n",temp[i]); }
     
         return 0;            
    }

