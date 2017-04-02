#include <stdio.h>

int Cek(char X)
{
    int num=1;
    if (X=='S'||X=='s') {
        num=16;
    } else if (X=='A'||X=='a') {
        num=13;
    } else if (X=='B'||X=='b') {
        num=10;
    } else if (X=='C'||X=='c') {
        num=7;
    } else if (X=='D'||X=='d') {
        num=4;
    } else {
        num=1;
    }
    return num;
}

void Tampil(int num)
{
    if (num==16) {
        printf("S\n");
    } else if (num==15) {
        printf("S-\n");
    } else if (num==14) {
        printf("A+\n");
    } else if (num==13) {
        printf("A\n");
    } else if (num==12) {
        printf("A-\n");
    } else if (num==11) {
        printf("B+\n");
    } else if (num==10) {
        printf("B\n");
    } else if (num==9) {
        printf("B-\n");
    } else if (num==8) {
        printf("C+\n");
    } else if (num==7) {
        printf("C\n");
    } else if (num==6) {
        printf("C-\n");
    } else if (num==5) {
        printf("D+\n");
    } else if (num==4) {
        printf("D\n");
    } else if (num==3) {
        printf("D-\n");
    } else if (num==2) {
        printf("E+\n");
    } else {
        printf("E\n");
    }
}

int main()
{
    
    char L,C,K,TEMP;
    int l,c,k,nilai;
    L=getchar();
    TEMP=getchar();
    C=getchar();
    TEMP=getchar();
    K=getchar();
    l=Cek(L);
    c=Cek(C);
    k=Cek(K);
    nilai=(l+c+k)/3;
    Tampil(nilai);
    
    return 0;
}