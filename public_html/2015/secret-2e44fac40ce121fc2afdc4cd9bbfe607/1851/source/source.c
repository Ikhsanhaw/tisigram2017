#include <stdio.h>
int p(int x);
int main(){
    int a,b,c;
    scanf("%d %d",&a, &b);
    c=p(a)/(p(b)*p(a-b));
    printf("%d\n",c);
return 0;
}
int p(int x){
    if(x<=1) return 1;
    else
    return(x*p(x-1));
}
