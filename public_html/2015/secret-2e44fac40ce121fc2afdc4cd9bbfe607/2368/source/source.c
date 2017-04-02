#include<stdio.h>


int main(){
    int rek(int a, int b){
        if(a>b){
            return a=a*rek(a-1,b);
        }else{
            return 1;
        }
    }
    int i,q,w, n,r;
    scanf("%d %d",&n,&r);
    q=rek(n,r);
    w=rek(n-r,1);
    i=q/w;
    printf("%d\n",i);
    return 0;
}
