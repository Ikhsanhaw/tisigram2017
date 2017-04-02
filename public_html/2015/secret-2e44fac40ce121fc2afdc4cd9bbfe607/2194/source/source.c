#include <stdio.h>


int main(){
    
    //kamus
    int n,i,j = 0;
    int a[6];
    scanf("%d",&n);
    int b[n];
    for (i = 1; i <= n;i++){
        scanf("%d",&a[0]);
        scanf("%d",&a[1]);
        scanf("%d",&a[2]);
        scanf("%d",&a[3]);
        scanf("%d",&a[4]);
        scanf("%d",&a[5]);
        b[i] = a[0] + a[1]+ a[2]+ a[3]+ a[4]+ a[5]; 
    }
    for (i = 1; i <= n;i++){
        printf("%d\n",b[i]);
    }


    return 0;
    
    }
