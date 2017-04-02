#include <stdio.h>

int main() {
  int a, b, i, j, sum=0;
  scanf("%d", &a);
  for (i=0;i<a;i++) {
    for (j=0;j<a;j++) {
      scanf("%d", &b);
      sum+=b;
    }
  }
  printf("%d\n",sum);

  return 0;
}
