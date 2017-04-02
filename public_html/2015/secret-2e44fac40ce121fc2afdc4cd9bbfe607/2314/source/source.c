#include<stdio.h>

int main(){
    int N, i;
    char X[50];
    scanf("%d", &N);
    for(i=0; i<N; i++){
             scanf("%d", &X[i]);
             }
             for(i=0; i<N; i++){
             printf("%c", X[i]);
             }
             printf("\n");
             getch();
             return 0;
    }
