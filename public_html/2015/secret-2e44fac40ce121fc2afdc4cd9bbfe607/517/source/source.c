/*=========================================
*	Program 		: Tisigram-F.c
*	Nama 			: Hadiarto B
*	Tanggal/Versi 	: 24 Maret 2016, v01.0
*	Compiler		: Dev-C++ v5.1.0
*	Catatan			: 
=========================================*/

#include <stdio.h>
int main()
{
	// Deklarasi
	int bil[100],N, max=0, i;
	
	// Algoritma
	scanf("%d",&N);
	for (i=0 ; i<N ; i++){
		scanf("%d", &bil[i]);
	}
	
	for (i=0 ; i<N ; i++){
		if (max < bil[i]){
			max = bil[i];
		}
	}
	printf("%d\n", max);	
	return 0;
}
