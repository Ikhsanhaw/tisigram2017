#include <stdio.h>

int main (){
    int N, M, O, a, b, i;
    
    scanf("%d", &N);
    scanf("%d", &M);
    if(N==M){
       printf("1\n");
    } else {
        a=N;
        for(i=N-1 ; i>M ; i--){
            a=a*i;
        }
        O=N-M;
        b=O;
        for(i=O-1 ; i>=1; i--){
            b=b*i;
        }
        printf("%d\n", a/b);
    }
    return 0;   
}
