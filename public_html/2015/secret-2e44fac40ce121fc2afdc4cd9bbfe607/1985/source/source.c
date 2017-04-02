#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int i;
    char n[100];
    fflush(stdin);
    gets(n);
    //scanf("%s",&n);
    int nilai=strlen(n);
    for(i=0;i<nilai;i++){
       if(n[i]=='a'){
            printf("%cpa",n[i]);
       }
       else if(n[i]=='i'){
            printf("%cpi",n[i]);
       }
       else if(n[i]=='u'){
            printf("%cpu",n[i]);
       }
       else if(n[i]=='e'){
            printf("%cpe",n[i]);
       }
       else if(n[i]=='o'){
            printf("%cpo",n[i]);
       }else{
             printf("%c",n[i]);
       }             
    }
    printf("\n");
    return 0;                                  
}    
