#include <stdio.h>

int main() {
  int awal, lahir, mati;
  scanf("%d %d %d", &awal, &lahir, &mati);
  printf("%d\n",awal);
  if (awal==0 && lahir!=0) {
    printf("mustahil!\n");
  }
  else {
    printf("%d\n",awal+lahir);
  }
  if (mati>awal) {
    printf("mustahil!\n");
  }
  else {
    printf("%d\n",awal-mati);
  }
  return 0;
}
