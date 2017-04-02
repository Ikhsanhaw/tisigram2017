#include <stdio.h>

int main (){
    int x, y[10][6], jumlah[10], i, j;
    
    scanf("%d", &x);
    for(i=1;i<=x;i++){
        jumlah[i]=0;
        for(j=1;j<=6;j++){
            scanf("%d", &y[i][j]);
            jumlah[i]=jumlah[i]+y[i][j];
        }
    }
    for(i=1;i<=x;i++){
        printf("%d\n", jumlah[i]);
    }
    
    return 0;   
}
