/* 
Program 		: Maks10_Fahmi.c
Deskripsi 		: Menampilkan nilai terbesar
Nama 			: Fahmi Faturahman Nul Hakim
Tanggal/versi 	: 24112015/V1.0 
Compiler 		: Dev-C++ 5.7.1
==========================================================================
*/

#include<stdio.h>

int main()

{ /* DEKLARASI */
	int i,maks;
	short N;
	int x[100];
	
  /* PROSES */
  	scanf("%d", &N);
  	
  	for(i=0; i<N; i++){
  		scanf("%d", &x[i]);
  	}
  	
	maks=x[1];
  	for(i=0; i<N; i++){
  		if(maks<x[i]){
  			maks=x[i];
  		}
  	}
  	printf("%d\n", maks);
  	return 0;
}
