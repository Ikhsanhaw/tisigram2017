#include<stdio.h>
//#include<conio.h>

int main()
{
    int T,i;
    scanf("%d", &T);
    int A[T],B[T],C[T],D[T],E[T],F[T], H[T];
    for(i=0;i<T;i++)
    {
      scanf("%d %d %d %d %d %d", &A, &B, &C, &D, &E, &F);}
    for(i=0;i<T;i++)
    {  H[i] = A[i]+B[i]+C[i]+D[i]+E[i]+F[i]; 
       printf("%d\n", H[i]);}
    
   // getch();
    return 0;}
