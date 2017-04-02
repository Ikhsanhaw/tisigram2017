#include <stdio.h>
unsigned long long int p(int x,int y);
int main(){
    int a,b,i;
    unsigned long long int c;
    scanf("%d %d",&a, &b);
    if(b>(a-b)){
                c=p(a,b)/p(a-b,1);
                
                }
    else {
                c=p(a,a-b)/p(b,1);

                }
    printf("%d\n",c);
getch();
return 0;
}
unsigned long long int p(int x,int y){
    if(x<=y) return 1;
    else
    return(x*p(x-1,y));
}
