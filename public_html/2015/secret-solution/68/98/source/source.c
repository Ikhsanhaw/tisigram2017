#include <stdio.h>

int main(){

    int kardus, gelas, gelasBaru, tempBonusKardus, tempBonusGelas, jumlah;

    scanf("%d",&kardus);

    gelas = kardus*6;
    tempBonusKardus = gelas/20;
    kardus = kardus + tempBonusKardus;
    gelasBaru = tempBonusKardus*6;
    tempBonusGelas = kardus;
    jumlah = gelas+tempBonusGelas+gelasBaru;

    printf("%d\n",jumlah);

    return 0;
}
