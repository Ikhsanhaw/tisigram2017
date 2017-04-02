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
	char N1, N2;
	int index;
	scanf("%c\n%c", &N1, &N2);

	for(index=N1-1 ; index>N1-(N1-N2) ; index--){
		printf("%c\n", index);
	}
	return 0;
}
