#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

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
    
    printf("%d\n", fak(N)/(fak(M)*fak(N-M)));

    return 0;
}
