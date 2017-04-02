#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int tc,q=6,r=0,x;
    scanf("%d",&tc);
    while(tc--){
         q=6;r=0;
         while(q--){
                    scanf("%d",&x);
                    r+=x;
                    }
                       printf("%d\n",r);
    }
    return 0;
}
