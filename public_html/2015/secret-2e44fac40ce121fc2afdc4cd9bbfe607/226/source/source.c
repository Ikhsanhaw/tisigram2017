/* Program : Tisigram_F.c
Deskripsi : bilangan terbesar dari N buah yang dibaca
Nama : Yudisthira Poyoh
Tanggal : 22 Maret 2016
Compiler : Dev-C++ 5.11
========================================================*/

#include <stdio.h>

int main() {
	int N,i,max;
	scanf("%d",&N);
	int A[N];
	for (i=0; i<N; i++) {
		scanf("%d",&A[i]);
	}
	if (A[0]>A[1]) {
		max=A[0];
	} else {
		max=A[1];
	}
	for (i=2; i<N; i++) {
			if (A[i] > max) {
				max=A[i];	
				}
			}
	printf("%d\n",max);
	return 0;
}
