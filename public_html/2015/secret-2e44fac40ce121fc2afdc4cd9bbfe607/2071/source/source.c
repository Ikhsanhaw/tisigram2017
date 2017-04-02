#include <stdio.h>

int main(){
    int n,i,jumlah=0;
    
    scanf("%d",&n);
    for (i=1;i<n;i++){
        if(n % i ==0){
        jumlah=jumlah+i;
        }
        }
    if(jumlah==n){
                  printf("Angka Sempurna\n");
                  } else{
                         printf("Bukan Angka Sempurna\n");
                         }                     
    return 0;
}
