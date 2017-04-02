#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool mitos(int x);
int main(){
    int t,i,g,h,l;
    scanf("%d",&t);
    while(t--){
               
    scanf("%d %d %d",&g,&h,&l);
    int count=l;
    for(i=1;i<=l;i++){
                      if(mitos(i))count--;
    }
    printf("%d\n",(count-1)*h+g );
    }
return 0;
}
bool mitos(int l){
     int z;
     z=l;
     if((z==4) || (z==13))return 1;
     while(z>10){
                 if(((z%10)==4))return 1;
                 else
                 z=z/10;
     }
     z=l;
     while(z>10){
                 if(((z%100)==13))return 1;
                 else
                 z=z/10;
     }
     return 0;     
}

