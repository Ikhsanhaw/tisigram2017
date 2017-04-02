/*
	Program 		: _Ferdhika.c
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
	char kata[101][51];
	int i,j,n;
	
	/* Algoritma */
	scanf("%d",&n);
	
	fflush(stdin);
	
	for(i=0;i<n;i++){
		gets(kata[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<strlen(kata[i]);j++){
			if(kata[i][j]%2==0){
				printf("%c",kata[i][j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}

/* Modul */

