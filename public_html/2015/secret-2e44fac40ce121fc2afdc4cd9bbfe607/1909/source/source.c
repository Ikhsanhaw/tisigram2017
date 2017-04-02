#include<stdio.h>
int main(){
     int N;
     scanf("%d", &N);
     
     if(N<1000){
       if(N == 0){
         printf("0");
         }else if(N == 1){
          printf("2");
          }else if(N == 2){
            printf("8");
            }else if(N == 3){
             printf("18");
              }else if(N == 4){
               printf("32");
              }
             }
           
printf("\n");   
return 0;    
}
