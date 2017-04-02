#include <stdio.h>
#include<string.h>
int main(){
    char x[1010];
    int t,y;
    scanf("%d",&t);
    while(t--){
               scanf("%s",&x);
               if(strlen(x)>19) printf("false\n");
               else printf("true\n");
    }
return 0;
}
