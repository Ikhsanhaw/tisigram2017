#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int T,A,B,C,D,E,F,i;
    int a;
    scanf("%d",&T);
    int S[T];
    for(i=0;i<T;i++){
        A= 1;
        B= 2;
        C= 3;
        D= 4;
        E= 5;
        F= 6;
        S[i]=A+B+C+D+E+F;
    }
    for(i=0;i<T;i++){
        printf("%d\n",S[i]);
    }
    return 0;
}


