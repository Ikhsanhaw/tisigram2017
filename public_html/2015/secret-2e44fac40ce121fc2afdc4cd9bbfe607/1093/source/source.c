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
	// Deklarasi
	long int hasil=0, miniatur[100000];
	int i, j, N, jumlah[100000];
	bool ada;
	
	scanf("%d", &N);
	i=0;
	while((i<N) && (hasil != -1)){
		scanf("%ld", &miniatur[i]);
		ada = false;
		for(j=i-1 ; j>=0 ; j--){
			if(miniatur[i] == miniatur[j]){
				jumlah[j] += 1;
				miniatur[i] = 0;
				ada = true;
				if (jumlah[j] > miniatur[j]){
					hasil = -1;
				}
			}
		}
		if (!ada){
			hasil += miniatur[i];
			jumlah[i] = 1;
		}
		i++;
	}
	printf("%d\n", hasil);
	
	return 0;
}
