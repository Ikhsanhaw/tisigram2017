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
	int N, bilangan[100], max=0, i;
	scanf("%d", &N);
	
	for(i=0 ; i<N ; i++){
		scanf("%d", &bilangan[i]);
		if (max<bilangan[i]){
			max = bilangan[i];
		}
	}
	
	printf("%d\n", max);
	return 0;
}
