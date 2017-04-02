#include<stdio.h>
int main(){
    int i,b,c,tn=1,tr=1,tt=1;
    scanf("%d %d",&b,&c);
    for(i=0;i<b;i++){
        tn=tn*(b-i);
    }
    for(i=0;i<c;i++){
        tr=tr*(c-i);
    }
    for(i=0;i<(b-c);i++){
        tt=tt*((b-c)-i);
    }
    printf("%d\n",tn/(tr*tt));
    return 0;
}
