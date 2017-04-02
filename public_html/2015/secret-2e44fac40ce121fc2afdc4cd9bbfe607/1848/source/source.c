#include <stdio.h>

int main (){
    int nilai;
    int indeks;

    scanf("%d" , &nilai);
    
    if(nilai >= 0){
             
    for(indeks = 1 ; indeks <= nilai ; indeks++){
               nilai = nilai*nilai;
    }
    
    }
    
    nilai = nilai % 2;
    
    if(nilai == 0){
             nilai = 0;
          printf("%d\n" , nilai);
    }else{
          nilai = 1;
          printf("%d\n" , nilai);
    }

    return 0;
    
}
