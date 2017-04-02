#include <stdio.h>

int main() {
    int a, b, h;

    scanf("%d %d %d", &a, &b, &h);

    int hari = 1;
    int tempuh = 0;

    while(1) {
        if (tempuh < 0) {
            printf("mustahil\n");
            break;
        }

        if(tempuh < h) {
            if ( (hari % 3) == 0 ) {
                tempuh = tempuh + (a * 3);
                if (tempuh >= h) {
                    printf("%d\n", hari);
                    break;
                }
                tempuh = tempuh - b;
            }else if( (hari % 5) == 0) {
                tempuh = tempuh + a;
                if (tempuh >= h) {
                    printf("%d\n", hari);
                    break;
                }
                tempuh = tempuh -(2 * b);
            }else{
                tempuh = tempuh + a;
                if (tempuh >= h) {
                    printf("%d\n", hari);
                    break;
                }
                tempuh = tempuh - b;
            }
        }else{
            printf("%d", hari);
            break;
        }
        hari++;
    }

    return  0;
}
