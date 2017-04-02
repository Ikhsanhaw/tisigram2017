#include <stdio.h>

int main(){
    long n,hasil=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    hasil=hasil+n*n;
    }  
    hasil=hasil % 2; 
    printf("%d",hasil);
    return 0;
}
