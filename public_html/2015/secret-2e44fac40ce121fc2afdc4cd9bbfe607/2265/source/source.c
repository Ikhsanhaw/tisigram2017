#include <stdio.h>

int main () {
    int i,j, k, temp=0, count=0;
    scanf("%d %d %d", &i, &j, &k);
    if (i != 0 || j != 0) {
        while (temp >= 0) {
            count++;
            if (count % 3 != 0) {
                temp += i;}
            else {
                temp += i*3;
            }
            if (temp >= k) {
                break;
            }
            if (count % 5 !=0) {
                temp -= j;
            }
            else {
                temp -= j*2;
            }
        } }
    if(temp >= 0) {
        if (i == 0 && j == 0 && k > 0) {
            printf("mustahil\n");
        }
        else {
        printf("%d\n",count); }
    }
    else {
        printf("mustahil\n");
    }


    return 0;}


