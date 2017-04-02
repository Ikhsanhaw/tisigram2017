#include <stdio.h>
#include <math.h>

int main() {
  float X,H;
  int hasil;
  scanf("%f",&X); scanf("%f",&H);
  if(X==0)
    printf("mustahil\n");
  else {
    hasil =(int) ceil(H/X);
    printf("%d\n", hasil);
  }
  return 0;
}
