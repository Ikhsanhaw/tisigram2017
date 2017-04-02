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

int main()
{
	int x1, y1, x2, y2;
	
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	printf("%d\n", abs(x1-x2) + abs(y1-y2));
	
	return 0;
}
