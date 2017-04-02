#include <stdio.h>

int main (){
    long int nilai;
    long int temp=0;
    long int indeks;

    scanf("%d" , &nilai);
    
    if(nilai >= 0){
             
    temp = nilai;
             
    for(indeks = 1 ; indeks < nilai ; indeks++){
               temp = temp*nilai;
    }
    
    temp = nilai % 2;
    
    }
    
    printf("%d" , temp);
    
    getch();
    return 0;
    
}
