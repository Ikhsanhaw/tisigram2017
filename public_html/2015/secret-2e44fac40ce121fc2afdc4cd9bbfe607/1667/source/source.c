#include <stdio.h>
int main(){
    int A, B, C, D, E, F, i , j;
    int x[100];
    scanf("%d",&j);
    for(i = 0; i<j;i++){
        scanf("%d",&A);
        scanf("%d",&B);
        scanf("%d",&C);
        scanf("%d",&D);
        scanf("%d",&E);
        scanf("%d",&F);
          x[i] = A+B+C+D+E+F;
    }

    for(i = 0; i<j;i++){
          printf("%d\n",x[i]);
    }
    return 0;
}
