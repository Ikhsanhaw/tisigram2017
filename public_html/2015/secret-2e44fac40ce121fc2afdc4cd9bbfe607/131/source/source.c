/* Program : Tisigram_B.c
Deskripsi : membalikkan kata
Nama : Yudisthira Poyoh
Tanggal : 21 Maret 2016
Compiler : Dev-C++ 5.11
========================================================*/

#include <stdio.h>
#include <string.h>

int main ()
{
	char temp[1];
	char A[11];
	int i;
	int j;
	scanf("%[^\n]",A);
	j=strlen(A)-1;
	for (i=0; i<strlen(A)/2; i++) {
		temp[0]=A[j];
		A[j]=A[i];
		A[i]=temp[0];
		j--;
}
	printf("%s\n",A);
	return 0;
}
