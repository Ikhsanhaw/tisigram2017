#include <stdio.h>
#include <string.h>

int main() {
  char kalimat[35];
  char tukar[2];
  gets(kalimat);
  int max;
  max = strlen(kalimat);
  gets(tukar);
  int i;
  for (i=0;i<max;i++) {
    if (kalimat[i]==tukar[0]) {
      kalimat[i]=tukar[1];
    }
    else if (kalimat[i]==tukar[1]) {
      kalimat[i]=tukar[0];
    }
  }
  puts(kalimat);
  return 0;
}
