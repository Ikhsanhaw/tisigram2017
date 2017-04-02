#include <stdio.h>

int main(){
    int angka[4],jumlah,i;
    
    for(i=0;i<3;i++){
          scanf("%d",&angka[i]);
          }
    jumlah=angka[0];
    for(i=1;i<3;i++){
          jumlah=jumlah+angka[i];
          }
    printf("%d",jumlah);
    return 0;
    
}
