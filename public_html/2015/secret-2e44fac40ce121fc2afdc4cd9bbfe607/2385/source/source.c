#include <stdio.h>
#include <stdbool.h>

int main(){
    int a,b,c,d=0,i=1;
    bool sampai = false;
    scanf("%d %d %d",&a,&b,&c);
    while (sampai == false){
          if (a <= 0 || b < 0){
             printf("mustahil\n");
             sampai = true;
          } else if (a==c){
                 printf("%d\n",i);
                 sampai = true;
          } else if (a>=b && c>0){
             if (i%3 == 0 && i%5 == 0){
             d = d + (a*3);
             if (d >= c){
                printf("%d\n",i);
                sampai = true;
                }
             d = d - (b*2);
             } else if (i%3==0){
             d = d + (a*3);
             if (d >= c){
                printf("%d\n",i);
                sampai = true;
                }
             d = d - b;
             } else if (i%5==0) {
                    d = d + a;
             if (d >= c){
                printf("%d\n",i);
                sampai = true;
                }
             d = d - (b*2);
             } else {
             d = d + a;
             if (d >= c){
                printf("%d\n",i);
                sampai = true;
                }
             d = d - b;
             }
          i++;
          } else {
                 printf("mustahil\n");
                 sampai = true;
          }
          }
          return 0;
}
