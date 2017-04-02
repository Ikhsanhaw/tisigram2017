#include <stdio.h>

int main (){
    int nilai;
    int temp=0;
    int indeks;

    scanf("%d" , &nilai);
    
    if(nilai >= 0){
             
    temp = nilai;
             
    for(indeks = 1 ; indeks < nilai ; indeks++){
               temp = temp*nilai;
    }
    
    }
    
    temp = nilai % 2;
    
    printf("%d\n" , temp);
    
    return 0;
    
}
