#include <stdio.h>
int main() {
    float A,B,X,Y,hasil;
    scanf("%f %f",&A,&B);
    scanf("%f %f",&X,&Y);
    hasil = (Y/A+Y/B)/2;
    if(hasil != X || hasil <= 0 || fmod(hasil,1) != 0)
    {
        printf("mustahil\n");
    }
    else if((Y/A + Y/B)/2 == X)
    {
        printf("%.0f %.0f\n",Y/(2*A),Y/(2*B));
    }

    return 0;
}
