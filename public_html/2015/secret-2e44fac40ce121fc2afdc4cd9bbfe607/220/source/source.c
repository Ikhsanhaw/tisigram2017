/* Program : Tisigram_C.c
Deskripsi : tampilkan huruf vokal
Nama : Yudisthira Poyoh
Tanggal : 22 Maret 2016
Compiler : Dev-C++ 5.11
========================================================*/

#include <stdio.h>

int main() {
	char a;
	scanf("%c",&a);
	if (a=='a' || a=='A' || a=='i' || a=='I' || a=='u' || a=='U' || a=='e' || a=='E' || a=='o' || a=='O') {
		printf("True\n");
	} else {
		printf("False\n");
	}
	return 0;
}
