#include <stdio.h>
#include <string.h>

int main(){
    typedef struct a{
        int nilai[10];
    } nil;
    nil ary[11];
    int hasil[10];
    int bagi[10];
    int jmlSms,mk,i,j;
    float rata,tempRata;
    tempRata=0;

    scanf("%d", &jmlSms);

    for(i=0;i<jmlSms;i++){
        scanf("%d ", &mk);
        tempRata=0;
            for(j=0;j<mk;j++){
                scanf("%d", &ary[i].nilai[j]);
            }
            bagi[i]=j;
    }
for(i=0;i<jmlSms;i++){

        tempRata=0;
            for(j=0;j<bagi[i];j++){

                tempRata=tempRata+ary[i].nilai[j];
                rata=tempRata /(bagi[i]);
            }
          printf("%0.2f\n", rata);

    }
    return 0;
}
