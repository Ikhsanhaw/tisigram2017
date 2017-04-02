#include <stdio.h>

int main(){
    typedef struct a{
        int nilai[8];
    } nil;
    nil ary[10];
    int jmlSms,mk,i,j;
    float rata,tempRata;
    tempRata=0;

    scanf("%d", &jmlSms);

    for(i=0;i<jmlSms;i++){
        scanf("%d ", &mk);
            for(j=0;j<mk;j++){
                scanf("%d", &ary[i].nilai[j]);
            }
    }
    for(i=0;i<jmlSms;i++){
            tempRata=0;
            for(j=0;j<mk;j++){
               tempRata=tempRata+ary[i].nilai[j];
            }
            rata=tempRata /(j);
            printf("%0.2f\n", rata);
    }
}
