#include<stdio.h>

int main(){
    int A;
    int B;
    int H;
    int i;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&H);
    while(A<=500){
       i=H-A;
       prinf("%d",i);
       if(B<=500){
          i=H-B;
          printf("%d",i);
       else
           printf("mustahil\n");
           }
       }
       return 0;
}
