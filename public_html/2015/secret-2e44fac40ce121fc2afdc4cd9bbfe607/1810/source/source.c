#include<stdio.h>
int main(){
    int i,n,A,b,temp;
    float T[8];
    for(n=1;n<=8;n++){
        T[n]=0;
    }
    scanf("%d",&A);
    for(i=1;i<=A;i++){
        scanf("%d",&b);
        for(n=1;n<=b;n++){
            scanf("%d",&temp);
            T[i]=T[i]+temp;
        }
        T[i]=T[i]/b;
    }
    for(n=1;n<=A;n++){
        printf("%.2f\n",T[n]);
    }
    return 0;
}
