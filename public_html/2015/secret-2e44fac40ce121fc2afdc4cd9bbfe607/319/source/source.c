/*========================================================= 
Program : Reverse_Tisigram.c  								
Deskripsi :	Membalikan Tulisan		
Nama      : REKA ALAMSYAH									
Version	  : 1.0												
Tanggal   : 23 Maret 2016								
Compiler  : TDM-GCC 4.9.2 64-bit Release					
============================================================ */
#include <stdio.h>
#include <string.h>

int main(){
	int i;
	char kata[11];
	
	gets(kata);
	
	for(i=(strlen(kata)-1);i>=0;i--){
		printf("%c",kata[i]);//menampilkan input
	}
	
	printf("\n");
	return 0;
}

