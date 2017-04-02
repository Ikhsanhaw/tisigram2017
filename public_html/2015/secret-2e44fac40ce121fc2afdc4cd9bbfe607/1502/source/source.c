/*
======================================================================================

Program 		: Tisigram.c
Description		: TISIGRAM
Author			: Herdhiantoko Fathani Sandra
Date, Version	: 2016, v.01
Compiler		: Dev-C++ 5.10

======================================================================================
*/

#include <stdio.h>

int main()
{
	long int angka[100];
	long int modulus[9] = {10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};
	int T, i, j, jumlah;
	
	scanf("%d", &T);
	for(i=0 ; i<T ; i++)
	{
		scanf("%ld", &angka[i]);
	}
	
	for(i=0 ; i<T ; i++)
	{
		jumlah=0;
		for(j=0 ; j<9 ; j++){
			if(angka[i] % modulus[j] == 0){
				jumlah++;
			} else {
				break;
			}
		}
		printf("%d\n", jumlah);
	}
	return 0;
}
