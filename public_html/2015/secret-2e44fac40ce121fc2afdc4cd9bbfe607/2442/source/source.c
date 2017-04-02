#include<stdio.h>
#include<stdlib.h>
int main(){
    int i=0,n=1,A,b,c;
    scanf("%d %d %d",&b,&c,&A);
    while(i==0){
        if(b<c){
            i=3;
        }
        if((n%3)==0){
            A=A-(3*b);
            if(A<=0){
                i=1;
            }
            A=A+c;
            n=n+1;
        }else{
                if((n%5)==0){
                A=A+(2*c)-b;
                if(A<=0){
                    i=1;
                }
                n=n+1;
            }else{
                A=A-b;
                if(A<=0){
                    i=1;
                }
                A=A+c;
                n=n+1;
            }
        }
    }
    if(i==3){
        printf("mustahil\n");
    }else{
        printf("%d\n",n-1);
    }
    return 0;
}

