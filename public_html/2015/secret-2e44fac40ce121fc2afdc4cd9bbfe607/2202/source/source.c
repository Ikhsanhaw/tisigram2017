#include<stdio.h>
int rek(int a){
    if(a>1){
        return a=a*rek(a-1);
    }else{
        return 1;
    }
}

int main(){
    int i, n,r;
    scanf("%d %d",&n,&r);
    i=rek(n)/(rek(r)*rek(n-r));
    printf("%d\n",i);
    return 0;
}
