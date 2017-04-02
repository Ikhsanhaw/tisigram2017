#include<stdio.h>
#include<stdlib.h>


int main(){
int N,hasil,sisa,orang;

scanf("%d",&N);
scanf("%d",&orang);

if(orang!=0){
hasil = (int) N/orang;
sisa = N%orang;
}
else{
    hasil=N;
    sisa=N;
}
printf("%d %d\n",hasil,sisa);

return 0;
}

