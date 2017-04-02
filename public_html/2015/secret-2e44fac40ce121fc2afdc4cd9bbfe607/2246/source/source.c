#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

char L[7];

int main(){
    int i,j,k,m,l,T,G,H;

    scanf("%d",&T);
    int hasil[T];
    for(i=0;i<T;i++){
        hasil[i]=0;
        l=0;
        scanf("%d %d\n",&G,&H);
        gets(L);
        l=ubahstring();
        hasil[i]=cekmitos();
        if (hasil[i]!=-1){
            hasil[i]=result(G,l,H);
        }
    }
    for(i=0;i<T;i++){
        if(hasil[i]==-1){
           printf("angka mitos\n");
        }
        else{
            printf("%d\n",hasil[i]);
        }
    }

return 0;
}

int cekmitos(){
    int a=0,j;
    for(j=0;j<7;j++){
       if(L[j]=='4'){
          a=-1;
          j=7;
       }
       else if(L[j]=='1'&&L[j+1]=='3'){
          a=-1;
          j=7;
       }
    }
    return a;
}

int ubahstring(){
    int a,m;
    for(m=0;m<strlen(L);m++){
          a=a+(((int)L[m]-48)*(pow(10,(strlen(L)-m-1))));
    }
    return a;
}

int result(int b,int c,int d){
    int a=0,k;
    for(k=0;k<c;k++){
        if(k==0){
            a=a+b;
        }
        if((k+1)%4==0||(k+1)%13==0){
            a=a+0;
        }
        else{
            a=a+d;
        }
    }
    return a;
}

