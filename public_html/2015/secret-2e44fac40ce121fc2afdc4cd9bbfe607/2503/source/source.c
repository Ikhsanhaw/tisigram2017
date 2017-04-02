#include <stdio.h>
int main() {
    int A,B,X,Y;
    scanf("%d %d",&A,&B);
    scanf("%d %d",&X,&Y);
    if((Y/A + Y/B)/2 == X)
    {
        printf("%d %d\n",Y/(2*A),Y/(2*B));
    }
    else
        printf("mustahil\n");

    return 0;
}
