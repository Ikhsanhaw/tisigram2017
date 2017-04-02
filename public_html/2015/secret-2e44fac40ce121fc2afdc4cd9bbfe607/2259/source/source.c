#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int N,D;
    scanf("%d",&N);
    int jumlah[N];
    
    for(int i=0;i<N;i++){
            scanf("%d",&D);
            jumlah[i]=D;
    }
    
    for(int i=0;i<N;i++){
            printf("%c",jumlah[i]);
    }
    printf("\n");
    return 0;      
}    
