#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    n %= 7;
    switch (n) {
        case 0 :
            printf("Rabu\n"); break;
        case 1 :
            printf("Kamis\n"); break;
        case 2 :
            printf("Jumat\n"); break;
        case 3 :
            printf("Sabtu\n"); break;
        case 4 :
            printf("Minggu\n"); break;
        case 5 :
            printf("Senin\n"); break;
        case 6 :
            printf("Selasa\n"); break;
    }
}
