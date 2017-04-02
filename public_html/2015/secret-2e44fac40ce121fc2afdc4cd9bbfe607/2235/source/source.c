#include<stdio.h>

int fak(int n)
{
    if (n == 1 || n == 0){
          return 1;
    } else {
           return (n * fak(n-1));
    }
}

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    
    if(M != 0){
       printf("%d\n", fak(N)/(fak(M)*fak(N-M)));  
    } else {
       printf("0\n");
    }
    

    return 0;
}
