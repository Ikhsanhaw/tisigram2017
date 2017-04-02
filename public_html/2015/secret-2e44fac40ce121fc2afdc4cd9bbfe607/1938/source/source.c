#include<stdio.h>

// prototype
char tukeur(int code);

int main(){
    int i,n, kode[1001];
    char temp[1001];
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d",&kode[i]);
    }
    for(i=0;i<n;i++){
      printf("%c",tukeur(kode[i]));   
    }
    
    printf("\n");
    
    return 0;
}

char tukeur(int code){     
     return code;
}

