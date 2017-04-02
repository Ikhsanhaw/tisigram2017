/*Deskripsi : Mencari Huruf Vokal*/
/*Author : Muhammad Rubiyanto P*/
/*Tanggal : 6 April 2016*/

#include <stdio.h>

int main(){

    char Input;

    scanf("%c",&Input);

    if(Input=='a' || Input=='A' || Input=='i' || Input=='I' || Input=='u' || Input=='U' || Input=='e' || Input=='E' || Input=='o' || Input=='O')
    {
        //jika huruf a/A/i/I/u/U/e/E/o/O
        printf("Huruf Vokal\n");
    }
    else
    {
        //jika bukan huruf a/A/i/I/u/U/e/E/o/O
        printf("Bukan Huruf Vokal\n");
    }

    return 0;

}
