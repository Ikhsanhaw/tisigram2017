#include<stdio.h>
#include<stdlib.h>

int main(){
    int A,B,H,hasil;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&H);
    hasil=H;
    if(A<B){
         printf("mustahil\n");
    }else{
         int i=0;
         while(hasil>0){
             hasil=(hasil-A);
             if(hasil>0){
                 hasil=hasil+B;              
             }
             i++;      
         }
         printf("%d\n",i);
    }   
    return 0;         

}
