#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int nilai[n][n];
    int i=0;
    int j=0;
    
    for (i=0;i<n;i++){
        for (j=0;j<=i;j++){
            if(j==0 || j==i){
            nilai[i][j]=1;
            }
            else{
            nilai[i][j]=nilai[i-1][j]+nilai[i-1][j-1];
            }     
        }
    }    
    for (i=0;i<n;i++){
        for (j=0;j<=i;j++){
            printf("%d ",nilai[i][j]);
        }
        printf("\n");
    }
  return 0;               
}    
