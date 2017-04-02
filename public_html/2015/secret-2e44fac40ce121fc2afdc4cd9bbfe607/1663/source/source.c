#include<stdio.h>
int main(){
    int i,n,A,temp,T[10];
    scanf("%d",&A);
    for(i=1;i<=10;i++){
        T[i]=0;
    }
    for(i=1;i<=A;i++){
            for(n=1;n<=6;n++){
                scanf("%d",&temp);
                T[i]=T[i]+temp;
            }
    }
    for(i=1;i<=A;i++){
        printf("%d\n",T[i]);
    }
    return 0;
}
