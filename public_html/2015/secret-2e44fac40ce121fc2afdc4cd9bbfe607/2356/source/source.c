#include <stdio.h>

int main(){
    int a, b, c, d;
    long int fak_a = 1, fak_b = 1;
    scanf("%d %d", &a, &b);
    if (b > a-b) {c = b; d = a-b;} else {c = a-b; d = b;}
    while(a > c){ fak_a = fak_a*a; a--;}
    while(d > 1){ fak_b = fak_b*c; c--;}
    long int com = fak_a/fak_b;
    printf("%ld\n", com);
    
    //getch();
    return 0;
}
