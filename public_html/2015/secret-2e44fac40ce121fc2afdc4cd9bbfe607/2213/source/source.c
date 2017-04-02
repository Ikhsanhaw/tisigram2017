#include<stdio.h>

int rek(int a){
    if(a>1){
        return a=a*rek(a-1);
    }else{
        return 1;
    }
}

int main(){
    int i,q,w,s, n,r;
    scanf("%d %d",&n,&r);
    q=rek(n);
    w=rek(r);
    s=rek(n-r);
    i=q/(w*s);
    printf("%d\n",i);
    return 0;
}
