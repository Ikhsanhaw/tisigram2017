#include<stdio.h>

int main(){
    /*Deklarasi*/
    int X[6][10],T;
    int i,j;
    
    /*Proses*/
    scanf("%d", &T);
    for(i=0; i<T; i++){
      for(j=0; j<6; j++){
        scanf("%d", &X[i][j]);
      }
    }
    
    for(i=0; i<T; i++){
        printf("%d\n", (X[i][0]+X[i][1]+X[i][2]+X[i][3]+X[i][4]+X[i][5]));
    }
    return 0;
}
