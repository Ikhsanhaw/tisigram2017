#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char A[2000];
}Teks;

int main(){
int N,hasil,sisa,orang;

scanf("%d",&N);
scanf("%d",&orang);

hasil = N/orang;
sisa = N-(hasil*orang);
printf("%d %d\n",hasil,sisa);
return 0;
}

