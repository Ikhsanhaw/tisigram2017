#include <stdio.h>
unsigned long long int p(int x,int y);
int main(){
    int a,b,i;
    unsigned long long int c;
    scanf("%d %d",&a, &b);
    if(b>(a-b)) c=p(a,b);
    else c=p(a,a-b);
    printf("%llu\n",c);
return 0;
}
unsigned long long int p(int x,int y){
    if(x<=y) return 1;
    else
    return(x*p(x-1,y));
}
