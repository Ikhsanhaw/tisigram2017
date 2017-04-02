#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
char A[20],CC;
char teks[2000];
int i = 0,j = 0,status=1, count = 0;

gets(teks);

scanf("%s",&A);

for(i=0;i<strlen(teks);i++){
    j = 0;
    if(A[j]==teks[i]){
    status = 0;
    for(j=0;j<strlen(A);j++){
        if(A[j]!=teks[i+j]){
            status = 1;
            j = strlen(A)+1;
        }
    }
    if(status==0){
        count = count+1;
    }
    }
}

printf("%d\n",count);
return 0;
}
