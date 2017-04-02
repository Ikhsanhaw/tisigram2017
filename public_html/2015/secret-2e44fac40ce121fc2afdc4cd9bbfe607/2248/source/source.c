#include <stdio.h>

int main(){
    int n, m, ekor, kaki, A, B;
    scanf("%d %d", &n, &m);
    scanf("%d %d", &ekor, &kaki);
    
    
    if(m - n != 0 && kaki - n * ekor != 0){
    B = (kaki - n * ekor)/(m - n);
    A = ekor - B;
    }else{A = 0;}

    if(n * A + m * B == kaki && A > 0 && B > 0) {printf("%d %d\n", A, B);}
    else {printf("mustahil\n");}
    
    
    //getch();
    return 0;
}
