#include<stdio.h>
int main(){
    unsigned int s;
    s=18446744073709551615;
    int i,n,A[1000];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&A[i]);
    }
    for(i=1;i<=n;i++){
        if(A[i]>=0 && A[i]<=s){
            printf("true\n");
        }else{
            printf("false\n");
        }
    }
    return 0;
}

