#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int angka;
    
    scanf("%d",&angka);
    if(angka%1==0 && angka%2==0 && angka%3==0)
    {printf("Angka Sempurna");}
    else
    {printf("Bukan Angka Sempurna");}
    
    return 0;
}
