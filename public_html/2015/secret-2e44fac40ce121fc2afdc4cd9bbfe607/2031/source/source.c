#include <stdio.h>

int main(){
 
    int H, A, B;
    int progress=0, hari=1;
    scanf("%d %d %d", &A, &B, &H);
 
    if (A <= B){
       printf("mustahil\n");
      // getch(); 
    }
    else{
         while(progress < H){
         if (hari%3 == 0){
            progress = progress + (3*A)-B;
           }
        else{
             if (hari%5 == 0){
                progress = progress + A-(2*B);
             }
             else{
                  progress = progress + A-B;
                   }
             }
           //  printf("%d\n", progress);
        hari++;
       }
             
       printf("%d\n", hari-2);
      // getch(); 
    }
    
   return 0;
}
