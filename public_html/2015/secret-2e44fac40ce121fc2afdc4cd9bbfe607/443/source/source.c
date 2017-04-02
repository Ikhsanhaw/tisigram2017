/*
	Program 		: Vokal_Ferdhika.c
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
	char vokal[] = {"aiueo"}, karakter;
	int i,ketemu=0;
	
	/* Algoritma */
	scanf("%c",&karakter);
	
	while(i<strlen(vokal)){
		if(karakter==vokal[i]){
			ketemu=1;
			break;
		}
		i++;
	}
	
	if(ketemu!=1){
		printf("False\n");
	}else{
		printf("True\n");
	}
	
	return 0;
}

/* Modul */

