#include <stdio.h>

int main (){
    int nilai;
    int total=0;
    int temp;
    int indeks;

    scanf("%d" , &nilai);
    
    for(indeks = 1 ; indeks < nilai ; indeks++){
    temp = nilai % indeks;

    if(temp == 0){
    total = total + indeks;
    }
    
    }
    
    if(total == nilai){
             printf("Angka Sempurna");
    }else{
          printf("Bukan Angka Sempurna");
    }

    return 0;
    
}
