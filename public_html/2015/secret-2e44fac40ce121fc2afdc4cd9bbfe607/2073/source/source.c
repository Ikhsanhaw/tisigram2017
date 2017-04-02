#include <stdio.h>

int main(){
    int jumlah[1001],n,i,kali;
    jumlah[0]=0;
    jumlah[1]=2;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
          kali=2*((2*i)+1);           
          jumlah[i+1]=jumlah[i]+kali;
          }
    printf("%d\n",jumlah[n]);
    
    return 0;
}
