/*=========================================
*	Program 		: Tisigram-H.c
*	Nama 			: Hadiarto B
*	Tanggal/Versi 	: 24 Maret 2016, v01.0
*	Compiler		: Dev-C++ v5.1.0
*	Catatan			: 
=========================================*/
#include <stdio.h>
#include <math.h>

int main(){
	long long int x1,x2,y1,y2,jarak;
	
	scanf("%lld %lld %lld %lld", &x1,&y1,&x2,&y2);
	
	jarak = abs(x1-x2) + abs(y1-y2);
	
	printf("%lld\n",jarak);
	
	return 0;
}

