#include <stdio.h>

int main(){
    int m,n,i,j;
    scanf("%d",&n);
    int A[n][8];
    float B[n];
    for (i=0;i<n;i++){
        scanf("%d",&m);
        B[i]=0;
        for (j=0;j<m;j++){
            scanf("%d",&A[i][j]);
            }
        for (j=0;j<m;j++){
            B[i] = B[i] + A[i][j];
            }
        B[i] = B[i]/m;        
        }
    for (i=0;i<n;i++){
        printf("%.2f\n",B[i]);
    }
    return 0;
}
        
