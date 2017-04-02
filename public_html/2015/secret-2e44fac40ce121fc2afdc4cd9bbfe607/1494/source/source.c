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

int main()
{
	char kalimat[2001];
	char dicari[2001];
	int i, jumlah=0;
	
	gets(kalimat);
	scanf("%s", &dicari);
	
	for(i=0 ; i<strlen(kalimat) ; i++)
	{
		if (strncmp(&kalimat[i],dicari,strlen(dicari)) == 0){
			jumlah++;
		}
	}
	
	printf("%d\n", jumlah);
	
	return 0;
}
