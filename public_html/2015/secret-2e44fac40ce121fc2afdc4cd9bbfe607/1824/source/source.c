#include <stdio.h>

int main(){

    unsigned int x;
    int T,i;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&x);
        if(x==0){
            printf("false\n");
        }else{
            printf("true\n");
        }
    }
    return 0;
}
