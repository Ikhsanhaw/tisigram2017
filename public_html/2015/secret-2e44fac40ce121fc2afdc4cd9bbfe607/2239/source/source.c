#include <stdio.h>

int main(){
    int n, m, ekor, kaki, A, B, x = 0;
    scanf("%d %d", &n, &m);
    scanf("%d %d", &ekor, &kaki);
    
    
    if(m - n != 0 && kaki - n * ekor != 0){
    B = (kaki - n * ekor)/(m - n);
    A = ekor - B;
    }else{x = 1; if( kaki == 0 && ekor == 0 && n == 0 && m == 0){printf("0 0\n");}else{A = 0; x = 0;}}
    
    if(x != 1 ){
    if(n * A + m * B == kaki && A > 0 && B > 0) {printf("%d %d\n", A, B);}
    else {printf("mustahil\n");}
    }
    
    //getch();
    return 0;
}
