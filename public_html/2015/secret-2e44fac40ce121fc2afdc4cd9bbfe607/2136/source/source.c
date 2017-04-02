#include <stdio.h>

int main()
{
    int i=0, j=1, jumlah, max, min, interval;
    scanf("%d",&jumlah);
    scanf("%d %d", &max, &min);
    interval=(max-min)/jumlah;
    while (i<jumlah)
    {
          printf("%d - %d\n", ((min-1)+j)+(interval*i), (min-1+j)+(interval*(i+1)));
          i++;
          j++;
    }
    return 0;
}
