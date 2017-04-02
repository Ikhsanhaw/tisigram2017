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
	int N;
	scanf("%d", &N);
	printf("%d\n", N < N/2 + N/3 + N/4 ? N/2 + N/3 + N/4 : N);
	return 0;
}
