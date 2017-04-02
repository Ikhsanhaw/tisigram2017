#include<stdio.h>
#include<stdlib.h>

int main(){
    int nilai,jumlah,sementara,kardus=0;
    scanf("%d",&nilai);   
    jumlah=nilai*6;
    sementara=jumlah;
    while(sementara>=0){
        sementara=sementara-20;
        kardus=kardus+1;    
    }
    kardus=kardus-1;
    nilai=nilai+kardus;
    nilai=(nilai*6)+nilai;
    printf("%d\n",nilai);
    return 0;            
}    
