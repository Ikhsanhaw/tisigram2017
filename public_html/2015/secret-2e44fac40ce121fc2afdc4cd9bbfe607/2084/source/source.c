#include <stdio.h>
#include<math.h>
int main(){
    int T,i;
    unsigned int N;
    scanf("%d", &N);
    T = pow(2,64);
    
   if (N < T && N >=0){
     printf("true\n");
   }
   else{
        printf("false\n");
   }
    
   // getch();
    return 0;    
}
