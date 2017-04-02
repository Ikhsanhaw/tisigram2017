#include <stdio.h>

int fpb(int a, int b){
    int r = 0;
    while(b!=0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    int n,i,factor;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    factor = A[0];
    for(i=0;i<n;i++){
        factor = fpb(factor,A[i]);
    }
    printf("%d\n",factor);
    for(i=0;i<n;i++){
        printf("%d\n",A[i]/factor);
    }

    return 0;
}
