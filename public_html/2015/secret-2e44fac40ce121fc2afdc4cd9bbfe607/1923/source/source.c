#include<stdio.h>
#include<stdlib.h>

int main(){
    int X,A,B,C,j,k,l=0,m=0;
    scanf("%d",&X);
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    for(int i=1;i<X;i++){
            if(i%A==0&&i%B==0&&i%C==0){
            j=i;
            }     
    }
    m=X+1;
    while(l!=1 && m>X){
            if(m%A==0&&m%B==0&&m%C==0){
               l=1;
               k=m;
            }
            m++;
    }
    m=m-1;    
    printf("%d %d\n",j,m);
    
    return 0;
}    
