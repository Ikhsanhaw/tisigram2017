/*
======================================================================================

Program 		: TISIGRAM.c
Deskripsi		: TISIGRAM
Nama			: Herdhiantoko Fathani Sandra
Tanggal/Versi	: 2016, v.01
Compiler		: Dev-C++ 5.10

======================================================================================
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int x;
	
	scanf("%d", &x);
	switch (x%7)
	{
		case 0 : printf("Rabu"); break;
		case 1 : printf("Kamis"); break;
		case 2 : printf("Jumat"); break;
		case 3 : printf("Sabtu"); break;
		case 4 : printf("Minggu"); break;
		case 5 : printf("Senin"); break;
		case 6 : printf("Selasa"); break;
	}
	printf("\n");
	return 0;
}
