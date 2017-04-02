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
	int N, i;
	char text[1000][15];
	
	scanf("%d", &N);
	for(i=0 ; i<N ; i++){
		scanf("%s", text[i]);
	}
	for(i=0 ; i<N ; i++){
		printf("%s\n", text[i]);	
	}
	
	return 0;
}
