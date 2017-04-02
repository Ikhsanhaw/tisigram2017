#include<stdio.h>
#include<stdlib.h>

int main(){
    int X,A,B,C;
    scanf("%d",&X);
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    for(int i=1;i<X;i++){
            if(i%A==0&&i%B==0&&i%C==0){
            printf("%d %d\n",i,i*2);
            }     
    }              
    return 0;
}    
