#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int X,i,hasil=0;

    scanf("%d",&X);
    hasil = X;
    for(i=0;i<X-1;i++){
        hasil = hasil*X;
    }
    hasil = hasil %2;
    printf("%d\n",hasil);

    return 0;
}
