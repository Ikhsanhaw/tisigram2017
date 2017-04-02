#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int m,n,t,f,i,r;

    scanf("%d",&t);
    scanf("%d %d",&m,&n);
    r=n;
    f = floor((m + n)/t);
    for(i=1;i<=t;i++){
        printf("%d - %d\n", r,r+((m-n)/t));
        r = r+((m-n)/t)+1;
    }
}
