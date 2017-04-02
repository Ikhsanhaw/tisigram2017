#include <stdio.h>
int main(){
    int i,x,cek=0,a,b,c,d;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    for(i=0;i<=c;i++){
                     if((i*a+(c-i)*b)==d){
                                          cek=1;
                        printf("%d %d",i,c-i);
                        break;
                      }
    }
    if(cek==0)printf("mustahil");
return 0;
}
