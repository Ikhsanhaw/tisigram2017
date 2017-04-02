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
	scanf("%d %d",&N,&i);
	if (N<=i && N<=25) {
	i = i + 64;
	for(x=1;x<N;x++) {
		printf("%c ",i);
		i--;
	}
	printf("%c\n",i);
}
	return 0;
}
