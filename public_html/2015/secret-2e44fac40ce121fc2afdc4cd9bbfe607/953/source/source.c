/* Program		: Perkalian_Aulia.c
Deskripsi 		: Soal J
Nama 			: M Aulia Rahman
Tanggal			: 
Compiler		: Dev C++
Ctt Lain 		: 

============================================================ */
#include<stdio.h>

int main(){
	int S,M;
	
	scanf("%d\n%d",&S,&M);
	S=S*2;
	if(S>M){
		printf("PERANG\n");
	} else{
		printf("MUNDUR\n");
	}
	return 0;
	
}
