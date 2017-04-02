#include <stdio.h>

int main(){
    int j_kaki1, j_kaki2;
    int total, totalkaki;
    int j_1, j_2;
    scanf("%d %d", &j_kaki1, &j_kaki2);
    scanf("%d %d", &total, &totalkaki);
    j_1 = ((totalkaki)/2)/j_kaki1;
    j_2 = ((totalkaki)/2)/j_kaki2;
  //  printf("%d\n", j_1);
    if (j_1 + j_2 != total){
       printf("mustahil\n");
    }
    else{
         printf("%d %d\n", j_1, j_2);
    }
   // getch();
   return 0;
}
