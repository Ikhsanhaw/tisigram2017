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
int main()
{
	int N, murid;
	scanf("%d", &N);
	scanf("%d", &murid);
	
	printf("%d %d\n", N/murid, N%murid);
	
	return 0;
	
}