#include <stdio.h>
int main(){
    int t,x,tot,i;
    scanf("%d",&t);
    while(t--){
               tot=0;
               for(i=0;i<6;i++){
               scanf("%d",&x);
               tot+=x;
               }
               printf("%d\n",tot);
    }
return 0;
}
