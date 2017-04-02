#include <stdio.h>

int main(){

    int x,T,i,j,h;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        h = 0;
        for(j=0;j<6;j++){
            scanf("%d",&x);
            h += x;
        }
        printf("%d\n",h);
    }
    return 0;
}
