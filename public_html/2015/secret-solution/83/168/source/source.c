#include <stdio.h>
#include <string.h>
int main(){
  int n,i;
  scanf("%d",&n);
  int A[n];
  for(i=0;i<n;i++){
    scanf("%d ",A[i]);
  }
  for(i=0;i<n;i++){
    printf("%c",A[i]);
  }
  printf("\n");
  return 0;
}
