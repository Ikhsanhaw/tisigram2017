#include <stdio.h>
#include <math.h>

int main(){
    int i,j,k,temp,T;
    scanf("%d",&T);
    float jumlah[T];
    for(i=0;i<T;i++){
        jumlah[i]=0;
    }
    float rata[T];
    for(i=0;i<T;i++){
        scanf("%d",&k);
        for(j=0;j<k;j++){
            scanf("%d",&temp);
            jumlah[i]=jumlah[i]+temp;
        }
        rata[i]=jumlah[i]/k;
    }
    for(i=0;i<T;i++){
        printf("%.2f\n",rata[i]);
    }
return 0;
}
