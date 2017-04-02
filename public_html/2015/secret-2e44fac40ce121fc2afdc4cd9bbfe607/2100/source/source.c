#include <stdio.h>

int nilai[10][10];
int T;
int N[8];
int i,l=0;
int rata[10];
int jumlah[10]={0,0,0,0,0,0,0,0,0};

int main(void){


printf("masukan nilai T");
scanf("%d \n", &T);
 if (T>10)
    T= 10;
    else if(T<1)
    T= 1;

for(i=0;i<T;i++){
scanf("%d", &N[i]);
 if (N[i]>8)
    N[i]= 8;
    else if(N[i]<1)
    N[i]= 1;
for(l=0;l<N[i];l++){
    scanf("%d",&nilai[i][l]);
    if (nilai[i][l]>100)
    nilai[i][l] = 100;
    else if(nilai[T][l]<0)
    nilai [i][l]= 0;             
     jumlah[i]=jumlah[i]+nilai[i][l];
                 }          
      }
for(i=0;i<T;i++){
      rata[i]=jumlah[i]/N[i];
      }
for(i=0;i<T;i++){
      printf("%d",rata[i]);
      printf("/n");
      }
}
