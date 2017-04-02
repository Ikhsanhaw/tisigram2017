#include <stdio.h>
#include <process.h>

int N;
int n;
int M;
int peluang;
int i;
int A;

int main(void){
scanf("%d", &N);
if (N<1)N=1;
scanf("%d", &M);
if (M>60)M=60;
while(N>=M)
{
A = N-M;
n=0;
for(i=-1;i<N/2;i++){
   n = n+ N*(N-1);
   N--;
   N--;
                }
N=n;
n=0;
for(i=-1;i<M/2;i++){
   n = n+ M*(M-1);
   M--;
   M--;
                }
M=n;
n=0;
for(i=-1;i<A/2;i++){
   n = n+ A*(A-1);
   A--;
   A--;
}
A=n;
n=0;
peluang = N/(A*M);
goto hasil;
}
hasil:
printf("%d \n",peluang);


}


