#include <stdio.h>

int ada_empat(int n) {
    int i;
    while(n) {
        i = n;
        n = n % 10;
        if( n == 4) {
            return 1;
            break;
        }else{
            n = i / 10;
        }
    }
}

int ada_tigabelas(int n) {
    int i;
    while(n) {
        i = n;
        n = n % 100;
        if( n == 13 ) {
            return 1;
            break;
        }else{
            n = i /10;
        }
    }
}

int main() {
    int t, g, h, l;

    int i, j;

    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        scanf("%d %d %d", &g, &h, &l);

        int ket;
        ket = g;

        for(j = 1; j <= l; j++) {
            if(j == 1) {
                ket = g;
            }else{
                if( (ada_empat(j) == 1) || (ada_tigabelas(j) == 1) ) {

                }else{
                    ket = ket + h;
                }
            }
        }

        if ( (ada_empat(l) == 1) || (ada_tigabelas(l) == 1) ) {
            printf("angka mitos\n");
        }else{
            printf("%d\n", ket);
        }
    }

    return 0;
}
