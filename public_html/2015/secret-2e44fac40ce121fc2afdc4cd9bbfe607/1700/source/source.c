#include <stdio.h>
int main(){
    int A,B,H;
    int hasil;
    scanf("%d %d %d", &A ,&B,&H);
    hasil=(H-A)+B-1;
    if (hasil>H){
       printf("mustahil");
    }
    else{
    printf("%d", hasil);
    }
}
