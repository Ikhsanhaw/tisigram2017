#include <stdio.h>

int main() {
    int n,j,k,T[10],temp;      
    scanf("%d",&n);
    for (j=0;j<n;j++) {
        T[j]=0;
        for (k=0;k<6;k++) {
            scanf ("%d",&temp);   
            T[j]=T[j]+temp;
        }
    }
    for (j=0;j<n;j++) {
        printf("%d\n",T[j]);
    }
    return 0;
}
