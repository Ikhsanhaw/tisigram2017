#include<stdio.h>

int main(){
    int X;
    int p;
    int A;
    int B;
    int C;
    scanf("%d", &X);
    scanf("%d %d %d", &A, &B, &C);
    for(p=0;p<=X;p++)
             p=p*2;
             printf("%d",p);
    return 0;
}
