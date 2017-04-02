#include <stdio.h>

int main(){
    char k[100];
    int kres, minor, jum=0;
    scanf("%[^\n]", &k);

    kres=0, minor=0;
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
