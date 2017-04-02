#include<stdio.h>

int main(){
    int ascii,n,i;
    
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &ascii);
        printf("%c", ascii);                 
    }
    printf("\n");
    return 0;
}
