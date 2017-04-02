#include <stdio.h>
int i,j;
long int max;
long int A[100];
int main()
{
    scanf("%d",&i);
    for (j=0; j<i; j++) {
        scanf("%ld",&A[j]);
    }
    max=A[0];
    for (int k=0; k<i-1; k++) {
        if (max<A[k+1]) {
            max=A[k+1];
        }
    }
    printf("%ld\n",max);
    return 0;
}