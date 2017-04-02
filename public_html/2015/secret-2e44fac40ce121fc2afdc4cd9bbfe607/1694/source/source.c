#include <stdio.h>

int main(){
    int T,j, i;
    int N;
    scanf("%d", &T);
    int semester[T][8];
    float rata2[T];
    for (i = 0; i < T; i++){
        rata2[i] = 0.0;
        scanf("%d", &N);
        for (j = 0; j < N; j++){
            scanf("%d", &semester[i][j]);
            rata2[i] = rata2[i] + (semester[i][j])/(float)N;
        }
    }
    for (i = 0; i < T; i++){
        printf("%.2f\n", rata2[i]);
    }
   // getch();
   return 0;
}
