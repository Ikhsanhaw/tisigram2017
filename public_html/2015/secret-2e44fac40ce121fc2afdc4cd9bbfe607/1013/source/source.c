#include <stdio.h>


int x,y,z;

int hari(int bln, int thn) {
    switch (bln) {
        case 1 : return 31;
        case 2 : if (thn % 4 == 0) return 29; else return 28;
        case 3 : return 31;
        case 4 : return 30;
        case 5 : return 31;
        case 6 : return 30;
        case 7 : return 31;
        case 8 : return 31;
        case 9 : return 30;
        case 10 : return 31;
        case 11 : return 30;
        case 12 : return 31;
    }
}

int min(int a, int b) {
    if (a > b)
        return b;
    else
        return a;
}

int sama(int a, int b, int c) {
    if ((a == b) && (a == c) && (b == c)) {
        return a;
    } else {
        int kecil = min(a, min(b, c));
        if (a == kecil) {
            return sama(a+x, b, c);
        } else if (b == kecil) {
            return sama(a, b+y, c);
        } else {
            return sama(a, b, c+z);
        }
    }
}

int main() {
    int tgl, bln, thn;
    char c;
    scanf("%d%c%d%c%d", &tgl, &c, &bln, &c, &thn);
    scanf("%d %d %d", &x, &y, &z);
    int uhuy = sama(x,y,z);
    tgl += uhuy;
    if (tgl > hari(bln, thn)) {
        tgl -= hari(bln, thn);
        bln++;
        if (bln > 12) {
            bln = 1;
            thn++;
        }
    }
    if (tgl > hari(bln, thn)) {
        tgl -= hari(bln, thn);
        bln++;
        if (bln > 12) {
            bln = 1;
            thn++;
        }
    }
    if (tgl > hari(bln, thn)) {
        tgl -= hari(bln, thn);
        bln++;
        if (bln > 12) {
            bln = 1;
            thn++;
        }
    }
    printf("%d/%d/%d\n", tgl, bln, thn);
}
