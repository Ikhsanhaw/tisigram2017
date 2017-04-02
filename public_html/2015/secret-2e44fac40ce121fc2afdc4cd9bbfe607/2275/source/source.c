#include<stdio.h>

int main()
{
int i,N,c;
scanf("%d",&N);
char asci[N];
    for(i=0;i<N;i++){
    scanf("%d", &c);
    asci[i] = c;
                }
                
   for(i=0;i<N;i++){
    printf("%c", asci[i]);
                }             
   printf("\n");
    return 0;
}

