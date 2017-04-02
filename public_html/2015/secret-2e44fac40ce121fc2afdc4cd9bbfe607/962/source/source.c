#include <stdio.h>

int main()
{
    int X,Y,R,A,B;
    scanf("%d %d",&X,&Y);
    scanf("%d",&R);
    scanf("%d %d",&A,&B);
    if (X==A && Y==B) {
        printf("tepat pada titik tengah arena pertandingan\n");
    } else if ((((A-X)*(A-X))+((B-Y)*(B-Y)))<(R*R)) {
        printf("di dalam arena pertandingan\n");
    } else if ((((A-X)*(A-X))+((B-Y)*(B-Y)))>(R*R)) {
        printf("di luar arena pertandingan\n");
    } else if ((((A-X)*(A-X))+((B-Y)*(B-Y)))==(R*R)) {
        printf("tepat pada batas arena pertandingan\n");
    }
    return 0;
}
