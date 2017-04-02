#include <stdio.h>

int main() {
  int p, k, n;
  scanf("%d %d %d", &p, &k, &n);
  while (n!=0) {
    p++;
    if (p>k) {
      p=0;
    }
    n--;
  }
  printf("%d\n", p);

  return 0;
}
