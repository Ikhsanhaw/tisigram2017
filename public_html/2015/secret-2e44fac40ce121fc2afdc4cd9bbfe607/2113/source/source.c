#include <stdio.h>
#include<math.h>
int main(){
    int T,i, max;
    
    scanf("%d", &T);
    unsigned int N[T];
    max = pow(2,64);
  //  printf("%d\n", max);
    for (i = 0; i < T; i++){
        scanf("%d", &N[i]);
    }
    for (i = 0; i < T; i++){
        if (N[i] < max && N[i] >=0){
           printf("true\n");
            }
        else{
             printf("false\n");
        }
    }
    
    //getch();
    return 0;    
}
