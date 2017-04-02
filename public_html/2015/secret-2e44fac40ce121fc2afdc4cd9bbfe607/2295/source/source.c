#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int Nilai,mod,div,hasilnya=0;
    scanf("%d",&Nilai);
    if(Nilai>100){
         mod=Nilai/100;
         Nilai=Nilai%100;
         hasilnya=hasilnya+mod;
    }        
    if(Nilai>10){
         mod=Nilai/10;
         Nilai=Nilai%10;
         hasilnya=hasilnya+mod;
    }
    if(Nilai>=0 && Nilai<10){
         mod=Nilai;
         hasilnya=hasilnya+mod;
    }
    printf("%d\n",hasilnya);
    return 0;
    
}    
