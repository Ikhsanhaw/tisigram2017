#include <stdio.h>

int Pas(int r, int c) {
    if (c == 0 || c == r) {
        return 1;
    } else {
        return Pas(r - 1, c - 1) + Pas(r - 1, c);
    }
}

int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    printf("%d\n", Pas(N,M));

    return 0;
}

