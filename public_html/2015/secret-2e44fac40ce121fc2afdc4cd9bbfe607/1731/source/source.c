#include <stdio.h>

int main(){
    int n,i,;
    scanf("%d",&n);
    int A[n][6];
    for (i=0;i<n;i++){
        scanf("%d %d %d %d %d %d",&A[i][0],&A[i][1],&A[i][2],&A[i][3],&A[i][4],&A[i][5]);
        }
    for (i=0;i<n;i++){
        printf("%d\n",A[i][0]+A[i][1]+A[i][2]+A[i][3]+A[i][4]+A[i][5]);
        }
        return 0;
        }
