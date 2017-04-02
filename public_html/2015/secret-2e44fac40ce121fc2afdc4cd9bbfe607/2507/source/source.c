#include <stdio.h>
int main() {
    int T,N,jumlah,i;
    int angka[6];
    scanf("%d", &T);
    while(T--)
    {
        jumlah = 0;
        for(i = 0 ; i < 6 ; i++ )
        {
            scanf("%d", &angka[i]);
            jumlah += angka[i];
        }
        printf("%d\n", jumlah);




    }

    return 0;
}
