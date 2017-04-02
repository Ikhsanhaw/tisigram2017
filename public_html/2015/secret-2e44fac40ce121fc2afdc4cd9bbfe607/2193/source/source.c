#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int i,j,k,m,l,T,G,H;
    char L[7];
    scanf("%d",&T);
    int hasil[T];
    for(i=0;i<T;i++){
        hasil[i]=0;
        l=0;
        scanf("%d %d\n",&G,&H);
        gets(L);
        for(j=0;j<7;j++){
            if(L[j]=='4'){
                hasil[i]=-1;
                j=7;
            }
            else if(L[j]=='1'&&L[j+1]=='3'){
                hasil[i]=-1;
                j=7;
            }
        }
        if (hasil[i]!=-1){
            for(m=0;m<strlen(L);m++){
                l=l+(((int)L[m]-48)*(pow(10,(strlen(L)-m-1))));
            }
            hasil[i]=hasil[i]+G;
            for(k=1;k<l;k++){
                if((k+1)%4==0){
                    hasil[i]=hasil[i]+0;
                }
                else if((k+1)%13==0){
                    hasil[i]=hasil[i]+0;
                }
                else{
                    hasil[i]=hasil[i]+H;
                }
            }
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
