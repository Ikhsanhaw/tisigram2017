#include <stdio.h>
int main(){
int t,n,x,tot,i;
float rata;
    scanf("%d",&t);
    while(t--){
               tot=0;
               scanf("%d",&n);
               for(i=0;i<n;i++){
                          scanf("%d",&x);
                          tot+=x;
               }
               rata=(float)tot/(float)n;
               printf("%.2f",rata) ;       
    }
return 0;
}
