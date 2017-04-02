#include <stdio.h>

int main(){
    char k[100];
    int kres=0, minor=0, jum=0;
    scanf("%[^\n]", &k);
    while(k[jum]){
        if(k[jum]==35){
            kres++;
        }
        if(k[jum]=='m'){
            minor++;
        }
        jum++;
    }

    printf("%d %d\n", kres, minor);
    return 0;
}
