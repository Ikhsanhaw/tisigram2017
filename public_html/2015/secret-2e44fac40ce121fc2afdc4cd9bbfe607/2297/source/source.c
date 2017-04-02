#include <stdio.h>

int main(){
    int n,i;
    int kode[1000];
    char rahasia[1000];
    
    scanf("%d",&n);
    for(i=1;i<=n;i++){
          scanf("%d",&kode[i]);
          }
    for(i=1;i<=n;i++){      
          printf("%c",kode[i]);
          }
    printf("\n");
}
