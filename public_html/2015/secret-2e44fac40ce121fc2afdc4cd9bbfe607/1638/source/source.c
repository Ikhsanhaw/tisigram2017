#include <stdio.h>

int main(){
    int n;
    scanf ("%d", &n);
    
    int i;
    if((n>=1) && (n<=100))
    { 
      for (i=1; i<=n; i++)
      {
        printf("Halo, Indah! \n");
      }
    }
    getch();
    return 0;
}
