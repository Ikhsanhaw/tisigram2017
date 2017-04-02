#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
char A[200],S[20];

gets(A);
gets(S);

int i,j,count=0;

for(i=0;i<strlen(A);i++){
    if(S[0]==A[i]){
    int status = 1;
    for(j=0;j<strlen(S);j++){
        if(S[j]!=A[j+i]){
            status = 0;
            j = strlen(S);
        }
    }
    if(status==1){
        count++;
    }
}
}

printf("%d\n",count);
return 0;
}
