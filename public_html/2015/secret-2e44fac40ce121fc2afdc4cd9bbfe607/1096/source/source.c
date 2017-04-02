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
	int S, M;
	scanf("%d", &S);
	scanf("%d", &M);
	
	printf("%s\n", 2*S>=M? "PERANG" : "MUNDUR");
	return 0;
}
