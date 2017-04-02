#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int tc,w,q,x;
    float qwe,r=0;
    scanf("%d",&tc);
    while(tc--){
                r=0;
         scanf("%d",&q);w=q;
         while(q--){
                    scanf("%d",&x);
                    r+=x;
                    }
                    qwe=r/w;    
                            printf("%.2f\n",qwe);      
    }
    //getch();
    return 0;
}
