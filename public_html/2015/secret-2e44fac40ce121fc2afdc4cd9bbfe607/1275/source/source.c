#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char A[2000];
}Teks;

int main(){
int t,i;

scanf("%d",&t);
Teks teks[t];
int count[t];

for(i=0;i<t;i++){
    scanf("%s",teks[i].A);
}


int j;
for(i=0;i<t;i++){
    count[i]=0;
    for(j=strlen(teks[i].A)-1;j>=0;j--){
        if(teks[i].A[j]=='0'){
            count[i] = count[i]+1;
        }
    }
}

for(i=0;i<t;i++){
 printf("%d\n",count[i]);
}
return 0;
}

