#include <stdio.h>

int main(){
    int angka,i;
    scanf("%d",&angka);
    int nilai = 0;
    for(i=1;i<angka;i++){
        if(angka % i == 0){
        nilai = nilai + i;
    }
        if(nilai == angka){
            i = angka;
        }
    }
    if(nilai == angka){
        printf("Angka Sempurna\n");
    }else{
        printf("Bukan Angka Sempurna\n");
    }
   
   return 0; 
}
