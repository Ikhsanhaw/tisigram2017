#include<stdio.h>
#include<string.h>

int main(){
    char kalimat[101];

    scanf("%[^\n]c",&kalimat);
    
    int i;
    for(i=0;i<strlen(kalimat);i++){
      printf("%c",kalimat[i]);
      switch(kalimat[i]){
        case 'a' : printf("pa"); break;
        case 'i' : printf("pi"); break;
        case 'u' : printf("pu"); break;
        case 'e' : printf("pe"); break;
        case 'o' : printf("po"); break;
      }
    }  
    
    printf("\n");
    return 0;
}
