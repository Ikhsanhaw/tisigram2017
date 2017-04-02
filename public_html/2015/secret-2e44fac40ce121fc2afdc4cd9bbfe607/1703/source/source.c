#include<stdio.h>
#include<stdlib.h>

int main(){
    int A,B,H;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&H);
    if(A<B){
         printf("mustahil\n");
    }else{
         int i=0;
         while(H>0){
             H=(H-A);
             if(H>0){
                 H=H+B;              
             }
             i++;      
         }
         printf("%d",i);
    }
       
    return 0;         
}
