/*
	Program 		: _Ferdhika.c
	Deskripsi 		: 
	Author 			: Ferdhika Yudira (151524010)
	Tanggal/Version : -/01/2016 v.1.0
	Compiler 		: Dev C++ V5.7.1
	Ctt Lain 		: 
*/
#include<stdio.h>

/* Prototype */

int main(){
	/* Deklarasi */
	unsigned int n,i,angka,maks=0;
	
	/* Algoritma */
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&angka);
		if(angka>maks){
			maks=angka;
		}
	}
	
	printf("%d\n",maks);
	
	return 0;
}

/* Modul */

