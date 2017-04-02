#include <stdio.h>

int main(){
    char x;
    scanf("%c",&x);
    if ((int)x<=90 && (int)x>=65){
        x = x + 32;} 
    
    if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
              printf("True\n");}
    else{
         printf("False\n");}
    
    return 0;
}
