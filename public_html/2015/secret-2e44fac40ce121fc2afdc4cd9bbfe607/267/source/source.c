#include <stdio.h>
#include <string.h>

int main(){
    char x[10];
    int a;
    gets(x);
    
    for(a=strlen(x)-1;a>-1;a--){
       printf("%c",x[a]);
    }
    printf("\n");
    return 0;
}
