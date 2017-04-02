#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
 int T,A,B,i,f;

 scanf("%d", &T);
 scanf("%d %d", &A,&B);
 f = (A-B)/T;
 for(i=0;i<T;i++){
    printf("%d - %d\n",B,B+f);
    B = B+f+1;
 }

return 0;
}
