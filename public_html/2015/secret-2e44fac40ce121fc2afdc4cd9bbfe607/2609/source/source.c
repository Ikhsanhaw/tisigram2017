#include <stdio.h>

int main() {
  int a, b, min, i;
  scanf("%d", &a);
  for (i=0;i<a;i++) {
    scanf("%d", &b);
    if (i==0) {
      min = b;
    }
    else if (b<min) {
      min = b;
    }
  }
  printf("%d\n",min);
  return 0;
}
