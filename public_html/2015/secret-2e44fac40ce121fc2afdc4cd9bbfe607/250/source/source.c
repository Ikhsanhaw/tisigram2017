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
	long int x1, y1, x2, y2;
	
	scanf("%ld %ld %ld %ld", &x1, &y1, &x2, &y2);
	printf("%d\n", abs(x1-x2) + abs(y1-y2));
	
	return 0;
}
