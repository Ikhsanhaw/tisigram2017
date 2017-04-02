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

typedef struct{
	int x;
	int y;
} point ;

int main()
{
	// Deklarasi
	point pusat, titik;
	int r;
	
	scanf("%d %d", &pusat.x, &pusat.y);
	scanf("%d", &r);
	scanf("%d %d", &titik.x, &titik.y);
	
	if (titik.x == pusat.x && titik.y == pusat.y){
		printf("tepat pada titik tengah arena pertandingan");
	} else if (sqrt(pow(titik.x-pusat.x,2) + pow(titik.y-pusat.y,2)) == r){
		printf("tepat pada batas arena pertandingan");
	} else if (sqrt(pow(titik.x-pusat.x,2) + pow(titik.y-pusat.y,2)) > r){
		printf("di luar arena pertandingan");
	} else {
		printf("di dalam arena pertandingan");
	}
	printf("\n");
	
	return 0;
}
