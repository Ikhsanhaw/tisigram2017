#include<stdio.h>
#include<stdlib.h>
int main(){
    int i=0,n=0,A,b,c;
    scanf("%d %d",&b,&c);
    scanf("%d",&A);
    while(i==0){
        if(b<c){
            i=3;
        }
        n=n+1;
        if(n%3==0){
            A=A-(3*b)+c;
        }else if(n%5==0){
            A=A+(2*c)-b;
        }else{
            A=A-b+c;
        }
        if(A<=0){
            i=1;
        }
    }
    if(i==3){
        printf("mustahil");
    }else{
        printf("%d\n",n);
    }
    return 0;
}

