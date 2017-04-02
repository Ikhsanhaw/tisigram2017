#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int tc,tq,q,c,pb;
    long int r=1;
    scanf("%d%d",&tc,&tq);q=tq;c=tc;pb=1;
    while(tq--){
                r*=c;
                c--;
                }
                tq=q;
                while(tq--){
                            //printf("%d",tq);
                            pb=pb*(tq+1);
                            }
                r=r/pb;
                printf("%ld\n",r);
                //getch();
    return 0;
}
