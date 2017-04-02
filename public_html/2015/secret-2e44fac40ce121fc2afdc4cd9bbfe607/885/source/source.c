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
#include <string.h>

int main()
{
	int N, i, j;
	scanf("%d", &N);
	char string[N][50];
	
	for (i=0 ; i<N ; i++){
		scanf("%s", &string[i]);
	}
	for(i=0 ; i<N ; i++){
		for(j=0 ; j<strlen(string[i]) ; j++){
			if (string[i][j] % 2 == 0){
				printf("%c", string[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
