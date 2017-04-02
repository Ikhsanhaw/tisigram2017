#include <stdio.h>

int main(){
    int X[10000],jumlah,i;
    
    for(i=0;i<3;i++){
          scanf("%d",&X[i]);
          }
    jumlah=X[0];
    for(i=1;i<3;i++){
          jumlah=jumlah+X[i];
          }
    printf("%d\n",jumlah);
    return 0;
    
}
