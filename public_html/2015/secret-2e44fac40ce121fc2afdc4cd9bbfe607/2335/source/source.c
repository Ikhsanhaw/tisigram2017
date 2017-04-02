#include <stdio.h>

int main(){
 
    int H, A, B;
    int progress=0, hari=1;
    scanf("%d %d %d", &A, &B, &H);
 
    if (A <= B){
       printf("mustahil\n");
    }
    else{
         while(progress <= H){
         if (hari%3 == 0){
            progress = progress + (3*A);
           }
        else{
             progress = progress + A;        
            }
          // printf("%d\n", progress);
        if (progress < H ){
           if (hari % 5 == 0){
              progress = progress - (2*B);
           }
           else{
                progress = progress - B;
           }
        }
        hari++;
       //  printf("%d\n", progress);
       }
             
       printf("%d\n", hari-1);
        
    }
    //getch();
   return 0;
}
