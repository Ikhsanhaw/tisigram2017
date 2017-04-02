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
	int i, N, index;
	scanf("%d %d", &N, &i);
//	i += 64;
	for(index=i+64 ; index>i-N+64 ; index--){
		if(index==i+64){
			printf("%c", index);
		} else {
			printf(" %c", index);
		}
	}
	printf("\n");
	return 0;
}
