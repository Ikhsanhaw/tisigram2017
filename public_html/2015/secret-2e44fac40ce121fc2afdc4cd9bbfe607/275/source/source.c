#include <stdio.h>

int main(){
    int n,a,b,i;
    scanf("%d",&n);
    a=0;
    
    for(i=0;i<n;i++){
        scanf("%d",&b);
        if (b>a){
            a=b;}
    }
    printf("%d\n",a);
    getch();
    return 0;
}
