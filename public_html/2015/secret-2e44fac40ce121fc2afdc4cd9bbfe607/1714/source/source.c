#include <stdio.h>

int main(){
    int j, i;
    int T;
    scanf("%d", &T);
    int angka[T][8];
    int jumlah[T];
    for (i = 0; i < T; i++){
        jumlah[i] = 0;
        for (j = 0; j < 6; j++){
            scanf("%d", &angka[i][j]);
            jumlah[i] = jumlah[i] + angka[i][j];
        }
    }
    for (i = 0; i < T; i++){
        printf("%d\n", jumlah[i]);
    }
    //getch();
   return 0;
}
