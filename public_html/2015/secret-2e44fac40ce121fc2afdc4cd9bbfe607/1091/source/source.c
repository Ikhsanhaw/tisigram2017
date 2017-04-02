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
	// Deklarasi
	int i, j, k, turus=0, terbanyak, terpilih[50], pemilu, calon, tempat, kotakSuara[50][100][50];
	
	scanf("%d", &pemilu);
	for(i=0 ; i<pemilu ; i++){
		terbanyak = 0;
		scanf("%d %d", &calon, &tempat);
		for(j=0 ; j<tempat ; j++){
			for(k=0 ; k<calon ; k++){
				scanf("%d", &kotakSuara[i][j][k]);
			}
		}
		
		for(j=0 ; j<calon ; j++){
			turus = 0;
			for(k=0 ; k<tempat ; k++){
				turus += kotakSuara[i][k][j];
			}
			if (turus > terbanyak){
				terpilih[i] = j;
				terbanyak = turus;
			}
		}
	}
	
	for(i=0 ; i<pemilu ; i++){
		printf("%d\n", terpilih[i]+1);
	}
	
	return 0;
}
