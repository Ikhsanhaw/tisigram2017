#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int Nilai,kamu,mod,div,hasilnya;
    scanf("%d",&Nilai);
    hasilnya=0;
    while(Nilai>0){
         if(Nilai>=1000){
            kamu=1000;            
         }
         else if(Nilai>=100){
            kamu=100;            
         }
         else if(Nilai>=10){
            kamu=10;            
         }else{
            kamu=1;   
         }                   
         mod=Nilai/kamu;
         Nilai=Nilai%kamu;
         hasilnya=hasilnya+mod;           
    }        
    printf("%d\n",hasilnya);
    return 0;
    
}    
