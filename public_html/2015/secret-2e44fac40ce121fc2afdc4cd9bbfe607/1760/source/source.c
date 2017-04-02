#include<stdio.h>

int main(){
    int n,i,temp=0,hasil;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
      temp = i+i;
      hasil = temp*i;
      //printf("%d = %d\n",temp,hasil);          
    }
    printf("%d\n",(!n)?0:hasil);

    return 0;
}
