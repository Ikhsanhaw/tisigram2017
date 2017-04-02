#include <stdio.h>

int main(){
    int n, m, ekor, kaki, A, B;
    scanf("%d %d", &n, &m);
    scanf("%d %d", &ekor, &kaki);
    
    B = (kaki - n * ekor)/(m - n);
    A = ekor - B;
    
    if(n * A + m * B == kaki && A > 0 && B > 0) printf("%d %d\n", A, B);
    else printf("mustahil\n");
    
    
    //getch();
    return 0;
}
