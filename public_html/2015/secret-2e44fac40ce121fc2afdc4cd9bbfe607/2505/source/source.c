#include <stdio.h>
int main() {
    float A,B,X,Y;
    scanf("%f %f",&A,&B);
    scanf("%f %f",&X,&Y);
    if((Y/A + Y/B)/2 != X || (Y/A + Y/B)/2 <= 0)
    {
        printf("mustahil\n");
    }
    else if((Y/A + Y/B)/2 == X)
    {
        printf("%.0f %.0f\n",Y/(2*A),Y/(2*B));
    }

    return 0;
}
