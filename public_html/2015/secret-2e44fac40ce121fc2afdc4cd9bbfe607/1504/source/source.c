/*
======================================================================================

Program 		: Tisigram.c
Description		: TISIGRAM
Author			: Herdhiantoko Fathani Sandra
Date, Version	: 2016, v.01
Compiler		: Dev-C++ 5.10

======================================================================================
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char angka[100][11];
	int T, i, j, jumlah;
	
	scanf("%d", &T);
	for(i=0 ; i<T ; i++){
		scanf("%s", &angka[i]);
	}
	
	for(i=0 ; i<T ; i++){
		jumlah=0;
		for(j=strlen(angka[i])-1 ; j>=0 ; j--){
			if(strncmp(&angka[i][j],"0",1) == 0){
				jumlah++;
			} else {
				break;
			}
		}
		printf("%d\n", jumlah);
	}
	return 0;
}
