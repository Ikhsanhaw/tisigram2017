/*
======================================================================================

Program 		: mCircle.c
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
	int i;
	char text[10];
	scanf("%s", &text);
	
	for(i=strlen(text)-1 ; i>=0 ; i-- ){
		printf("%c", text[i]);
	}
	printf("\n");
	
	return 0;
	
}
