#include <stdio.h>

int main (){
    int N, M, O, i;
    long int a, b, c;
    
    scanf("%d", &N);
    scanf("%d", &M);
    O=N-M;
    if(N==M){
       printf("1\n");
    } else if(M==1){
              printf("%d\n", N);
           } else {
                a=N;
                for(i=N-1 ; i>O ; i--){
                    a=a*i;
                }
                ;
                if(O==1){
                   printf("%d\n", a);
                } else {
                   b=M;
                    for(i=M-1 ; i>=1; i--){
                        b=b*i;
                    }
                    printf("%d\n", a/b);
                }
                
    }
    return 0;   
}
