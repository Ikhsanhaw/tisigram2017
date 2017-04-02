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
#include <stdbool.h>

char pola(int H)
{
	int i;
	
	for(i=0 ; i<H ; i++){
		printf("*");
	}
	printf("\n");
}

int main()
{
	int i, N, temp;
	
	scanf("%d", &N);
	
	if (N!=1){
		for(i=0 ; i<N-2 ; i++){
			printf("*\n");
			pola(i+2);
		}
		for(i=N-4 ; i>=0 ; i--){
			printf("*\n");
			pola(i+2);
		}
		printf("*\n");
		pola(N);
		for(i=0 ; i<N-2 ; i++){
			printf("*\n");
			pola(i+2);
		}
		for(i=N-4 ; i>=0 ; i--){
			printf("*\n");
			pola(i+2);
		}
		printf("*\n");		
	} else {
		printf("*\n");
	}

	
	return 0;
	
}
