#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int X,kamu,mod,div,hasilnya=0;
    scanf("%d",&X);
    while(X>0){
         if(X>=100){
            kamu=100;            
         }
         else if(X>=10){
            kamu=10;            
         }else{
            kamu=1;   
         }                   
         mod=X/kamu;
         X=X%kamu;
         hasilnya=hasilnya+mod;           
    }        
    printf("%d\n",hasilnya);
    return 0;
    
}    
