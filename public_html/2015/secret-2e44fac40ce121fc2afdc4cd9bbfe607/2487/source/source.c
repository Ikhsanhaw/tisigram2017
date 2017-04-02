#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int X,kamu,mod,div,hasilnya,a,b,c;
    scanf("%d",&X);
         if(X>=100){
            kamu=100;            
            mod=X/kamu;
            X=X%kamu;
            a=mod;           
         }
         if(X>=10){
            kamu=10;            
            mod=X/kamu;
            X=X%kamu;
            b=mod;                     
         }
         if(X<10){
            kamu=1;            
            mod=X/kamu;
            X=X%kamu;
            c=mod;           
         }                   
    hasilnya=a+b+c;                   
    printf("%d\n",hasilnya);
    return 0;
    
}    
