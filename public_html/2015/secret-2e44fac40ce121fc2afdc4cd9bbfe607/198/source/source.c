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
#include <stdbool.h>

bool vokal(char i)
{
	return ((tolower(i)== 'a') || (tolower(i)== 'i') || (tolower(i)== 'u') || (tolower(i)== 'e') || (tolower(i)== 'o'));
}


int main()
{
	int i;
	char text;
	scanf("%c", &text);
	
	if(vokal(text)){
		printf("True");
	} else {
		printf("False");
	}
	printf("\n");
	
	return 0;
	
}
