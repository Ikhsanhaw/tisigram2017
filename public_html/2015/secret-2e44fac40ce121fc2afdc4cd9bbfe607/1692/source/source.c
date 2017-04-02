#include <stdio.h>
#include <stdlib.h>

int main(){
    int angka,i,faktor,jmf=0;

    scanf("%d",&angka);
    for(i=angka-1;i>0;i--){
        if(angka % i == 0){
            faktor = i;
            jmf = jmf + faktor;
        }
    }
    if(jmf == angka){
        printf("Angka Sempurna\n");
    }else{
        printf("Bukan Angka Sempurna\n");
    }

return 0;
}
