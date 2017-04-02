#include<stdio.h>
#include<stdlib.h>

int main(){
    int N,Jumlah;
    scanf("%d",&N);    
    
    if(N>=20){
       N=N+1;       
    }
    Jumlah=(N*6)+N;     
    printf("%d\n",Jumlah);
    return 0;
} 
