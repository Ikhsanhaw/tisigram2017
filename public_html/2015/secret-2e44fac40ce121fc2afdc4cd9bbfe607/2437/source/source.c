#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int i,j,T;
    char a[1000];
    char b[20]="18446744073709551615";
    scanf("%d\n",&T);
    int index[T];
    for(i=0;i<T;i++){
        gets(a);
        if (strlen(a)>20){
            index[i]=0;
        }
        else if(strlen(a)==20){
            if(strcmp(a,b)==0){
               index[i]=1;}
            else{
                for(j=0;j<20;j++){
                    if(j!=0){
                        if ((int)a[j]-48>(int)b[j]-48 && (int)a[j-1]-48==(int)b[j-1]-48){
                            index[i]=0;
                            j=21;
                        }
                        else{
                            index[i]=1;
                        }
                    }
                    else{
                        if ((int)a[j]-48>(int)b[j]-48){
                            index[i]=0;
                            j=21;
                        }
                        else{
                            index[i]=1;
                        }
                    }
                }
            }
        }
        else if(strlen(a)<20){
            index[i]=1;
        }

    }
    for(i=0;i<T;i++){
        if (index[i]==1){
            printf("true\n");
        }
        else if (index[i]==0){
            printf("false\n");
        }
    }

return 0;
}


