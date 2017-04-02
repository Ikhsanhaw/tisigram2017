#include <stdio.h>

int main(){

    int A,B,H,i,j;
    scanf("%d %d %d",&A,&B,&H);
    j = 0;
    if(A<B){
        printf("mustahil\n");
    }else{
        for(i=0;i<H;i=i+A){
        j++;
        if(j==3){
            i += (2 * A);
        }
        i -= B;
        if(j==5){
            i -= B;
        }
        }
        printf("%d\n",j);
    }

    return 0;
}

