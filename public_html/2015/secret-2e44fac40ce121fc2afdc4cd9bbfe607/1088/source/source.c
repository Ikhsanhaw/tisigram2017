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
	// Deklarasi
	char test[3], huruf[6] = {'E','D','C','B','A','S'};
	int i, j, hasil=0, nilai[6] = {3,6,9,12,15,18};
	
	for(i=0 ; i<3 ; i++){
		scanf("%s", &test[i]);
		j=0;
		while (test[i] != huruf[j]) {
			j++;
		}
		hasil += nilai[j];
	}
	switch (hasil/3)
	{
		case 3 : printf("E"); break;
		case 4 : printf("E+"); break;
		case 5 : printf("D-"); break;
		case 6 : printf("D"); break;
		case 7 : printf("D+"); break;
		case 8 : printf("C-"); break;
		case 9 : printf("C"); break;
		case 10 : printf("C+"); break;
		case 11 : printf("B-"); break;
		case 12 : printf("B"); break;
		case 13 : printf("B+"); break;
		case 14 : printf("A-"); break;
		case 15 : printf("A"); break;
		case 16 : printf("A+"); break;
		case 17 : printf("S-"); break;
		case 18 : printf("S"); break;
	}
	printf("\n");
	
	return 0;
}
