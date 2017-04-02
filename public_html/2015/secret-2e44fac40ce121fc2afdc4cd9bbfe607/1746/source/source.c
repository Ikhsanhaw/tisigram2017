#include <stdio.h>

int main(){
    int n,i,jumlah=0;
    
    scanf("%d",&n);
    for (i=1;i<n;i++){
        if(n % i){
             jumlah=jumlah+0;
             } else{ 
             jumlah=jumlah+i;
             }
        }
    if(jumlah==n){
                  printf("Angka Sempurna\n");
                  } else{
                         printf("Bukan Angka Sempurna\n");
    return 0;
}
