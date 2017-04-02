#include<stdio.h>
#include<stdlib.h>

int main(){
int n;

scanf("%d",&n);
buatgunung(n);
printf("\n");
return 0;
}

void buatgunung(int n){
    if(n==1){
        printf("*");
    }
    else{
        int i;
        buatgunung(n-1);
        printf("\n");
        for(i=1;i<=n;i++){
            printf("*");
        }
        printf("\n");
        buatgunung(n-1);
    }
}
