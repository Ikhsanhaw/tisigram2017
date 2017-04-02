#include <stdio.h>

int main(){
    int a, b, fak_a, fak_b;
    scanf("%d %d", &a, &b);
    fak_a = faktorial(a,b);
    fak_b = faktorial(b,1);
    int com = fak_a/fak_b;
    printf("%d\n", com);
    
    //getch();
    return 0;
}
int faktorial(int a, int b){
    int jml = 1;
    while(a > b){ jml = jml*a; a--;}
    return jml;
}
