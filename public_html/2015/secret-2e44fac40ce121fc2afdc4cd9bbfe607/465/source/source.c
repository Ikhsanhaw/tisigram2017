#include <stdio.h>
#include <string.h>

int main(){
	/* DEKLARASI */
	char text[11];
	short indeks;
	char temp;
	
	/* Proses */
	gets(text);
	for(indeks=strlen(text)-1; indeks>=0; indeks--){
		printf("%c", text[indeks]);
	}
	
	printf("\n");
	return 0;
}
