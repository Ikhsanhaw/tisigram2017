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
#include <stdbool.h>

int main()
{
	int i, j, T, N, nilai[10][100], index[10];
	bool remedial;
	
	scanf("%d", &T);
	for(i=0 ; i<T ; i++){
		scanf("%d", &N);
		for(j=0 ; j<N ; j++){
			scanf("%d", &nilai[i][j]);
		}
		index[i] = N;
	}
	for(i=0 ; i<T ; i++){
		remedial = false;
		for(j=0 ; j<index[i] ; j++){
			if(nilai[i][j] < 60){
				remedial = true;
			}
		}
		if (remedial){
			printf("anda harus remedial");
		} else {
			printf("lulus");
		}
		printf("\n");
	}

	return 0;
}
