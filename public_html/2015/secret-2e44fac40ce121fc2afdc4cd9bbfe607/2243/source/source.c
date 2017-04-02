#include <stdio.h>

int main(){
    int i, N;
    char ASCII[100];
    scanf("%d", &N);
    for(i=0;i<N;i++){
    scanf("%d", &ASCII[i]);
    }
    for(i=0;i<N;i++){
    printf("%c", ASCII[i]);
    }
    return 0;
}
