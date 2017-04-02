#include <stdio.h>
#include <string.h>

int main() {
  char kalimat[15];
  gets(kalimat);
  int i;
  for(i=strlen(kalimat)-1;i>=0;i--) {
    printf("%c",kalimat[i]);
  }
  printf("\n");

  return 0;
}
