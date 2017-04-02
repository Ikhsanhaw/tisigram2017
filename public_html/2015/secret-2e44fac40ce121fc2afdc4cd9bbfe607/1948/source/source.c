#include <stdio.h>
int main(){
    int A,B,H;
    int hasil;
    scanf("%d %d %d", &A ,&B,&H);
    hasil=(H-A)+B-1;
    if (H<hasil){
       printf("mustahil\n");
    }
    else{
    printf("%d\n", hasil);
    }
    return 0;
}
