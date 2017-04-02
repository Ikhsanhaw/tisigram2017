#include <stdio.h>

int main (){
    int terkecil,terbesar,kelas;
    int interval;
    int indeks;
    
    scanf("%d" , &kelas);
    scanf("%d %d" , &terbesar , &terkecil);
    
    if(kelas >= 1 && kelas <= 20 && terbesar >= 1 && terbesar <= 2000 && terkecil >= 1 && terkecil <= 2000){
               interval = (terbesar - terkecil) / kelas;
    }
    
    for(indeks = 0 ; indeks < kelas ; indeks++){
               printf("%d - %d\n" , terkecil , terkecil+interval);
               terkecil = terkecil + interval + 1;
    }
    
    return 0;
}
