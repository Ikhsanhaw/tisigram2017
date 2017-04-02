#include <stdio.h>
int main() {
    int T,N,i;
    float jumlah;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d",&N);
        float nilai[N];
        jumlah = 0;
        for(i = 0 ; i < N ; i++ )
        {
            scanf("%f", &nilai[i]);
            jumlah += nilai[i];
        }
        printf("%.2f\n", jumlah/N);


    }
    return 0;
}
