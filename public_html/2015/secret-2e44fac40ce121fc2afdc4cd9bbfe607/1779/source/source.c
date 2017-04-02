/*Bismillah*/
/*Program : HaloIndah.c*/
/*Nama : Fakhrana PP*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, A, B, H, n=0;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &H);
    if(A>B){
        for(i=0; i<=H; i++){
            if((i+A)<=H){
                n=n+A-B;
            }
        }printf("%d/n",n);
    }else{
        printf("mustahil/n");
    }
    
    return 0;
}
