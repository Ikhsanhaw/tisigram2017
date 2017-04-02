#include <stdio.h>
#include <string.h>
int main(){
    int x,y,b,c,a;
    int i,j;
    scanf("%d %d %d",&a,&b,&c);
    if(a%3==0){
        a*=3;       }
        if(b%5==0){
        b*=2;       }
    
    if(a<b){
            
            printf("mustahil\n"); }else{
                                  x=c-(a-b);
                                  if(x<0){
                                          printf("0\n");}else
                                          {
                                                            printf("%d\n",x);}}      
    
                     
            
         return 0;            
    }

