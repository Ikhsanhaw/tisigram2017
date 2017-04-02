/* Program : Tisigram_L.c
Deskripsi : menghafal huruf
Nama : Yudisthira Poyoh
Tanggal : 22 Maret 2016
Compiler : Dev-C++ 5.11
========================================================*/

#include <stdio.h>
//A=65
int main() {
	int N,i,x;
	scanf("%d",&N);
	scanf("%d",&i);
	i = i + 64;
	printf("%c ",i);
	for(x=1;x<N;x++) {
		i--;
		printf("%c ",i);
	}
	printf("\n");
	return 0;
}
