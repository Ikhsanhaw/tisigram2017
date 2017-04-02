/*
======================================================================================

Program 		: TISIGRAM.c
Deskripsi		: TISIGRAM
Nama			: Herdhiantoko Fathani Sandra
Tanggal/Versi	: 2016, v.01
Compiler		: Dev-C++ 5.10

======================================================================================
*/

#include <stdio.h>

int FPB (int A, int B){
	int max, i;
	int hasil;
	
	hasil = 1;
	
	if(A>B){
		max=A;
	} else {
		max=B;
	}
	
	for(i=1 ; i<=max ; i++){
		if(A % i == 0 && B % i ==0){
			hasil = i;
		}
	}
	
	return hasil;
}

int main()
{
	int i, N, penyebut=1;
	scanf("%d", &N);
	int X[N][2];
	
	for(i=0 ; i<N ; i++){
		scanf("%d %d", &X[i][0], &X[i][1]);
	}
	for(i=0 ; i<N ; i++){
		penyebut = FPB(X[i][0], X[i][1]);
		printf("%d/%d\n", (X[i][1])/penyebut , X[i][0] /penyebut);
	}
}
