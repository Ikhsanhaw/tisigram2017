#include<stdio.h>
int main(){
    long long int s=2;
    int i,n,A[1000];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&A[i]);
    }
    for(i=1;i<=63;i++){
        s=s*2;
    }
    for(i=1;i<=n;i++){
        if(A[i]>=0 && A[i]<=s-1){
            printf("true\n");
        }else{
            printf("false\n");
        }
    }
    return 0;
}

