#include <stdio.h>
#include <string.h>
int main(){
    int x=60,y=160,a,b;
    int limit;
        scanf("%d %d %d %d",&a,&b,&x,&y);
        b=y/b;
        a=b/a;
        if(a+b==x){
           printf("%d %d\n",b,a); 
           }else{printf("mustahil\n");}
           
         return 0;            
    }

