#include <stdio.h>

int main(){
    int temp=0,A,B,H,hari=0,n=0;
    scanf("%d %d %d",&A,&B,&H);
    while(temp<H && n==0){
        if ((3*A)<(2*B)){
            n=1;
            printf("mustahil\n");
            }

        if((hari+1)%3==0){
            temp=temp+(3*A)-B;
            }
        else if((hari+1)%5==0){
            temp=temp+A-(2*B);
            }
        else{
            temp=temp+A-B;
           }
        if(temp<H){
        hari++;}
        else{
            n=2;
        }
    }
    if(n==2){
    printf("%d\n",hari);}
getch();

return 0;
}
