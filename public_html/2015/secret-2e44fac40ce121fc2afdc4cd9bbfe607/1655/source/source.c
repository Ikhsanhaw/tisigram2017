#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    n=pow(n,n);
    n=n % 2;
    printf("%d\n", n);
    return 0;
}
