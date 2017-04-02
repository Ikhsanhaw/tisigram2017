#include <stdio.h>

int gcm(int x, int y) {
    if (y == 0) {
        return x;
    }
    return gcm(y, x%y); }

int main () {
    int x,y, a, b;
    int c1, c2, temp, c3, t1, t2 , t3;
    scanf("%d %d", &x, &y);
    scanf("%d %d", &a, &b);
    temp = gcm(x,y);
    if (temp == 1) {
        c1 = x;
        c2 = x;
        c3 = a * x;

        t1 = x - c1;
        t2 = y - c2;
        t3 = b - c3;
        if (t1 == 0) {
            temp = t3 / t2;
            if (a-temp <= 0 || temp-t3 == 0 || t3 <= 0) {
                printf("mustahil\n");
            }
            else {
                printf("%d %d\n", a-temp, temp);
            } }
        else {
            temp = t3 / t1;
            if (a-temp <= 0 || temp-t1 == 0 || t3 <= 0) {
                printf("mustahil\n");
            }
            else {

                printf("%d %d\n", temp, a-temp);
        }
    } }
    else {
        c1 =  temp;
        c2 =  temp;
        c3 = a * temp;

        t1 = x - c1;
        t2 = y - c2;
        t3 = b - c3;
        if (t1 == 0) {
                temp = t3 / t2;
            if (a-temp <= 0 || temp-t3 == 0 || t3 <= 0) {
                printf("mustahil\n");
            }
            else {


                printf("%d %d\n", a-temp, temp);
            }
        }
        else {
            temp = t3 / t1;
            if (a-temp <= 0 || temp-t1 == 0 || t3 <= 0) {
                printf("mustahil\n");
            }
            else {
                printf("%d %d\n", temp, a-temp);
            }
        }
    }
    return 0;}

