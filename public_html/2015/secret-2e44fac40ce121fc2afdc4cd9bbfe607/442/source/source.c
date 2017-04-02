/*
	Program 		: Reverse_Ferdhika.c
	Deskripsi 		: 
	Author 			: Ferdhika Yudira (151524010)
	Tanggal/Version : -/01/2016 v.1.0
	Compiler 		: Dev C++ V5.7.1
	Ctt Lain 		: 
*/
#include<stdio.h>
#include<string.h>
/* Prototype */

int main(){
	/* Deklarasi */
	char kata[11];
	int i;
	
	/* Algoritma */
	gets(kata);
	
	for(i=strlen(kata)-1;i>=0;i--){
		printf("%c",kata[i]);	
	}
	
	printf("\n");
	
	return 0;
}

/* Modul */

