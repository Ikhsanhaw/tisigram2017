/* Program		: Halo dunia
	Deskripsi	: Halo dunia
	Nama		: Rizky Adam Prananda
	Tanggal		: 22 Maret 2016
	Versi		: v0.1
	Compiler	: Dev C++ 5.7.1
*/

#include <stdio.h>
#include <string.h>

int main(){
	char kalimat[11];
	char arrayString[11];
	int indeks;
	int panjangString;
	
	scanf("%11[^\n]" , kalimat);
	panjangString = strlen(kalimat);
	
	for(indeks = 0 ; indeks < panjangString ; indeks++){
		arrayString[indeks] = kalimat[indeks];
	}

	for(indeks = panjangString-1 ; indeks >= 0 ; indeks--){
		printf("%c" , arrayString[indeks]);
	}
		printf("\n");
		
	return 0;
}
