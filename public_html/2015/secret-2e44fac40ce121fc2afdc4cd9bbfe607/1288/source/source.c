#include<stdio.h>
#include<stdlib.h>


int main(){
int N,hasil,sisa,orang;

scanf("%d",&N);
scanf("%d",&orang);

if(orang!=0){
hasil = (int) N/orang;
sisa = N%orang;
printf("%d %d\n",hasil,sisa);
}
else{
    printf("%d %d\n",0,N);
}
return 0;
}

