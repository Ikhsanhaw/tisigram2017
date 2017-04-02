#include<stdio.h>
#include<string.h>

int main(){
    char digit[10001];
    int hasil=0;
    
    scanf("%[^\n]c",&digit);
    
    int i;
    for(i=0;i<strlen(digit);i++){
      hasil += (int)digit[i]-48;
    }
    
    printf("%d\n",hasil);
    
    return 0;
}
