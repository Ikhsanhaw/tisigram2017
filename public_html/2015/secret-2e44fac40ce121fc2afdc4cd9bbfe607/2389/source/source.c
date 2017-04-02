#include <stdio.h>


int main(){
    
    //kamus
    int n,i,j;
    float tmp=0,tmp2=0,t;
    scanf("%d",&n);
    float b[n];
    for (i = 0; i < n;i++){
        tmp2 = 0;
        scanf("%f",&t);
        for (j = 0; j < t;j++){
            scanf("%f",&tmp);
            tmp2 = tmp2 + tmp;    
        }
    b[i] = tmp2 / t;
    }
    for (i = 0; i < n;i++){
        printf("%f\n",b[i]);
    }    

    return 0;
    
    }
