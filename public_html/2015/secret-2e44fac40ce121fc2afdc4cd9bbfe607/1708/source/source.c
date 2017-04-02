#include <stdio.h>

int main(){

    int x,T,i,j,n;
    float h;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        h = 0;
        n = 0;
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d",&x);
            h += x;
        }
        h /= n;
        printf("%.2f\n",h);
    }
    return 0;
}
