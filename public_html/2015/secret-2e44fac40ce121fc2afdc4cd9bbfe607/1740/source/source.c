#include <stdio.h>
#include <string.h>
int main(){
    int x,y,i,j;
    int limit;
    scanf("%d",&limit);
    long long int lim[limit+1];
    for(i=0;i<limit;i++){
    scanf("%lld",&lim[i]); 
                                           
    }
    for(i=0;i<limit;i++){
         if(lim[i]>sizeof(long long int)){
            printf("%true\n"); }else{
            printf("false\n");}                                   
    }
         return 0;            
    }
