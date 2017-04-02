#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

int main()
{
    int A, B, H, hari=0;
    int cicak=0;
    bool mustahil=false;
    
    scanf("%d %d %d", &A, &B, &H);
    
    if (A*3 <= B*2){
       mustahil=true;
    }
    
    while((cicak < H) && (!mustahil)){
    hari++;
        if(hari%3 == 0){
           cicak += A*3;
           cicak -= B;          
        } else if (hari%5 == 0){
           cicak += A;
           cicak -= B*2;
        } else if ((hari%3!=0) && (hari % 5 != 0)){
           cicak += A;
           cicak -= B;
        }
    
    }
    
    if(mustahil){
      printf("mustahil");
    } else {
      printf("%d", hari-1);
    }
    printf("\n");
    return 0;   
}
