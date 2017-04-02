#include<stdio.h>
#include<stdlib.h>

int main(){
    int A,B,H,hasil;
    int i=0;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&H);
    hasil=H;
    if(A>B){
         while(hasil>0){
             hasil=(hasil-A);
             if(hasil>0){
                 hasil=hasil+B;              
             }
             i++;      
         }
         printf("%d\n",i);
    }else{
         printf("mustahil\n");       
    }        
    return 0;         
}
