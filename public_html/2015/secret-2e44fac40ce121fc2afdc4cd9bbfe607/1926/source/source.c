#include <stdio.h>

main()
{
    int M , N , B;

    do {

        printf("\nBanyak soal: ");
        scanf("%d" , &M);

        printf("\nSoal keluar: ");
        scanf("%d" , &N);

        if (M<=60) printf("\n\nKombinasi %d\n\n", (M*(M-1))/N);

       } 
       while (M < 999);
}

