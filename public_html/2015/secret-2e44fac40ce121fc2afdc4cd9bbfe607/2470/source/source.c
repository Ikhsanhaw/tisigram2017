#include <stdio.h>
int main(){
    int a,b,h,tmp=0,d=1;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&h);
    if(a<b){
            printf("mustahil\n");
            }else{
                  
    while(tmp<h){
                 if(d%3==0){
                            tmp+=3*a;
                 }else tmp+=a;
                 if(tmp>=h){
                           break;           
                 }
                 if(d%5==0)tmp-=2*b;
                 else tmp-=b;
                 d++;
    }
    printf("%d\n",d);
}
return 0;
}
