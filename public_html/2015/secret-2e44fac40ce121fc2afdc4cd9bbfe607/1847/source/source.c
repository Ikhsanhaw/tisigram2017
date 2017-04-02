#include <stdio.h>

int main(){
    int N,a,s,m;
    scanf("%d", &N);
    s=0;
    for(a=0;a<N+1;a++){
    m=a*s;
    s=s+2;
    }
    printf("%d\n", m);
    
    return 0;
}
