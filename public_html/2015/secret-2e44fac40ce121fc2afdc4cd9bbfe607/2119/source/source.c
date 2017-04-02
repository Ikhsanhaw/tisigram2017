#include <stdio.h>
#include <math.h>

//Aku jatuh cinta dengan faktorial

int faktorial(int cari) {
    int i,temp,ulang;
    temp=1;
    while (cari > 0) {
          temp=temp*cari;
          cari=cari-1;
    }  
    return temp;
}

int main() {
    int m,n,o,l,k;
    scanf("%d",&m);
    scanf("%d",&n);
    l=m-n;
    o=faktorial(l);
    m=faktorial(m);
    n=faktorial(n);
    k=m/(n*o);
    printf("%d\n",k);
    return 0;
}
