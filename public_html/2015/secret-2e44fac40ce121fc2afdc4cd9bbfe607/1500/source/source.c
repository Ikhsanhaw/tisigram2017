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
#include <math.h>
#include <stdbool.h>

int main()
{
	int i=0, N;
	bool ketemu=false;
	
	scanf("%d", &N);
	while((i<=20) && (!ketemu))
	{
		if(pow(2,i) == N){
			ketemu = true;
		}
		i++;
	}
	printf("%s\n", ketemu? "TRUE" : "FALSE");
	
	return 0;
}
