#include<stdio.h>

int fak(int A)
{
    int i, count=1;
    for(i=1; i<=A; i++)
    {
         count=count*i;
    }
    
   return count; 
}
    

int main ()
{
    int N, K, komb,sel;
    
    scanf("%d %d", &N, &K);
    sel=N-K;
    
    komb=fak(N)/(fak(K)*fak(sel));
    printf("%d\n", komb);
    
return 0;
}
