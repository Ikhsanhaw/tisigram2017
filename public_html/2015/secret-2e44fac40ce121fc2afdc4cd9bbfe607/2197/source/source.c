#include <stdio.h>

int main(){
    int n, m, ekor, kaki, A, B;
    scanf("%d %d", &n, &m);
    scanf("%d %d", &ekor, &kaki);
    
    if(n == 0 || m == 0 || ekor == 0 || kaki == 0  ) {printf("0 0\n");}
    else{
    
    if(m - n != 0){
    B = (kaki - n * ekor)/(m - n);
    A = ekor - B;
    }else A = 0;
    
    if(n * A + m * B == kaki && A > 0 && B > 0) {printf("%d %d\n", A, B);}
    else {printf("mustahil\n");}
    }
    
    //getch();
    return 0;
}
