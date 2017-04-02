#include<stdio.h>
#include<stdlib.h>


int main(){
int N;

scanf("%d",&N);

if(N%2==0 && N!=1 && N!=0){
    int status = 1;

    while(N>2){
    N = N/2;
    if(N%2==0){
        status=1;
    }
    else{
        status =0;
    }
    }
    if(status == 1){
        printf("TRUE\n");
    }
    else{
        printf("FALSE\n");
    }
}
else if(N==1){
    printf("TRUE\n");
}
else{
    printf("FALSE\n");
}

return 0;
}

