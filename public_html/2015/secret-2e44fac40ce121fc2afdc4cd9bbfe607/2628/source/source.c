#include <stdio.h>

int main() {
  int x, y, i, z;
  scanf("%d %d", &x, &y);
  if (y%2==0) {
    z=1;
  }
  else {
    z=0;
  }
  for (i=1;i<=x;i++) {
    if (z) {
      if (i%2==0) {
        printf("%d\n",i);
        
      }
    }
    else {
      if(i%2!=0) {
        printf("%d\n", i);
      }
    }
  }
  return 0;
}
