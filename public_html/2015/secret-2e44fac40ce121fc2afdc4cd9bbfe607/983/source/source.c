#include <stdio.h>

int skor(char c) {
    switch (c) {
        case 'S' : return 6;
        case 'A' : return 5;
        case 'B' : return 4;
        case 'C' : return 3;
        case 'D' : return 2;
        case 'E' : return 1;
    }
}

int main() {
    int i;
    char x,y,z;
    int sum = 0;
    scanf("%c %c %c", &x, &y, &z);
    sum = sum + skor(x) + skor(y) + skor(z);
    switch (sum) {
        case 3 : printf("E\n"); break;
        case 4 : printf("E+\n"); break;
        case 5 : printf("D-\n"); break;
        case 6 : printf("D\n"); break;
        case 7 : printf("D+\n"); break;
        case 8 : printf("C-\n"); break;
        case 9 : printf("C\n"); break;
        case 10 : printf("C+\n"); break;
        case 11 : printf("B-\n"); break;
        case 12 : printf("B\n"); break;
        case 13 : printf("B+\n"); break;
        case 14 : printf("A-\n"); break;
        case 15 : printf("A\n"); break;
        case 16 : printf("A+\n"); break;
        case 17 : printf("S-\n"); break;
        case 18 : printf("S\n"); break;
    }
}
